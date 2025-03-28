#pragma once

#ifdef RNBO_DESCRIPTION_AS_STRING

namespace RNBO {
	const std::string patcher_description(
			R"RNBOLIT({
  "parameters": [
    {
      "type": "ParameterTypeNumber",
      "index": 0,
      "name": "saturation",
      "paramId": "saturation",
      "minimum": 1,
      "maximum": 10,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Saturation",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "Par)RNBOLIT"
R"RNBOLIT(ameterTypeNumber",
      "index": 1,
      "name": "mix",
      "paramId": "mix",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Mix",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 2,
      "name": "spread",
   )RNBOLIT"
R"RNBOLIT(   "paramId": "spread",
      "minimum": -10,
      "maximum": 10,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Spread",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 3,
      "name": "feedback",
      "paramId": "feedback",
      "minimum": 0,
      )RNBOLIT"
R"RNBOLIT("maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 75,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Feedback",
      "unit": "%",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 4,
      "name": "freq",
      "paramId": "freq",
      "minimum": 0,
      "maximum": 5000,
      "exponent": 1,
      "steps": 0,)RNBOLIT"
R"RNBOLIT(
      "initialValue": 500,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Frequency",
      "unit": "Hz",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 5,
      "name": "res",
      "paramId": "res",
      "minimum": 1,
      "maximum": 5,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      ")RNBOLIT"
R"RNBOLIT(enumValues": [],
      "displayName": "Resonance",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 6,
      "name": "in",
      "paramId": "ingain/in",
      "minimum": -12,
      "maximum": 12,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "In",
      "u)RNBOLIT"
R"RNBOLIT(nit": "dB",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 7,
      "name": "out",
      "paramId": "outgain/out",
      "minimum": -12,
      "maximum": 12,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Out",
      "unit": "dB",
      "order": 0,
      "debug": false,
 )RNBOLIT"
R"RNBOLIT(     "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 8,
      "name": "transp",
      "paramId": "Pitch/transp",
      "minimum": 0,
      "maximum": 8,
      "exponent": 1,
      "steps": 9,
      "initialValue": 4,
      "isEnum": true,
      "enumValues": [
        "-24",
        "-19",
        "-12",
        "-7",
        "0",
        "7",
        "12",
        "19",
        "24"
      ],
      "di)RNBOLIT"
R"RNBOLIT(splayName": "Shift",
      "unit": "st",
      "order": 2,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 9,
      "name": "rate",
      "paramId": "Bubble/rate",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 25,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Rate",
      "unit": "%",
      "orde)RNBOLIT"
R"RNBOLIT(r": 1,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 10,
      "name": "depth",
      "paramId": "Bubble/depth",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Depth",
      "unit": "%",
      "order": 2,
      "debug": false,
      "visible": tr)RNBOLIT"
R"RNBOLIT(ue,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 11,
      "name": "burst",
      "paramId": "Bubble/burst",
      "minimum": 0,
      "maximum": 2,
      "exponent": 1,
      "steps": 3,
      "initialValue": 7,
      "isEnum": true,
      "enumValues": [
        "4",
        "8",
        "16"
      ],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "s)RNBOLIT"
R"RNBOLIT(ignalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 12,
      "name": "threshold",
      "paramId": "Gate/threshold",
      "minimum": -100,
      "maximum": 0,
      "exponent": 1,
      "steps": 0,
      "initialValue": -100,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Threshold",
      "unit": "dB",
      "order": 1,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType":)RNBOLIT"
R"RNBOLIT( "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 13,
      "name": "quant",
      "paramId": "DelayTime/Quant/quant",
      "minimum": 0,
      "maximum": 3,
      "exponent": 1,
      "steps": 4,
      "initialValue": 1,
      "isEnum": true,
      "enumValues": [
        "free",
        "beat",
        "triplet",
        "dotted"
      ],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalInd)RNBOLIT"
R"RNBOLIT(ex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 14,
      "name": "TimeInMS",
      "paramId": "DelayTime/Quant/TimeInMS",
      "minimum": 0,
      "maximum": 3000,
      "exponent": 1,
      "steps": 0,
      "initialValue": 500,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Time",
      "unit": "ms",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOT)RNBOLIT"
R"RNBOLIT(ypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 15,
      "name": "TimeInBeats",
      "paramId": "DelayTime/Quant/TimeInBeats",
      "minimum": 0,
      "maximum": 4,
      "exponent": 1,
      "steps": 5,
      "initialValue": 3,
      "isEnum": true,
      "enumValues": [
        "1/8",
        "1/4",
        "1/2",
        "1x",
        "2x"
      ],
      "displayName": "Note",
      "unit": "beats",
      "order": 0,
      "debug": false,
      "visible": tr)RNBOLIT"
R"RNBOLIT(ue,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    }
  ],
  "numParameters": 16,
  "numSignalInParameters": 0,
  "numSignalOutParameters": 0,
  "numInputChannels": 2,
  "numOutputChannels": 2,
  "numMidiInputPorts": 1,
  "numMidiOutputPorts": 0,
  "transportUsed": true,
  "externalDataRefs": [],
  "patcherSerial": 0,
  "inports": [
    {
      "tag": "tap-tempo",
      "meta": ""
    },
    {
      "tag": "tap-mult",
      "meta": ""
    }
  ],
  "outports": [
    {
      "tag")RNBOLIT"
R"RNBOLIT(: "atten",
      "meta": ""
    }
  ],
  "inlets": [
    {
      "type": "signal",
      "index": 1,
      "tag": "in1",
      "meta": ""
    },
    {
      "type": "signal",
      "index": 2,
      "tag": "in2",
      "meta": ""
    },
    {
      "type": "midi"
    }
  ],
  "outlets": [
    {
      "type": "signal",
      "index": 1,
      "tag": "out1",
      "meta": ""
    },
    {
      "type": "signal",
      "index": 2,
      "tag": "out2",
      "meta": ""
    }
  ],
  "presetid": "rnbo")RNBOLIT"
R"RNBOLIT(,
  "meta": {
    "architecture": "x64",
    "filename": "Bubbler.maxpat",
    "rnboobjname": "rnbomatic",
    "maxversion": "8.6.4",
    "rnboversion": "1.3.3",
    "name": "untitled"
  }
})RNBOLIT"
		);

	const std::string patcher_presets(
			R"RNBOLIT([
  {
    "name": "untitled",
    "preset": {
      "__sps": {
        "Bubble": {
          "__sps": {
            "LFO~": {},
            "TapTempo": {}
          },
          "burst": {
            "value": 2
          },
          "depth": {
            "value": 50
          },
          "rate": {
            "value": 25
          }
        },
        "DelayTime": {
          "__sps": {
            "Quant": {
              "TimeInBeats": {
                "value": 3
              },
        )RNBOLIT"
R"RNBOLIT(      "TimeInMS": {
                "value": 500
              },
              "quant": {
                "value": 1
              }
            }
          }
        },
        "Gate": {
          "threshold": {
            "value": -100
          }
        },
        "LowPass": {},
        "Mix~": {},
        "Pitch": {
          "__sps": {
            "FreqCalc": {},
            "PitchShift~": {},
            "PitchShift~[1]": {},
            "Switch~": {}
          },
          "transp": {
)RNBOLIT"
R"RNBOLIT(            "value": 4
          }
        },
        "Saturation": {},
        "ingain": {
          "in": {
            "value": 0
          }
        },
        "outgain": {
          "out": {
            "value": 0
          }
        }
      },
      "feedback": {
        "value": 75
      },
      "freq": {
        "value": 500
      },
      "mix": {
        "value": 0
      },
      "res": {
        "value": 1
      },
      "saturation": {
        "value": 1
      },
      "spread": {
 )RNBOLIT"
R"RNBOLIT(       "value": 0
      }
    }
  }
])RNBOLIT"
		);
}

#else

#include <json/json.hpp>

namespace RNBO {
	const nlohmann::json patcher_description = nlohmann::json::parse(
			std::string(
				R"RNBOLIT({
  "parameters": [
    {
      "type": "ParameterTypeNumber",
      "index": 0,
      "name": "saturation",
      "paramId": "saturation",
      "minimum": 1,
      "maximum": 10,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Saturation",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "Par)RNBOLIT"
R"RNBOLIT(ameterTypeNumber",
      "index": 1,
      "name": "mix",
      "paramId": "mix",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Mix",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 2,
      "name": "spread",
   )RNBOLIT"
R"RNBOLIT(   "paramId": "spread",
      "minimum": -10,
      "maximum": 10,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Spread",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 3,
      "name": "feedback",
      "paramId": "feedback",
      "minimum": 0,
      )RNBOLIT"
R"RNBOLIT("maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 75,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Feedback",
      "unit": "%",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 4,
      "name": "freq",
      "paramId": "freq",
      "minimum": 0,
      "maximum": 5000,
      "exponent": 1,
      "steps": 0,)RNBOLIT"
R"RNBOLIT(
      "initialValue": 500,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Frequency",
      "unit": "Hz",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 5,
      "name": "res",
      "paramId": "res",
      "minimum": 1,
      "maximum": 5,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      ")RNBOLIT"
R"RNBOLIT(enumValues": [],
      "displayName": "Resonance",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 6,
      "name": "in",
      "paramId": "ingain/in",
      "minimum": -12,
      "maximum": 12,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "In",
      "u)RNBOLIT"
R"RNBOLIT(nit": "dB",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 7,
      "name": "out",
      "paramId": "outgain/out",
      "minimum": -12,
      "maximum": 12,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Out",
      "unit": "dB",
      "order": 0,
      "debug": false,
 )RNBOLIT"
R"RNBOLIT(     "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 8,
      "name": "transp",
      "paramId": "Pitch/transp",
      "minimum": 0,
      "maximum": 8,
      "exponent": 1,
      "steps": 9,
      "initialValue": 4,
      "isEnum": true,
      "enumValues": [
        "-24",
        "-19",
        "-12",
        "-7",
        "0",
        "7",
        "12",
        "19",
        "24"
      ],
      "di)RNBOLIT"
R"RNBOLIT(splayName": "Shift",
      "unit": "st",
      "order": 2,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 9,
      "name": "rate",
      "paramId": "Bubble/rate",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 25,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Rate",
      "unit": "%",
      "orde)RNBOLIT"
R"RNBOLIT(r": 1,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 10,
      "name": "depth",
      "paramId": "Bubble/depth",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Depth",
      "unit": "%",
      "order": 2,
      "debug": false,
      "visible": tr)RNBOLIT"
R"RNBOLIT(ue,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 11,
      "name": "burst",
      "paramId": "Bubble/burst",
      "minimum": 0,
      "maximum": 2,
      "exponent": 1,
      "steps": 3,
      "initialValue": 7,
      "isEnum": true,
      "enumValues": [
        "4",
        "8",
        "16"
      ],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "s)RNBOLIT"
R"RNBOLIT(ignalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 12,
      "name": "threshold",
      "paramId": "Gate/threshold",
      "minimum": -100,
      "maximum": 0,
      "exponent": 1,
      "steps": 0,
      "initialValue": -100,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Threshold",
      "unit": "dB",
      "order": 1,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType":)RNBOLIT"
R"RNBOLIT( "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 13,
      "name": "quant",
      "paramId": "DelayTime/Quant/quant",
      "minimum": 0,
      "maximum": 3,
      "exponent": 1,
      "steps": 4,
      "initialValue": 1,
      "isEnum": true,
      "enumValues": [
        "free",
        "beat",
        "triplet",
        "dotted"
      ],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalInd)RNBOLIT"
R"RNBOLIT(ex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 14,
      "name": "TimeInMS",
      "paramId": "DelayTime/Quant/TimeInMS",
      "minimum": 0,
      "maximum": 3000,
      "exponent": 1,
      "steps": 0,
      "initialValue": 500,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Time",
      "unit": "ms",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOT)RNBOLIT"
R"RNBOLIT(ypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 15,
      "name": "TimeInBeats",
      "paramId": "DelayTime/Quant/TimeInBeats",
      "minimum": 0,
      "maximum": 4,
      "exponent": 1,
      "steps": 5,
      "initialValue": 3,
      "isEnum": true,
      "enumValues": [
        "1/8",
        "1/4",
        "1/2",
        "1x",
        "2x"
      ],
      "displayName": "Note",
      "unit": "beats",
      "order": 0,
      "debug": false,
      "visible": tr)RNBOLIT"
R"RNBOLIT(ue,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    }
  ],
  "numParameters": 16,
  "numSignalInParameters": 0,
  "numSignalOutParameters": 0,
  "numInputChannels": 2,
  "numOutputChannels": 2,
  "numMidiInputPorts": 1,
  "numMidiOutputPorts": 0,
  "transportUsed": true,
  "externalDataRefs": [],
  "patcherSerial": 0,
  "inports": [
    {
      "tag": "tap-tempo",
      "meta": ""
    },
    {
      "tag": "tap-mult",
      "meta": ""
    }
  ],
  "outports": [
    {
      "tag")RNBOLIT"
R"RNBOLIT(: "atten",
      "meta": ""
    }
  ],
  "inlets": [
    {
      "type": "signal",
      "index": 1,
      "tag": "in1",
      "meta": ""
    },
    {
      "type": "signal",
      "index": 2,
      "tag": "in2",
      "meta": ""
    },
    {
      "type": "midi"
    }
  ],
  "outlets": [
    {
      "type": "signal",
      "index": 1,
      "tag": "out1",
      "meta": ""
    },
    {
      "type": "signal",
      "index": 2,
      "tag": "out2",
      "meta": ""
    }
  ],
  "presetid": "rnbo")RNBOLIT"
R"RNBOLIT(,
  "meta": {
    "architecture": "x64",
    "filename": "Bubbler.maxpat",
    "rnboobjname": "rnbomatic",
    "maxversion": "8.6.4",
    "rnboversion": "1.3.3",
    "name": "untitled"
  }
})RNBOLIT"
			)
		);

	const nlohmann::json patcher_presets = nlohmann::json::parse(
			std::string(
				R"RNBOLIT([
  {
    "name": "untitled",
    "preset": {
      "__sps": {
        "Bubble": {
          "__sps": {
            "LFO~": {},
            "TapTempo": {}
          },
          "burst": {
            "value": 2
          },
          "depth": {
            "value": 50
          },
          "rate": {
            "value": 25
          }
        },
        "DelayTime": {
          "__sps": {
            "Quant": {
              "TimeInBeats": {
                "value": 3
              },
        )RNBOLIT"
R"RNBOLIT(      "TimeInMS": {
                "value": 500
              },
              "quant": {
                "value": 1
              }
            }
          }
        },
        "Gate": {
          "threshold": {
            "value": -100
          }
        },
        "LowPass": {},
        "Mix~": {},
        "Pitch": {
          "__sps": {
            "FreqCalc": {},
            "PitchShift~": {},
            "PitchShift~[1]": {},
            "Switch~": {}
          },
          "transp": {
)RNBOLIT"
R"RNBOLIT(            "value": 4
          }
        },
        "Saturation": {},
        "ingain": {
          "in": {
            "value": 0
          }
        },
        "outgain": {
          "out": {
            "value": 0
          }
        }
      },
      "feedback": {
        "value": 75
      },
      "freq": {
        "value": 500
      },
      "mix": {
        "value": 0
      },
      "res": {
        "value": 1
      },
      "saturation": {
        "value": 1
      },
      "spread": {
 )RNBOLIT"
R"RNBOLIT(       "value": 0
      }
    }
  }
])RNBOLIT"
			)
		);
}

#endif
