#ifndef _CHECKFIT_
#define _CHECKFIT_


#include <iostream>
#include <vector>
#include <map>
#include <utility>


#include "ComputeResults.hh"
#include "Band.hh"
#include "MinimizeFactory.hh"
#include "Hypothesis.hh"
#include "BandsFactory.hh"

namespace START {
  
  class CheckFit 
  {
    
  public :
    CheckFit(BandsFactory &BandsFact, std::vector<Band> &BandArray, int N_iteration, Hypothesis &hypo); // use in the FCN
    ~CheckFit();
    void add_N_On();
    inline std::vector<Band> Get_band()   const  { return fBandArray;}
  

  private :
  
    double f_iteration;
    
    std::vector<Band> fBandArray; ///< Band's vector

    Hypothesis *fHypothesis; ///< Hypothesis

    ComputeResults *fCompRes; ///< ComputeResult to save time !


  };
}
#endif
