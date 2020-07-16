// Max van leeuwen
// PixelSort (blinkscript) v1.0 - maxvanleeuwen.com/pixelsort
//
// Sort pixels in an orderly fashion.




kernel PixelSort : ImageComputationKernel<eComponentWise>{
	Image<eRead, eAccessRanged1D, eEdgeNone> src;
	Image<eRead, eAccessRanged1D, eEdgeNone> sort;
	Image<eWrite, eAccessRanged1D> dst;


  
param:

	// these are the knobs on the node
	float threshold;
	int cutOff;



local:

	// image width
	int srcWidth;



	void define() {

		// sorting threshold
		defineParam(threshold, "threshold", 0.0f);

		// maximum length of sort (0 is unlimited)
		defineParam(cutOff, "cutOff", 0);
	}




	void init(){

		// get image width
		srcWidth = dst.bounds.width();
	}




	// run over each pixel
	void process(int2 pos) {

		// only once per row
		if(pos.x == 0){

			// make list for sorting order input, img input
			float dataList[10000][2];


			// populate list for sorting order and img
			for(int pixel = 0; pixel < srcWidth; pixel++){

				dataList[pixel][0] = sort(pixel);
				dataList[pixel][1] = src(pixel);
			}




			// go through row of pixels
			for (int thisX = 0; thisX < srcWidth; thisX++) {

				// found pixel index placeholder, starts at current pixel index
				int foundPixel = thisX;

				// found img value placeholder, starts at this img value
				float foundValue = dataList[thisX][1];



				// for each pixel in row
				for (int walkX = thisX; walkX < srcWidth; walkX++) {

					// skip the rest of the row if the sort value is under threshold, or if the maximum sorting limit has been reached
					if  (dataList[walkX][0] < threshold || ( (walkX - thisX) > cutOff && cutOff != 0) ) {

						break;	
					}



					// if found img value is higher than the current record
					if (dataList[walkX][1] < foundValue) {

						// remember the index of that pixel
						foundPixel = walkX;

						// remember its img value and set as new highscore
						foundValue = dataList[walkX][1];
					}
				}



				// move old values of sort and img in list to this high score index, so these values are not lost
				dataList[foundPixel][0] = dataList[thisX][0];
				dataList[foundPixel][1] = dataList[thisX][1];


				// write image
				dst(thisX) = foundValue;
			}
		}
	}
};