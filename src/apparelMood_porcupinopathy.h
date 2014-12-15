//
//  apparelMode_porcupinopathy.h
//  A_P_P_A_R_E_L
//
//  Created by Julien on 05/12/2014.
//
//

#pragma once


#include "apparelMod.h"
#include "ofxButterfly.h"

class apparelMood_porcupinopathy : public apparelMod
{
	public:
		apparelMood_porcupinopathy	();
		~apparelMood_porcupinopathy	();

		void				apply				();
		void				onParameterChanged	(ofAbstractParameter& parameter);

	private:
	    ofxButterfly 		butterfly;
 
		ofParameter<float>	m_amplitude;
		ofParameter<float>	m_levelSubdiv;
};