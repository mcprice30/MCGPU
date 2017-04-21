#ifndef GPUCOPY_H
#define GPUCOPY_H

#include "SimBox.h"

namespace GPUCopy {

	void GPUCopy::setParallel(bool in);
  bool onGpu();
  void setParallel(bool launchOnGpu);

  void copyIn(SimBox* sb);
  void copyOut(SimBox* sb);

  SimBox* simBoxGPU();
  SimBox* simBoxCPU();

	Real* atomCoordinatesPtr();

	Real* moleculeDataPtr();

	Real** angleDataPtr();
	Real* angleSizesPtr();
	Real* rollBackAngleSizesPtr();

	Real** bondDataPtr();
	Real* bondLengthsPtr();
	Real* rollBackBondLengthsPtr();
}


#endif
