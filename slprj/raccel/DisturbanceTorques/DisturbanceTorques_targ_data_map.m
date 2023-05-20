    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.normal
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.J
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 204;
            section.data(204)  = dumData; %prealloc

                    ;% rtP.C_LVLH_ECI
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Cb_ECI
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 9;

                    ;% rtP.k
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 18;

                    ;% rtP.mu
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 19;

                    ;% rtP.CompareToConstant_const
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 20;

                    ;% rtP.CompareToConstant_const_acmh2i3ocd
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 21;

                    ;% rtP.CompareToConstant_const_p1pgipjfy5
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 22;

                    ;% rtP.JulianDateConversion_day
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 23;

                    ;% rtP.JulianDateConversion_day_gmwb3op4jp
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 24;

                    ;% rtP.ECIPositiontoLLA_hour
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 25;

                    ;% rtP.CheckAltitude_max
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 26;

                    ;% rtP.CheckLatitude_max
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 27;

                    ;% rtP.CheckLongitude_max
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 28;

                    ;% rtP.Istimewithinmodellimits_max
                    section.data(14).logicalSrcIdx = 15;
                    section.data(14).dtTransOffset = 29;

                    ;% rtP.ECIPositiontoLLA_min
                    section.data(15).logicalSrcIdx = 16;
                    section.data(15).dtTransOffset = 30;

                    ;% rtP.CheckAltitude_min
                    section.data(16).logicalSrcIdx = 17;
                    section.data(16).dtTransOffset = 31;

                    ;% rtP.CheckLatitude_min
                    section.data(17).logicalSrcIdx = 18;
                    section.data(17).dtTransOffset = 32;

                    ;% rtP.CheckLongitude_min
                    section.data(18).logicalSrcIdx = 19;
                    section.data(18).dtTransOffset = 33;

                    ;% rtP.Istimewithinmodellimits_min
                    section.data(19).logicalSrcIdx = 20;
                    section.data(19).dtTransOffset = 34;

                    ;% rtP.CheckdeltaT_minmax
                    section.data(20).logicalSrcIdx = 21;
                    section.data(20).dtTransOffset = 35;

                    ;% rtP.CheckdeltaT_minmax_envwls20re
                    section.data(21).logicalSrcIdx = 22;
                    section.data(21).dtTransOffset = 37;

                    ;% rtP.JulianDateConversion_month
                    section.data(22).logicalSrcIdx = 23;
                    section.data(22).dtTransOffset = 39;

                    ;% rtP.JulianDateConversion_month_ikrq3awnv5
                    section.data(23).logicalSrcIdx = 24;
                    section.data(23).dtTransOffset = 40;

                    ;% rtP.ECIPositiontoLLA_sec
                    section.data(24).logicalSrcIdx = 25;
                    section.data(24).dtTransOffset = 41;

                    ;% rtP.JulianDateConversion_sec
                    section.data(25).logicalSrcIdx = 26;
                    section.data(25).dtTransOffset = 42;

                    ;% rtP.JulianDateConversion_sec_n54k2ymjb5
                    section.data(26).logicalSrcIdx = 27;
                    section.data(26).dtTransOffset = 43;

                    ;% rtP.ECIPositiontoLLA_year
                    section.data(27).logicalSrcIdx = 28;
                    section.data(27).dtTransOffset = 44;

                    ;% rtP.Bias_Bias
                    section.data(28).logicalSrcIdx = 29;
                    section.data(28).dtTransOffset = 45;

                    ;% rtP.Gain_Gain
                    section.data(29).logicalSrcIdx = 30;
                    section.data(29).dtTransOffset = 46;

                    ;% rtP.Bias1_Bias
                    section.data(30).logicalSrcIdx = 31;
                    section.data(30).dtTransOffset = 47;

                    ;% rtP.Bias_Bias_mfwetpprm2
                    section.data(31).logicalSrcIdx = 32;
                    section.data(31).dtTransOffset = 48;

                    ;% rtP.Bias1_Bias_eo1kc4cr1k
                    section.data(32).logicalSrcIdx = 33;
                    section.data(32).dtTransOffset = 49;

                    ;% rtP.Bias_Bias_cflmnqqelv
                    section.data(33).logicalSrcIdx = 34;
                    section.data(33).dtTransOffset = 50;

                    ;% rtP.Bias1_Bias_p4ldxk01tt
                    section.data(34).logicalSrcIdx = 35;
                    section.data(34).dtTransOffset = 51;

                    ;% rtP.pp13_Y0
                    section.data(35).logicalSrcIdx = 36;
                    section.data(35).dtTransOffset = 52;

                    ;% rtP.Constant_Value
                    section.data(36).logicalSrcIdx = 37;
                    section.data(36).dtTransOffset = 65;

                    ;% rtP.pp13_Y0_cy3pueip5o
                    section.data(37).logicalSrcIdx = 38;
                    section.data(37).dtTransOffset = 66;

                    ;% rtP.k1313_Value
                    section.data(38).logicalSrcIdx = 39;
                    section.data(38).dtTransOffset = 79;

                    ;% rtP.bpp_Y0
                    section.data(39).logicalSrcIdx = 40;
                    section.data(39).dtTransOffset = 248;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(40).logicalSrcIdx = 41;
                    section.data(40).dtTransOffset = 249;

                    ;% rtP.Constant_Value_csv3mn5y1r
                    section.data(41).logicalSrcIdx = 42;
                    section.data(41).dtTransOffset = 262;

                    ;% rtP.Constant1_Value
                    section.data(42).logicalSrcIdx = 43;
                    section.data(42).dtTransOffset = 263;

                    ;% rtP.Gain1_Gain
                    section.data(43).logicalSrcIdx = 44;
                    section.data(43).dtTransOffset = 264;

                    ;% rtP.Gain2_Gain
                    section.data(44).logicalSrcIdx = 45;
                    section.data(44).dtTransOffset = 265;

                    ;% rtP.Constant_Value_f1alf1u4vx
                    section.data(45).logicalSrcIdx = 46;
                    section.data(45).dtTransOffset = 266;

                    ;% rtP.Constant_Value_grywn4afkt
                    section.data(46).logicalSrcIdx = 47;
                    section.data(46).dtTransOffset = 267;

                    ;% rtP.Constant_Value_ekocq4ci4i
                    section.data(47).logicalSrcIdx = 48;
                    section.data(47).dtTransOffset = 268;

                    ;% rtP.Constant_Value_prkljxqks0
                    section.data(48).logicalSrcIdx = 49;
                    section.data(48).dtTransOffset = 269;

                    ;% rtP.Constant1_Value_eonicn22pt
                    section.data(49).logicalSrcIdx = 50;
                    section.data(49).dtTransOffset = 270;

                    ;% rtP.k1313_Value_aryoph4mav
                    section.data(50).logicalSrcIdx = 51;
                    section.data(50).dtTransOffset = 271;

                    ;% rtP.dp1313_Y0
                    section.data(51).logicalSrcIdx = 52;
                    section.data(51).dtTransOffset = 440;

                    ;% rtP.snorm169_Y0
                    section.data(52).logicalSrcIdx = 53;
                    section.data(52).dtTransOffset = 609;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(53).logicalSrcIdx = 54;
                    section.data(53).dtTransOffset = 778;

                    ;% rtP.UnitDelay1_InitialCondition_h1mrayfsn3
                    section.data(54).logicalSrcIdx = 55;
                    section.data(54).dtTransOffset = 947;

                    ;% rtP.Merge1_InitialOutput
                    section.data(55).logicalSrcIdx = 56;
                    section.data(55).dtTransOffset = 1116;

                    ;% rtP.Merge_InitialOutput
                    section.data(56).logicalSrcIdx = 57;
                    section.data(56).dtTransOffset = 1117;

                    ;% rtP.Gain_Gain_b1db0o1fb1
                    section.data(57).logicalSrcIdx = 58;
                    section.data(57).dtTransOffset = 1118;

                    ;% rtP.tc1313_Y0
                    section.data(58).logicalSrcIdx = 59;
                    section.data(58).dtTransOffset = 1119;

                    ;% rtP.UnitDelay_InitialCondition_aerxa5syf1
                    section.data(59).logicalSrcIdx = 60;
                    section.data(59).dtTransOffset = 1288;

                    ;% rtP.UnitDelay_InitialCondition_d4stse4dcp
                    section.data(60).logicalSrcIdx = 61;
                    section.data(60).dtTransOffset = 1457;

                    ;% rtP.cmaxdefmaxdef_Value
                    section.data(61).logicalSrcIdx = 62;
                    section.data(61).dtTransOffset = 1626;

                    ;% rtP.cdmaxdefmaxdef_Value
                    section.data(62).logicalSrcIdx = 63;
                    section.data(62).dtTransOffset = 1795;

                    ;% rtP.zerosmaxdef1maxdef1_Value
                    section.data(63).logicalSrcIdx = 64;
                    section.data(63).dtTransOffset = 1964;

                    ;% rtP.bt_Y0
                    section.data(64).logicalSrcIdx = 65;
                    section.data(64).dtTransOffset = 2133;

                    ;% rtP.bp_Y0
                    section.data(65).logicalSrcIdx = 66;
                    section.data(65).dtTransOffset = 2134;

                    ;% rtP.br_Y0
                    section.data(66).logicalSrcIdx = 67;
                    section.data(66).dtTransOffset = 2135;

                    ;% rtP.bpp_Y0_b1d2gwfond
                    section.data(67).logicalSrcIdx = 68;
                    section.data(67).dtTransOffset = 2136;

                    ;% rtP.Merge_InitialOutput_ne0vpqg5lv
                    section.data(68).logicalSrcIdx = 69;
                    section.data(68).dtTransOffset = 2137;

                    ;% rtP.Merge1_InitialOutput_eemeocemw4
                    section.data(69).logicalSrcIdx = 70;
                    section.data(69).dtTransOffset = 2138;

                    ;% rtP.UnitDelay1_InitialCondition_e3j2nzss4g
                    section.data(70).logicalSrcIdx = 71;
                    section.data(70).dtTransOffset = 2139;

                    ;% rtP.UnitDelay3_InitialCondition
                    section.data(71).logicalSrcIdx = 72;
                    section.data(71).dtTransOffset = 2140;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(72).logicalSrcIdx = 73;
                    section.data(72).dtTransOffset = 2141;

                    ;% rtP.UnitDelay4_InitialCondition
                    section.data(73).logicalSrcIdx = 74;
                    section.data(73).dtTransOffset = 2142;

                    ;% rtP.Constant1_Value_m0eu3xzabt
                    section.data(74).logicalSrcIdx = 75;
                    section.data(74).dtTransOffset = 2143;

                    ;% rtP.fm_Value
                    section.data(75).logicalSrcIdx = 76;
                    section.data(75).dtTransOffset = 2144;

                    ;% rtP.fn_Value
                    section.data(76).logicalSrcIdx = 77;
                    section.data(76).dtTransOffset = 2157;

                    ;% rtP.Constant1_Value_bjfvbmsu1y
                    section.data(77).logicalSrcIdx = 78;
                    section.data(77).dtTransOffset = 2170;

                    ;% rtP.btbpbrbpp_Y0
                    section.data(78).logicalSrcIdx = 79;
                    section.data(78).dtTransOffset = 2171;

                    ;% rtP.UnitDelay_InitialCondition_izvbuzzrob
                    section.data(79).logicalSrcIdx = 80;
                    section.data(79).dtTransOffset = 2175;

                    ;% rtP.UnitDelay2_InitialCondition_hirxjpuru5
                    section.data(80).logicalSrcIdx = 81;
                    section.data(80).dtTransOffset = 2176;

                    ;% rtP.r_Y0
                    section.data(81).logicalSrcIdx = 82;
                    section.data(81).dtTransOffset = 2180;

                    ;% rtP.ct_Y0
                    section.data(82).logicalSrcIdx = 83;
                    section.data(82).dtTransOffset = 2181;

                    ;% rtP.st_Y0
                    section.data(83).logicalSrcIdx = 84;
                    section.data(83).dtTransOffset = 2182;

                    ;% rtP.sa_Y0
                    section.data(84).logicalSrcIdx = 85;
                    section.data(84).dtTransOffset = 2183;

                    ;% rtP.ca_Y0
                    section.data(85).logicalSrcIdx = 86;
                    section.data(85).dtTransOffset = 2184;

                    ;% rtP.Gain_Gain_nstanrefgr
                    section.data(86).logicalSrcIdx = 87;
                    section.data(86).dtTransOffset = 2185;

                    ;% rtP.a_Value
                    section.data(87).logicalSrcIdx = 88;
                    section.data(87).dtTransOffset = 2186;

                    ;% rtP.b_Value
                    section.data(88).logicalSrcIdx = 89;
                    section.data(88).dtTransOffset = 2187;

                    ;% rtP.Constant_Value_fpb5edacxf
                    section.data(89).logicalSrcIdx = 90;
                    section.data(89).dtTransOffset = 2188;

                    ;% rtP.sp11_Y0
                    section.data(90).logicalSrcIdx = 91;
                    section.data(90).dtTransOffset = 2189;

                    ;% rtP.cp11_Y0
                    section.data(91).logicalSrcIdx = 92;
                    section.data(91).dtTransOffset = 2200;

                    ;% rtP.ForIterator_IterationLimit
                    section.data(92).logicalSrcIdx = 93;
                    section.data(92).dtTransOffset = 2211;

                    ;% rtP.UnitDelay1_InitialCondition_hwgje4hplv
                    section.data(93).logicalSrcIdx = 94;
                    section.data(93).dtTransOffset = 2212;

                    ;% rtP.cpm1spm1_Threshold
                    section.data(94).logicalSrcIdx = 95;
                    section.data(94).dtTransOffset = 2213;

                    ;% rtP.Constant_Value_pb1sgkcw1r
                    section.data(95).logicalSrcIdx = 96;
                    section.data(95).dtTransOffset = 2214;

                    ;% rtP.Constant1_Value_ifecmw2xex
                    section.data(96).logicalSrcIdx = 97;
                    section.data(96).dtTransOffset = 2225;

                    ;% rtP.sp13_Y0
                    section.data(97).logicalSrcIdx = 98;
                    section.data(97).dtTransOffset = 2236;

                    ;% rtP.cp13_Y0
                    section.data(98).logicalSrcIdx = 99;
                    section.data(98).dtTransOffset = 2249;

                    ;% rtP.Gain_Gain_gwnhj43h2w
                    section.data(99).logicalSrcIdx = 100;
                    section.data(99).dtTransOffset = 2262;

                    ;% rtP.Gain1_Gain_hkwrfrr3op
                    section.data(100).logicalSrcIdx = 101;
                    section.data(100).dtTransOffset = 2263;

                    ;% rtP.cp1_Value
                    section.data(101).logicalSrcIdx = 102;
                    section.data(101).dtTransOffset = 2264;

                    ;% rtP.sp1_Value
                    section.data(102).logicalSrcIdx = 103;
                    section.data(102).dtTransOffset = 2265;

                    ;% rtP.sectoyrs_Gain
                    section.data(103).logicalSrcIdx = 104;
                    section.data(103).dtTransOffset = 2266;

                    ;% rtP.otime_InitialCondition
                    section.data(104).logicalSrcIdx = 105;
                    section.data(104).dtTransOffset = 2267;

                    ;% rtP.BiasYear_Bias
                    section.data(105).logicalSrcIdx = 106;
                    section.data(105).dtTransOffset = 2268;

                    ;% rtP.Gain_Gain_gujouawppq
                    section.data(106).logicalSrcIdx = 107;
                    section.data(106).dtTransOffset = 2269;

                    ;% rtP.Bias1_Bias_dioov3krxd
                    section.data(107).logicalSrcIdx = 108;
                    section.data(107).dtTransOffset = 2270;

                    ;% rtP.Gain1_Gain_jzaoszzly0
                    section.data(108).logicalSrcIdx = 109;
                    section.data(108).dtTransOffset = 2271;

                    ;% rtP.Bias2_Bias
                    section.data(109).logicalSrcIdx = 110;
                    section.data(109).dtTransOffset = 2272;

                    ;% rtP.Gain2_Gain_hqpma2djpt
                    section.data(110).logicalSrcIdx = 111;
                    section.data(110).dtTransOffset = 2273;

                    ;% rtP.Gain3_Gain
                    section.data(111).logicalSrcIdx = 112;
                    section.data(111).dtTransOffset = 2274;

                    ;% rtP.BiasDay_Bias
                    section.data(112).logicalSrcIdx = 113;
                    section.data(112).dtTransOffset = 2275;

                    ;% rtP.Bias1_Bias_dgmadvobfr
                    section.data(113).logicalSrcIdx = 114;
                    section.data(113).dtTransOffset = 2276;

                    ;% rtP.Gain_Gain_dv4u551ktp
                    section.data(114).logicalSrcIdx = 115;
                    section.data(114).dtTransOffset = 2277;

                    ;% rtP.Gain_Gain_ct21xaxafa
                    section.data(115).logicalSrcIdx = 116;
                    section.data(115).dtTransOffset = 2278;

                    ;% rtP.BiasYear_Bias_eo2qoxtwnv
                    section.data(116).logicalSrcIdx = 117;
                    section.data(116).dtTransOffset = 2279;

                    ;% rtP.Gain_Gain_hjvj4yayay
                    section.data(117).logicalSrcIdx = 118;
                    section.data(117).dtTransOffset = 2280;

                    ;% rtP.Bias1_Bias_p0cn0wxags
                    section.data(118).logicalSrcIdx = 119;
                    section.data(118).dtTransOffset = 2281;

                    ;% rtP.Gain1_Gain_i31o51qfnv
                    section.data(119).logicalSrcIdx = 120;
                    section.data(119).dtTransOffset = 2282;

                    ;% rtP.Bias2_Bias_ktmrwqktyn
                    section.data(120).logicalSrcIdx = 121;
                    section.data(120).dtTransOffset = 2283;

                    ;% rtP.Gain2_Gain_eltsd0pn5r
                    section.data(121).logicalSrcIdx = 122;
                    section.data(121).dtTransOffset = 2284;

                    ;% rtP.Gain3_Gain_gyf3iucjm2
                    section.data(122).logicalSrcIdx = 123;
                    section.data(122).dtTransOffset = 2285;

                    ;% rtP.BiasDay_Bias_gliqly2fyb
                    section.data(123).logicalSrcIdx = 124;
                    section.data(123).dtTransOffset = 2286;

                    ;% rtP.Bias_Bias_czq1qwvslb
                    section.data(124).logicalSrcIdx = 125;
                    section.data(124).dtTransOffset = 2287;

                    ;% rtP.Bias1_Bias_ngou2bxwly
                    section.data(125).logicalSrcIdx = 126;
                    section.data(125).dtTransOffset = 2288;

                    ;% rtP.Gain_Gain_chxw0puanu
                    section.data(126).logicalSrcIdx = 127;
                    section.data(126).dtTransOffset = 2289;

                    ;% rtP.Gain1_Gain_ebnqqsdmj2
                    section.data(127).logicalSrcIdx = 128;
                    section.data(127).dtTransOffset = 2290;

                    ;% rtP.Y0_Coefs
                    section.data(128).logicalSrcIdx = 129;
                    section.data(128).dtTransOffset = 2291;

                    ;% rtP.mMoon_Coefs
                    section.data(129).logicalSrcIdx = 130;
                    section.data(129).dtTransOffset = 2297;

                    ;% rtP.mSun_Coefs
                    section.data(130).logicalSrcIdx = 131;
                    section.data(130).dtTransOffset = 2302;

                    ;% rtP.umMoon_Coefs
                    section.data(131).logicalSrcIdx = 132;
                    section.data(131).dtTransOffset = 2307;

                    ;% rtP.dSun_Coefs
                    section.data(132).logicalSrcIdx = 133;
                    section.data(132).dtTransOffset = 2312;

                    ;% rtP.omegaMoon_Coefs
                    section.data(133).logicalSrcIdx = 134;
                    section.data(133).dtTransOffset = 2317;

                    ;% rtP.Gain_Gain_paibjqobln
                    section.data(134).logicalSrcIdx = 135;
                    section.data(134).dtTransOffset = 2322;

                    ;% rtP.lMercury_Coefs
                    section.data(135).logicalSrcIdx = 136;
                    section.data(135).dtTransOffset = 2323;

                    ;% rtP.lVenus_Coefs
                    section.data(136).logicalSrcIdx = 137;
                    section.data(136).dtTransOffset = 2325;

                    ;% rtP.lEarth_Coefs
                    section.data(137).logicalSrcIdx = 138;
                    section.data(137).dtTransOffset = 2327;

                    ;% rtP.lMars_Coefs
                    section.data(138).logicalSrcIdx = 139;
                    section.data(138).dtTransOffset = 2329;

                    ;% rtP.lJupiter_Coefs
                    section.data(139).logicalSrcIdx = 140;
                    section.data(139).dtTransOffset = 2331;

                    ;% rtP.lSaturn_Coefs
                    section.data(140).logicalSrcIdx = 141;
                    section.data(140).dtTransOffset = 2333;

                    ;% rtP.lUranus_Coefs
                    section.data(141).logicalSrcIdx = 142;
                    section.data(141).dtTransOffset = 2335;

                    ;% rtP.lNeptune_Coefs
                    section.data(142).logicalSrcIdx = 143;
                    section.data(142).dtTransOffset = 2337;

                    ;% rtP.pa_Coefs
                    section.data(143).logicalSrcIdx = 144;
                    section.data(143).dtTransOffset = 2339;

                    ;% rtP.Gain4_Gain
                    section.data(144).logicalSrcIdx = 145;
                    section.data(144).dtTransOffset = 2342;

                    ;% rtP.X0_Coefs
                    section.data(145).logicalSrcIdx = 146;
                    section.data(145).dtTransOffset = 2343;

                    ;% rtP.Gain3_Gain_hiqnzkxnst
                    section.data(146).logicalSrcIdx = 147;
                    section.data(146).dtTransOffset = 2349;

                    ;% rtP.S0_Coefs
                    section.data(147).logicalSrcIdx = 148;
                    section.data(147).dtTransOffset = 2350;

                    ;% rtP.Gain2_Gain_n5zuiluoob
                    section.data(148).logicalSrcIdx = 149;
                    section.data(148).dtTransOffset = 2356;

                    ;% rtP.Gain5_Gain
                    section.data(149).logicalSrcIdx = 150;
                    section.data(149).dtTransOffset = 2357;

                    ;% rtP.Gain1_Gain_cbzzikxxnt
                    section.data(150).logicalSrcIdx = 151;
                    section.data(150).dtTransOffset = 2358;

                    ;% rtP.Gain_Gain_nbjre2xbkg
                    section.data(151).logicalSrcIdx = 152;
                    section.data(151).dtTransOffset = 2359;

                    ;% rtP.kmtom_Gain
                    section.data(152).logicalSrcIdx = 153;
                    section.data(152).dtTransOffset = 2368;

                    ;% rtP.ECEFPositiontoLLA_F
                    section.data(153).logicalSrcIdx = 154;
                    section.data(153).dtTransOffset = 2369;

                    ;% rtP.ECEFPositiontoLLA_R
                    section.data(154).logicalSrcIdx = 155;
                    section.data(154).dtTransOffset = 2370;

                    ;% rtP.olon_InitialCondition
                    section.data(155).logicalSrcIdx = 156;
                    section.data(155).dtTransOffset = 2371;

                    ;% rtP.olat_InitialCondition
                    section.data(156).logicalSrcIdx = 157;
                    section.data(156).dtTransOffset = 2372;

                    ;% rtP.Gain_Gain_lqsvfvp1t2
                    section.data(157).logicalSrcIdx = 158;
                    section.data(157).dtTransOffset = 2373;

                    ;% rtP.oalt_InitialCondition
                    section.data(158).logicalSrcIdx = 159;
                    section.data(158).dtTransOffset = 2374;

                    ;% rtP.nTtoT_Gain
                    section.data(159).logicalSrcIdx = 160;
                    section.data(159).dtTransOffset = 2375;

                    ;% rtP.Constant_Value_iv2p3jxmvu
                    section.data(160).logicalSrcIdx = 161;
                    section.data(160).dtTransOffset = 2376;

                    ;% rtP.Constant1_Value_bwj5nvg4ax
                    section.data(161).logicalSrcIdx = 162;
                    section.data(161).dtTransOffset = 2379;

                    ;% rtP.Bias_Bias_jmbkqzbdzr
                    section.data(162).logicalSrcIdx = 163;
                    section.data(162).dtTransOffset = 2380;

                    ;% rtP.sec2_Value
                    section.data(163).logicalSrcIdx = 164;
                    section.data(163).dtTransOffset = 2381;

                    ;% rtP.Index_Value
                    section.data(164).logicalSrcIdx = 165;
                    section.data(164).dtTransOffset = 2385;

                    ;% rtP.Gain5_Gain_ir3vfx5fun
                    section.data(165).logicalSrcIdx = 166;
                    section.data(165).dtTransOffset = 2386;

                    ;% rtP.Gain6_Gain
                    section.data(166).logicalSrcIdx = 167;
                    section.data(166).dtTransOffset = 2387;

                    ;% rtP.Gain4_Gain_lerancnrg0
                    section.data(167).logicalSrcIdx = 168;
                    section.data(167).dtTransOffset = 2388;

                    ;% rtP.secGain_Gain
                    section.data(168).logicalSrcIdx = 169;
                    section.data(168).dtTransOffset = 2389;

                    ;% rtP.Constant_Value_fy334lzfzn
                    section.data(169).logicalSrcIdx = 170;
                    section.data(169).dtTransOffset = 2390;

                    ;% rtP.sec2_Value_lmruwtlqrb
                    section.data(170).logicalSrcIdx = 171;
                    section.data(170).dtTransOffset = 2391;

                    ;% rtP.Index_Value_bfnfqkorro
                    section.data(171).logicalSrcIdx = 172;
                    section.data(171).dtTransOffset = 2395;

                    ;% rtP.Gain5_Gain_lzwhfe5gdm
                    section.data(172).logicalSrcIdx = 173;
                    section.data(172).dtTransOffset = 2396;

                    ;% rtP.Gain6_Gain_cpux0up33m
                    section.data(173).logicalSrcIdx = 174;
                    section.data(173).dtTransOffset = 2397;

                    ;% rtP.Gain4_Gain_am01oimejx
                    section.data(174).logicalSrcIdx = 175;
                    section.data(174).dtTransOffset = 2398;

                    ;% rtP.gainVal_Gain
                    section.data(175).logicalSrcIdx = 176;
                    section.data(175).dtTransOffset = 2399;

                    ;% rtP.Constant_Value_jxq10vvdgv
                    section.data(176).logicalSrcIdx = 177;
                    section.data(176).dtTransOffset = 2400;

                    ;% rtP.Constant_Value_b3s3rkmbct
                    section.data(177).logicalSrcIdx = 178;
                    section.data(177).dtTransOffset = 2401;

                    ;% rtP.Constant_Value_edl51wqsfm
                    section.data(178).logicalSrcIdx = 179;
                    section.data(178).dtTransOffset = 2402;

                    ;% rtP.Constant1_Value_nsmljt0aoz
                    section.data(179).logicalSrcIdx = 180;
                    section.data(179).dtTransOffset = 3128;

                    ;% rtP.Constant2_Value
                    section.data(180).logicalSrcIdx = 181;
                    section.data(180).dtTransOffset = 3161;

                    ;% rtP.Constant3_Value
                    section.data(181).logicalSrcIdx = 182;
                    section.data(181).dtTransOffset = 3164;

                    ;% rtP.Constant4_Value
                    section.data(182).logicalSrcIdx = 183;
                    section.data(182).dtTransOffset = 3189;

                    ;% rtP.Constant_Value_cehvishv4i
                    section.data(183).logicalSrcIdx = 184;
                    section.data(183).dtTransOffset = 3193;

                    ;% rtP.Constant1_Value_jiecq0jhax
                    section.data(184).logicalSrcIdx = 185;
                    section.data(184).dtTransOffset = 30393;

                    ;% rtP.Constant2_Value_fraef3tr1h
                    section.data(185).logicalSrcIdx = 186;
                    section.data(185).dtTransOffset = 31699;

                    ;% rtP.Constant3_Value_h14mngdenr
                    section.data(186).logicalSrcIdx = 187;
                    section.data(186).dtTransOffset = 31952;

                    ;% rtP.Constant4_Value_luafh120ai
                    section.data(187).logicalSrcIdx = 188;
                    section.data(187).dtTransOffset = 31988;

                    ;% rtP.Constant_Value_a4ivvroqdq
                    section.data(188).logicalSrcIdx = 189;
                    section.data(188).dtTransOffset = 31992;

                    ;% rtP.Constant1_Value_flxtcg3r0i
                    section.data(189).logicalSrcIdx = 190;
                    section.data(189).dtTransOffset = 53667;

                    ;% rtP.Constant2_Value_ky4ydsvo41
                    section.data(190).logicalSrcIdx = 191;
                    section.data(190).dtTransOffset = 54629;

                    ;% rtP.Constant3_Value_kbsc2zftlc
                    section.data(191).logicalSrcIdx = 192;
                    section.data(191).dtTransOffset = 54906;

                    ;% rtP.Constant4_Value_onjkhkwpru
                    section.data(192).logicalSrcIdx = 193;
                    section.data(192).dtTransOffset = 54936;

                    ;% rtP.Constant_Value_dm5x2qlarz
                    section.data(193).logicalSrcIdx = 194;
                    section.data(193).dtTransOffset = 54941;

                    ;% rtP.Constant1_Value_gsuet0b3gk
                    section.data(194).logicalSrcIdx = 195;
                    section.data(194).dtTransOffset = 54942;

                    ;% rtP.Gain1_Gain_gkqsta5bk2
                    section.data(195).logicalSrcIdx = 196;
                    section.data(195).dtTransOffset = 54944;

                    ;% rtP.m_b_Value
                    section.data(196).logicalSrcIdx = 197;
                    section.data(196).dtTransOffset = 54945;

                    ;% rtP.Gain1_Gain_iqmlteyir0
                    section.data(197).logicalSrcIdx = 198;
                    section.data(197).dtTransOffset = 54948;

                    ;% rtP.Constant_Value_ptjny1bmmo
                    section.data(198).logicalSrcIdx = 199;
                    section.data(198).dtTransOffset = 54957;

                    ;% rtP.Constant1_Value_mwv4mh5zj3
                    section.data(199).logicalSrcIdx = 200;
                    section.data(199).dtTransOffset = 54958;

                    ;% rtP.Constant2_Value_hfkavtbu0i
                    section.data(200).logicalSrcIdx = 201;
                    section.data(200).dtTransOffset = 54959;

                    ;% rtP.Constant2_Value_dcxdf2gjws
                    section.data(201).logicalSrcIdx = 202;
                    section.data(201).dtTransOffset = 54960;

                    ;% rtP.epoch_Value
                    section.data(202).logicalSrcIdx = 203;
                    section.data(202).dtTransOffset = 54961;

                    ;% rtP.re_Value
                    section.data(203).logicalSrcIdx = 204;
                    section.data(203).dtTransOffset = 54962;

                    ;% rtP.Constant_Value_g3bw3t45kc
                    section.data(204).logicalSrcIdx = 205;
                    section.data(204).dtTransOffset = 54963;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 30;
            section.data(30)  = dumData; %prealloc

                    ;% rtP.Constant_Value_lqomsxrg4p
                    section.data(1).logicalSrcIdx = 206;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Constant1_Value_clgbhgeoat
                    section.data(2).logicalSrcIdx = 207;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Constant_Value_d5ile1kluq
                    section.data(3).logicalSrcIdx = 208;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain_Gain_dx15j3vl0r
                    section.data(4).logicalSrcIdx = 209;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Constant_Value_oc42kyw4do
                    section.data(5).logicalSrcIdx = 210;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Gain_Gain_na3lb1gfxf
                    section.data(6).logicalSrcIdx = 211;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant_Value_o1iy02torl
                    section.data(7).logicalSrcIdx = 212;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Gain_Gain_i3u5isgwlk
                    section.data(8).logicalSrcIdx = 213;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Constant1_Value_muv044ucpr
                    section.data(9).logicalSrcIdx = 214;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Constant_Value_dllofnas1w
                    section.data(10).logicalSrcIdx = 215;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Constant_Value_aw1dxv2tun
                    section.data(11).logicalSrcIdx = 216;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Constant1_Value_ak4edp2juo
                    section.data(12).logicalSrcIdx = 217;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Constant1_Value_flirxgjqmw
                    section.data(13).logicalSrcIdx = 218;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.Constant1_Value_abevpe4ykw
                    section.data(14).logicalSrcIdx = 219;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Gain_Gain_cmqgiitizz
                    section.data(15).logicalSrcIdx = 220;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.Constant_Value_l1rxm2iqrx
                    section.data(16).logicalSrcIdx = 221;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Constant_Value_jerlgz20x0
                    section.data(17).logicalSrcIdx = 222;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Constant_Value_dovgvyvjt4
                    section.data(18).logicalSrcIdx = 223;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Constant1_Value_lbdlppdlrp
                    section.data(19).logicalSrcIdx = 224;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Constant_Value_am4zc2ltal
                    section.data(20).logicalSrcIdx = 225;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.tc_old_Threshold
                    section.data(21).logicalSrcIdx = 226;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Gain_Gain_cltiwcup4r
                    section.data(22).logicalSrcIdx = 227;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Constant_Value_km0iozet3r
                    section.data(23).logicalSrcIdx = 228;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Constant1_Value_njihgedrec
                    section.data(24).logicalSrcIdx = 229;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Constant_Value_ftllb4jlut
                    section.data(25).logicalSrcIdx = 230;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Constant_Value_aoq5ryznz0
                    section.data(26).logicalSrcIdx = 231;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Constant_Value_c5udfinrgc
                    section.data(27).logicalSrcIdx = 232;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.ForIterator_IterationLimit_jiabvhbqan
                    section.data(28).logicalSrcIdx = 233;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.arn_Threshold
                    section.data(29).logicalSrcIdx = 234;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Constant_Value_jvr52f2msl
                    section.data(30).logicalSrcIdx = 235;
                    section.data(30).dtTransOffset = 29;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.nxmiuso3xg.Bias1_Bias
                    section.data(1).logicalSrcIdx = 236;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.nxmiuso3xg.Bias_Bias
                    section.data(2).logicalSrcIdx = 237;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.llswu3fq4mw.Bias1_Bias
                    section.data(1).logicalSrcIdx = 238;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.llswu3fq4mw.Bias_Bias
                    section.data(2).logicalSrcIdx = 239;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 192;
            section.data(192)  = dumData; %prealloc

                    ;% rtB.hbvbdloscq
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.kytqfr5cmt
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 16;

                    ;% rtB.jnood2r1kz
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 17;

                    ;% rtB.mtlafyaqr5
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 18;

                    ;% rtB.o0rtmcbxh1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 19;

                    ;% rtB.md3ccqv5wu
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 22;

                    ;% rtB.h04yhzhfaa
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 31;

                    ;% rtB.jgzfsatgbr
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 32;

                    ;% rtB.fgnjwyyj2d
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 35;

                    ;% rtB.kl3rxlab5f
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 44;

                    ;% rtB.nt0rmgoez2
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 45;

                    ;% rtB.b3j3xjpyda
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 322;

                    ;% rtB.kbxjza20xf
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 352;

                    ;% rtB.o0f1oyv2p4
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 357;

                    ;% rtB.llz1zzc3vu
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 358;

                    ;% rtB.ehijmqjdpf
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 1633;

                    ;% rtB.ocvk4ihqkt
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 2908;

                    ;% rtB.aoik4xqpkh
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 4183;

                    ;% rtB.dnc3mx5v05
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 5458;

                    ;% rtB.pdnglkyd5e
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 6733;

                    ;% rtB.chtfk21cgs
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 6734;

                    ;% rtB.l31zd52gbe
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 6735;

                    ;% rtB.maeuwlu3dy
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 6736;

                    ;% rtB.oe0slkwer3
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 6737;

                    ;% rtB.hllxq5rrz1
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 6738;

                    ;% rtB.objpjgb34p
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 6991;

                    ;% rtB.pq3zras5az
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 7027;

                    ;% rtB.jrhgyfgs10
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 7031;

                    ;% rtB.eg4gfyhcmb
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 7032;

                    ;% rtB.iodgmtkgb3
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 8632;

                    ;% rtB.aplfnemlzg
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 10232;

                    ;% rtB.g04n5pngea
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 11832;

                    ;% rtB.fizgkm4fea
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 13432;

                    ;% rtB.lq5a0eddu0
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 15032;

                    ;% rtB.owqmabzn3h
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 15033;

                    ;% rtB.a51e0xiij2
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 15034;

                    ;% rtB.kngnjoyb1t
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 15035;

                    ;% rtB.ptjo1pvxxv
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 15036;

                    ;% rtB.firudz0a2c
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 15037;

                    ;% rtB.gtma5xo1tp
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 15038;

                    ;% rtB.ir1guhjxkm
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 15039;

                    ;% rtB.e2yzgh3soa
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 15040;

                    ;% rtB.k0kwjfwzjs
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 15043;

                    ;% rtB.meewcjpsgd
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 15068;

                    ;% rtB.g1cf5mwiln
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 15072;

                    ;% rtB.kqpnhluxxo
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 15073;

                    ;% rtB.osubthz0r4
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 15139;

                    ;% rtB.bu42wqsdcf
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 15205;

                    ;% rtB.pfvnqwrrjo
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 15271;

                    ;% rtB.h0catfsyh2
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 15337;

                    ;% rtB.cxtibow4zs
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 15403;

                    ;% rtB.ag5tewkmjy
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 15404;

                    ;% rtB.preo4lepir
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 15405;

                    ;% rtB.mxnmfxtv4i
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 15406;

                    ;% rtB.msy1rxbcp5
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 15407;

                    ;% rtB.nkdmlbvhok
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 15408;

                    ;% rtB.jx322ng04x
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 15409;

                    ;% rtB.ddt5n0lpvn
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 15410;

                    ;% rtB.gk51ql0lpo
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 15411;

                    ;% rtB.gr1fa2psxf
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 15414;

                    ;% rtB.aco3rajakx
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 15423;

                    ;% rtB.f2rojwtbdm
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 15432;

                    ;% rtB.nlahpypk0z
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 15435;

                    ;% rtB.pg1rjoze33
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 15438;

                    ;% rtB.mgyteopx4q
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 15441;

                    ;% rtB.f4ayqsk2ze
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 15444;

                    ;% rtB.aewg4wr5gf
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 15446;

                    ;% rtB.jhyk5cyvgo
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 15447;

                    ;% rtB.dctl3otdrl
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 15448;

                    ;% rtB.br2bwcgt5b
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 15449;

                    ;% rtB.ep15chbn1b
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 15450;

                    ;% rtB.lj20pakho0
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 15451;

                    ;% rtB.emi51gcsdm
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 15452;

                    ;% rtB.f4ydplcff4
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 15453;

                    ;% rtB.m0cdt1phky
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 15454;

                    ;% rtB.ko0umezivk
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 15455;

                    ;% rtB.nj4s45p4ic
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 15456;

                    ;% rtB.gkgpps4vtt
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 15457;

                    ;% rtB.kywdgcrg2n
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 15458;

                    ;% rtB.he3zov4zzu
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 15459;

                    ;% rtB.m2bsmrvap2
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 15460;

                    ;% rtB.cttb4jdb25
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 15461;

                    ;% rtB.h4lalsdpvb
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 15462;

                    ;% rtB.cqvciatqbv
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 15463;

                    ;% rtB.pwovodyiox
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 15464;

                    ;% rtB.he4pojjqgc
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 15465;

                    ;% rtB.bb4j1hqizb
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 15466;

                    ;% rtB.ax2wd3o5ds
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 15467;

                    ;% rtB.mvzbhjvzdu
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 15468;

                    ;% rtB.h0pd4ejw0n
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 15469;

                    ;% rtB.c3r4bgkeut
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 15470;

                    ;% rtB.ejj2ps3lxp
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 15471;

                    ;% rtB.fbvhmnd1ae
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 15472;

                    ;% rtB.i2fnkzdzvz
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 15473;

                    ;% rtB.ez4jvvdcb3
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 15474;

                    ;% rtB.mp0qqfeo1n
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 15475;

                    ;% rtB.dyn3airtrr
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 15476;

                    ;% rtB.fs2ifagbrz
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 15477;

                    ;% rtB.pxmhaqxtif
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 15478;

                    ;% rtB.b5ruxxfymn
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 15479;

                    ;% rtB.hb23mqgm5a
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 15480;

                    ;% rtB.lqpyjun2rj
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 15483;

                    ;% rtB.ax2kz3kcjb
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 15489;

                    ;% rtB.lbfme3rbjh
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 15492;

                    ;% rtB.czioyjd4u3
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 15495;

                    ;% rtB.isxhnmoqsd
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 15507;

                    ;% rtB.l0kin5hnea
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 15508;

                    ;% rtB.kaz5v044bj
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 15509;

                    ;% rtB.ccw42d13yf
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 15513;

                    ;% rtB.gx2wbcyjkr
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 15514;

                    ;% rtB.gqlueshzcr
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 15515;

                    ;% rtB.fz40ghtjdv
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 15519;

                    ;% rtB.h4obpjtzxu
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 15520;

                    ;% rtB.ljqkwpwmre
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 15521;

                    ;% rtB.k2lhbqlojh
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 16049;

                    ;% rtB.l4axxmgncw
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 16115;

                    ;% rtB.glwb23azae
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 16181;

                    ;% rtB.gdbahczf45
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 38581;

                    ;% rtB.byd5egtmb2
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 40181;

                    ;% rtB.g5ynytyo0h
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 41781;

                    ;% rtB.hv2iutsstt
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 59631;

                    ;% rtB.nadmkzwk2q
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 60906;

                    ;% rtB.iokseplynh
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 62181;

                    ;% rtB.feljxtfwu5
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 62183;

                    ;% rtB.jqtaqqwoi5
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 62186;

                    ;% rtB.f4d4ikv243
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 62202;

                    ;% rtB.ilabbmgpcv
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 62205;

                    ;% rtB.bkofwc2kv1
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 62206;

                    ;% rtB.imzzxl4kxf
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 62207;

                    ;% rtB.dqajvuxpzp
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 62208;

                    ;% rtB.gxmud3x5al
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 62219;

                    ;% rtB.li1pebkq1i
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 62230;

                    ;% rtB.kxc4kf24qb
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 62243;

                    ;% rtB.p0akgkjmrw
                    section.data(134).logicalSrcIdx = 135;
                    section.data(134).dtTransOffset = 62256;

                    ;% rtB.crec2go2qm
                    section.data(135).logicalSrcIdx = 136;
                    section.data(135).dtTransOffset = 62257;

                    ;% rtB.onnkbehyf1
                    section.data(136).logicalSrcIdx = 137;
                    section.data(136).dtTransOffset = 62258;

                    ;% rtB.krlobaa2y2
                    section.data(137).logicalSrcIdx = 138;
                    section.data(137).dtTransOffset = 62259;

                    ;% rtB.orrsvm3fu1
                    section.data(138).logicalSrcIdx = 139;
                    section.data(138).dtTransOffset = 62260;

                    ;% rtB.hhxogxux0y
                    section.data(139).logicalSrcIdx = 140;
                    section.data(139).dtTransOffset = 62261;

                    ;% rtB.bgzxmvrpag
                    section.data(140).logicalSrcIdx = 141;
                    section.data(140).dtTransOffset = 62262;

                    ;% rtB.fa41n4y13z
                    section.data(141).logicalSrcIdx = 142;
                    section.data(141).dtTransOffset = 62263;

                    ;% rtB.ppowqx1unv
                    section.data(142).logicalSrcIdx = 143;
                    section.data(142).dtTransOffset = 62264;

                    ;% rtB.ce5nv0li1b
                    section.data(143).logicalSrcIdx = 144;
                    section.data(143).dtTransOffset = 62265;

                    ;% rtB.lsfgqfsqp2
                    section.data(144).logicalSrcIdx = 145;
                    section.data(144).dtTransOffset = 62266;

                    ;% rtB.l4xweldks3
                    section.data(145).logicalSrcIdx = 146;
                    section.data(145).dtTransOffset = 62267;

                    ;% rtB.f0dl5arkfu
                    section.data(146).logicalSrcIdx = 147;
                    section.data(146).dtTransOffset = 62268;

                    ;% rtB.bjsed3sxds
                    section.data(147).logicalSrcIdx = 148;
                    section.data(147).dtTransOffset = 62269;

                    ;% rtB.p2jl0v3gnd
                    section.data(148).logicalSrcIdx = 149;
                    section.data(148).dtTransOffset = 62270;

                    ;% rtB.lpqulyeqtp
                    section.data(149).logicalSrcIdx = 150;
                    section.data(149).dtTransOffset = 62271;

                    ;% rtB.oeznpvrjzl
                    section.data(150).logicalSrcIdx = 151;
                    section.data(150).dtTransOffset = 62272;

                    ;% rtB.i0qy3mdqpp
                    section.data(151).logicalSrcIdx = 152;
                    section.data(151).dtTransOffset = 62273;

                    ;% rtB.mmhx02zlba
                    section.data(152).logicalSrcIdx = 153;
                    section.data(152).dtTransOffset = 62274;

                    ;% rtB.i1bcfmedhz
                    section.data(153).logicalSrcIdx = 154;
                    section.data(153).dtTransOffset = 62275;

                    ;% rtB.nmn5cevwvg
                    section.data(154).logicalSrcIdx = 155;
                    section.data(154).dtTransOffset = 62276;

                    ;% rtB.m0gedlyqep
                    section.data(155).logicalSrcIdx = 156;
                    section.data(155).dtTransOffset = 62277;

                    ;% rtB.c5rb4awtge
                    section.data(156).logicalSrcIdx = 157;
                    section.data(156).dtTransOffset = 62278;

                    ;% rtB.foeyrpcycs
                    section.data(157).logicalSrcIdx = 158;
                    section.data(157).dtTransOffset = 62279;

                    ;% rtB.l2bs43i4ov
                    section.data(158).logicalSrcIdx = 159;
                    section.data(158).dtTransOffset = 62280;

                    ;% rtB.ld2zv5xzod
                    section.data(159).logicalSrcIdx = 160;
                    section.data(159).dtTransOffset = 62281;

                    ;% rtB.a2zk5e0x0y
                    section.data(160).logicalSrcIdx = 161;
                    section.data(160).dtTransOffset = 62282;

                    ;% rtB.otveeadewh
                    section.data(161).logicalSrcIdx = 162;
                    section.data(161).dtTransOffset = 62283;

                    ;% rtB.cukuluwn11
                    section.data(162).logicalSrcIdx = 163;
                    section.data(162).dtTransOffset = 62284;

                    ;% rtB.i24o4k5fba
                    section.data(163).logicalSrcIdx = 164;
                    section.data(163).dtTransOffset = 62285;

                    ;% rtB.l0urs01onp
                    section.data(164).logicalSrcIdx = 165;
                    section.data(164).dtTransOffset = 62286;

                    ;% rtB.e2ggxcowq2
                    section.data(165).logicalSrcIdx = 166;
                    section.data(165).dtTransOffset = 62287;

                    ;% rtB.pkjalnzw53
                    section.data(166).logicalSrcIdx = 167;
                    section.data(166).dtTransOffset = 62288;

                    ;% rtB.ammr4ytkw1
                    section.data(167).logicalSrcIdx = 168;
                    section.data(167).dtTransOffset = 62289;

                    ;% rtB.ghxiy1odi5
                    section.data(168).logicalSrcIdx = 170;
                    section.data(168).dtTransOffset = 62290;

                    ;% rtB.i34dkicmu2
                    section.data(169).logicalSrcIdx = 173;
                    section.data(169).dtTransOffset = 62294;

                    ;% rtB.ebidgssiv2
                    section.data(170).logicalSrcIdx = 174;
                    section.data(170).dtTransOffset = 62295;

                    ;% rtB.isabtmvvhz
                    section.data(171).logicalSrcIdx = 175;
                    section.data(171).dtTransOffset = 62296;

                    ;% rtB.b4hzfbcxpg
                    section.data(172).logicalSrcIdx = 176;
                    section.data(172).dtTransOffset = 62297;

                    ;% rtB.e2n2dnhgeu
                    section.data(173).logicalSrcIdx = 177;
                    section.data(173).dtTransOffset = 62298;

                    ;% rtB.dguvhjg5w4
                    section.data(174).logicalSrcIdx = 178;
                    section.data(174).dtTransOffset = 62467;

                    ;% rtB.fqrycui3hg
                    section.data(175).logicalSrcIdx = 179;
                    section.data(175).dtTransOffset = 62636;

                    ;% rtB.p22cfrxj5n
                    section.data(176).logicalSrcIdx = 180;
                    section.data(176).dtTransOffset = 62805;

                    ;% rtB.pmvocf1tr2
                    section.data(177).logicalSrcIdx = 181;
                    section.data(177).dtTransOffset = 62974;

                    ;% rtB.b4oxegn23q
                    section.data(178).logicalSrcIdx = 182;
                    section.data(178).dtTransOffset = 62975;

                    ;% rtB.ee3rzr40lk
                    section.data(179).logicalSrcIdx = 183;
                    section.data(179).dtTransOffset = 63144;

                    ;% rtB.il3cjwxqak
                    section.data(180).logicalSrcIdx = 184;
                    section.data(180).dtTransOffset = 63145;

                    ;% rtB.hyhd1echxt
                    section.data(181).logicalSrcIdx = 185;
                    section.data(181).dtTransOffset = 63314;

                    ;% rtB.fo2axebq0e
                    section.data(182).logicalSrcIdx = 186;
                    section.data(182).dtTransOffset = 63327;

                    ;% rtB.chcizdalne
                    section.data(183).logicalSrcIdx = 187;
                    section.data(183).dtTransOffset = 63328;

                    ;% rtB.jya0ikumz1
                    section.data(184).logicalSrcIdx = 188;
                    section.data(184).dtTransOffset = 63341;

                    ;% rtB.g13lxtg0e3
                    section.data(185).logicalSrcIdx = 189;
                    section.data(185).dtTransOffset = 63354;

                    ;% rtB.jucgq21ch3
                    section.data(186).logicalSrcIdx = 190;
                    section.data(186).dtTransOffset = 63355;

                    ;% rtB.fdik4i2yoy
                    section.data(187).logicalSrcIdx = 191;
                    section.data(187).dtTransOffset = 63356;

                    ;% rtB.bbx15v2bu2
                    section.data(188).logicalSrcIdx = 192;
                    section.data(188).dtTransOffset = 63357;

                    ;% rtB.bk2vsf2v2j
                    section.data(189).logicalSrcIdx = 193;
                    section.data(189).dtTransOffset = 63358;

                    ;% rtB.p44pkvp25m
                    section.data(190).logicalSrcIdx = 194;
                    section.data(190).dtTransOffset = 63359;

                    ;% rtB.lxdc32drxf
                    section.data(191).logicalSrcIdx = 195;
                    section.data(191).dtTransOffset = 63360;

                    ;% rtB.g3e3xxtq4l
                    section.data(192).logicalSrcIdx = 196;
                    section.data(192).dtTransOffset = 63361;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtB.dk4xtsv2jd
                    section.data(1).logicalSrcIdx = 198;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ok4e3lbh54
                    section.data(2).logicalSrcIdx = 199;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.k3guhezu25
                    section.data(3).logicalSrcIdx = 200;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.bjbinfdrjx
                    section.data(4).logicalSrcIdx = 201;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.hjeiubi410
                    section.data(5).logicalSrcIdx = 202;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.f44c1l2haz
                    section.data(6).logicalSrcIdx = 203;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 11;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtDW.d3n0scvwiw
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.netfpjoud1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.m0obf4a2df
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% rtDW.mhkwgq1w1q
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 7;

                    ;% rtDW.oz0kfzg1gx
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.nupgl2tg0v
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% rtDW.adsttvgd3w
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% rtDW.gcujf31myd
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtDW.mugz10zzsf
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 180;

                    ;% rtDW.f1engf53mb
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 349;

                    ;% rtDW.mvzvd4lhhp
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 518;

                    ;% rtDW.grmywfuesv
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 687;

                    ;% rtDW.ftdnlxu5eu
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 700;

                    ;% rtDW.jsse3tis1w
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 701;

                    ;% rtDW.am4ilc4itb
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 702;

                    ;% rtDW.memp4ggvk1
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 703;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.gapex4ine0.LoggedData
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oz4vbjsftp.LoggedData
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.e3430bdzq3.LoggedData
                    section.data(3).logicalSrcIdx = 18;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.magaskumor
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.a1y5hchekq
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.irns0a4kt4
                    section.data(3).logicalSrcIdx = 21;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.lwtny2nhca
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.iuxhwq4jer
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.fwn4p5on3k
                    section.data(3).logicalSrcIdx = 24;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.crk3evsda4
                    section.data(4).logicalSrcIdx = 25;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 29;
            section.data(29)  = dumData; %prealloc

                    ;% rtDW.phrzlv44k2
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.k3zxl5fwp3
                    section.data(2).logicalSrcIdx = 27;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dn3fk5nzmk
                    section.data(3).logicalSrcIdx = 28;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ezsdw3knjx
                    section.data(4).logicalSrcIdx = 29;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bpx5osf5ip
                    section.data(5).logicalSrcIdx = 30;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.oqz2wa1us5
                    section.data(6).logicalSrcIdx = 31;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ijbym44xcu
                    section.data(7).logicalSrcIdx = 32;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.jmmeq40q3u
                    section.data(8).logicalSrcIdx = 33;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.pwge0cg15r
                    section.data(9).logicalSrcIdx = 34;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.bkrengnk5k
                    section.data(10).logicalSrcIdx = 35;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.cyjnxvzlkk
                    section.data(11).logicalSrcIdx = 36;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ld1te5cgi0
                    section.data(12).logicalSrcIdx = 37;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.dojjho4dgz
                    section.data(13).logicalSrcIdx = 38;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.iil44wamvv
                    section.data(14).logicalSrcIdx = 39;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.adricj4j5d
                    section.data(15).logicalSrcIdx = 40;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.cktmfwuebm
                    section.data(16).logicalSrcIdx = 41;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.hluflh4dwz
                    section.data(17).logicalSrcIdx = 42;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.pshfio535r
                    section.data(18).logicalSrcIdx = 43;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.ojluwsc1jf
                    section.data(19).logicalSrcIdx = 44;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.jeociud4e4
                    section.data(20).logicalSrcIdx = 45;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.atj4zyeuwz
                    section.data(21).logicalSrcIdx = 46;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.nmuzk31eka
                    section.data(22).logicalSrcIdx = 47;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.dckc2drf0i
                    section.data(23).logicalSrcIdx = 48;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.meglrmbhox
                    section.data(24).logicalSrcIdx = 49;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.joclfqdu4c
                    section.data(25).logicalSrcIdx = 50;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.ogav25z1tr
                    section.data(26).logicalSrcIdx = 51;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.odz5nl0xv4
                    section.data(27).logicalSrcIdx = 52;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.c2d0nllycq
                    section.data(28).logicalSrcIdx = 53;
                    section.data(28).dtTransOffset = 27;

                    ;% rtDW.hpyqqv1k12
                    section.data(29).logicalSrcIdx = 54;
                    section.data(29).dtTransOffset = 28;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.joqyigxeli
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.eh34jsuleh
                    section.data(2).logicalSrcIdx = 56;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mcn2nlny2x
                    section.data(3).logicalSrcIdx = 57;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.amaj5bb1c5
                    section.data(4).logicalSrcIdx = 58;
                    section.data(4).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 21;
            section.data(21)  = dumData; %prealloc

                    ;% rtDW.fiwv2kubov
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ouiwc4kgj1
                    section.data(2).logicalSrcIdx = 60;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.d4ejqm0gje
                    section.data(3).logicalSrcIdx = 61;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.k10lklhvn1
                    section.data(4).logicalSrcIdx = 62;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ppxomfw0y5
                    section.data(5).logicalSrcIdx = 63;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.eexx2pbpof
                    section.data(6).logicalSrcIdx = 64;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.izffr0xyvb
                    section.data(7).logicalSrcIdx = 65;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.o3l0fvabaz
                    section.data(8).logicalSrcIdx = 66;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.pph5gzcq13
                    section.data(9).logicalSrcIdx = 67;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.o1h3l12sv1
                    section.data(10).logicalSrcIdx = 68;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ohseta3i1a
                    section.data(11).logicalSrcIdx = 69;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.pvgpa4cqis
                    section.data(12).logicalSrcIdx = 70;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.mqaikwvoz0
                    section.data(13).logicalSrcIdx = 71;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.obrdaahckr
                    section.data(14).logicalSrcIdx = 72;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.dc4hcu0uor
                    section.data(15).logicalSrcIdx = 73;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.ovqbyqrxnj
                    section.data(16).logicalSrcIdx = 74;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.phdloywugz
                    section.data(17).logicalSrcIdx = 75;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.pb5er2v5my
                    section.data(18).logicalSrcIdx = 76;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.atcpxiamp2
                    section.data(19).logicalSrcIdx = 77;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.kdr2nz0rqw
                    section.data(20).logicalSrcIdx = 78;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.oypsulirgi
                    section.data(21).logicalSrcIdx = 79;
                    section.data(21).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.darb2qbz0l.fwzsfq5oof
                    section.data(1).logicalSrcIdx = 80;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nxmiuso3xg.knep3sgdju
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.knhctetjg2v.fwzsfq5oof
                    section.data(1).logicalSrcIdx = 82;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.llswu3fq4mw.knep3sgdju
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3345140926;
    targMap.checksum1 = 2552635528;
    targMap.checksum2 = 293012912;
    targMap.checksum3 = 2387563753;

