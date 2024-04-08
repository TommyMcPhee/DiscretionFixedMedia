#pragma once

#include "ofMain.h"
#include "PulseOsc.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void draw();
	void exit();
	void ofSoundStreamSetup(ofSoundStreamSettings& settings);
	void audioOut(ofSoundBuffer& buffer);
	void setupWav();
	void writeToFile(ofstream& file, int value, int size);
	void recordSample(int channel);
	float getIncrement(float cycles);
	void audioSetup();
	void refresh();
	void updateParameter(int control);
	float scaleControl(int control);
	float unipolar(float input);
	void getSample();
	float incrementPhasor(float phasor, float increment);
	array<float, 4>& spatialize(int controlA, int controlB, float sampleA, float sampleB, float inputSample);
	float getDuty(int control, int controlA, int controlB, float sampleA, float sampleB);
	float getFrequency(int control, int controlA, int controlB, float sampleA, float sampleB);
	float getAmplitude(int control, int controlA, int controlB, float sampleA, float sampleB);
	float getArgument(float center, float maximumIndex, int controlA, int controlB, float sampleA, float sampleB);
	inline float mix3(float a, float b, float c);
	void setUniforms();
	float getXY(float total);
	float getZ(float sampleTotal);
	ofVec3f getVec(int control);
	ofVec3f getPanVec(int control);
	ofstream wavFile;
	array<ofstream, 4> wavFiles;
	const int byteDepth = 2;
	int preAudioP;
	int postAudioP;
	int sampleInt;
	int maxSampleInt;
	const int sampleRate = 48000;
	const int bufferSize = 256;
	const int channels = 4;
	ofSoundStreamSettings settings;
	ofSoundStream stream;
	float nyquist;
	float startPan;
	array<float, 33> controls;
	array<float, 33> parameters;
	float dutyA;
	float dutyB;
	float dutyC;
	float frequencyA;
	float frequencyB;
	float frequencyC;
	float amplitudeA;
	float amplitudeB;
	float amplitudeC;
	float sampleA;
	float sampleB;
	float sampleC;
	float minimumfloat;
	float samplesElapsed;
	float phasor1;
	float phasor2;
	float phasor3;
	float phasor5;
	float phasor7;
	float phasor11;
	float phasor13;
	float phasor17;
	float phasor19;
	float phasor23;
	float increment1;
	float increment2;
	float increment3;
	float increment5;
	float increment7;
	float increment11;
	float increment13;
	float increment17;
	float increment19;
	float increment23;
	float dutyATotal;
	float dutyBTotal;
	float dutyCTotal;
	float frequencyATotal;
	float frequencyBTotal;
	float frequencyCTotal;
	float sampleATotal;
	float sampleBTotal;
	float sampleCTotal;
	float length;
	float feedback;
	array<float, 4> pannedA;
	array<float, 4> pannedB;
	array<float, 4> pannedC;
	array<float, 4> lastSample;
	array<float, 4> sample;
	int width;
	int height;
	int x;
	int y;
	ofVec2f window;
	ofVec3f xTranslate;
	ofVec3f yTranslate;
	ofVec3f zTranslate;
	ofVec3f xDuty;
	ofVec3f yDuty;
	ofVec3f xFrequency;
	ofVec3f yFrequency;
	ofVec3f xAmplitude;
	ofVec3f yAmplitude;
	ofVec3f xPan;
	ofVec3f yPan;
	ofFbo buffer0;
	ofFbo buffer1;
	ofShader shader;
	pulseOsc oscillatorA;
	pulseOsc oscillatorB;
	pulseOsc oscillatorC;
};