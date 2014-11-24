#ifndef _CHECKFIT_
#define _CHECKFIT_


#include <iostream>
#include <vector>
#include <map>
#include <utility>

//root
#include "TROOT.h"
#include "TMath.h"
#include "TRandom.h"
#include "TRandom3.h"
#include "TSystem.h"
#include "TDirectory.h"
#include "Math/QuantFuncMathCore.h"
#include "TUUID.h"

#include "ComputeResults.hh"
#include "Band.hh"
#include "MinimizeFactory.hh"
#include "Hypothesis.hh"
#include "BandsFactory.hh"

namespace START {
  
  class CheckFit 
  {
    
  public :
    CheckFit(BandsFactory &BandsFact ,std::vector<Band> &BandArray, Hypothesis &hypo); // use in the FCN
    ~CheckFit();
    void add_N_On(std::vector<Band> &BandArray);
    //inline std::vector<Band> Get_band()   const  { return fBandArray;}
  

  private :
  
    double f_iteration;
    TRandom3 trandom;
    //std::vector<Band> fBandArray; ///< Band's vector

    Hypothesis *fHypothesis; ///< Hypothesis

    ComputeResults *fCompRes; ///< ComputeResult to save time !


  };
}
#endif
