FUN_00528060:
00528060  55                        PUSH EBP
00528061  8B EC                     MOV EBP,ESP
00528063  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00528066  B8 11 27 00 00            MOV EAX,0x2711
0052806B  81 E1 FF 00 00 00         AND ECX,0xff
00528071  49                        DEC ECX
00528072  81 F9 99 00 00 00         CMP ECX,0x99
00528078  0F 87 29 05 00 00         JA 0x005285a7
switchD_0052807e::switchD:
0052807E  FF 24 8D AC 85 52 00      JMP dword ptr [ECX*0x4 + 0x5285ac]
switchD_0052807e::caseD_1:
00528085  B8 C8 32 00 00            MOV EAX,0x32c8
0052808A  5D                        POP EBP
0052808B  C3                        RET
switchD_0052807e::caseD_2:
0052808C  B8 C9 32 00 00            MOV EAX,0x32c9
00528091  5D                        POP EBP
00528092  C3                        RET
switchD_0052807e::caseD_7f:
00528093  B8 04 33 00 00            MOV EAX,0x3304
00528098  5D                        POP EBP
00528099  C3                        RET
switchD_0052807e::caseD_3:
0052809A  B8 CA 32 00 00            MOV EAX,0x32ca
0052809F  5D                        POP EBP
005280A0  C3                        RET
switchD_0052807e::caseD_80:
005280A1  B8 6B 33 00 00            MOV EAX,0x336b
005280A6  5D                        POP EBP
005280A7  C3                        RET
switchD_0052807e::caseD_4:
005280A8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005280AB  25 FF 00 00 00            AND EAX,0xff
005280B0  48                        DEC EAX
005280B1  74 1B                     JZ 0x005280ce
005280B3  48                        DEC EAX
005280B4  74 11                     JZ 0x005280c7
005280B6  48                        DEC EAX
005280B7  74 07                     JZ 0x005280c0
005280B9  B8 6F 33 00 00            MOV EAX,0x336f
005280BE  5D                        POP EBP
005280BF  C3                        RET
LAB_005280c0:
005280C0  B8 CD 32 00 00            MOV EAX,0x32cd
005280C5  5D                        POP EBP
005280C6  C3                        RET
LAB_005280c7:
005280C7  B8 CC 32 00 00            MOV EAX,0x32cc
005280CC  5D                        POP EBP
005280CD  C3                        RET
LAB_005280ce:
005280CE  B8 CB 32 00 00            MOV EAX,0x32cb
005280D3  5D                        POP EBP
005280D4  C3                        RET
switchD_0052807e::caseD_5:
005280D5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005280D8  25 FF 00 00 00            AND EAX,0xff
005280DD  48                        DEC EAX
005280DE  74 1B                     JZ 0x005280fb
005280E0  48                        DEC EAX
005280E1  74 11                     JZ 0x005280f4
005280E3  48                        DEC EAX
005280E4  74 07                     JZ 0x005280ed
005280E6  B8 70 33 00 00            MOV EAX,0x3370
005280EB  5D                        POP EBP
005280EC  C3                        RET
LAB_005280ed:
005280ED  B8 D0 32 00 00            MOV EAX,0x32d0
005280F2  5D                        POP EBP
005280F3  C3                        RET
LAB_005280f4:
005280F4  B8 CF 32 00 00            MOV EAX,0x32cf
005280F9  5D                        POP EBP
005280FA  C3                        RET
LAB_005280fb:
005280FB  B8 CE 32 00 00            MOV EAX,0x32ce
00528100  5D                        POP EBP
00528101  C3                        RET
switchD_0052807e::caseD_6:
00528102  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00528105  81 E2 FF 00 00 00         AND EDX,0xff
0052810B  8D 42 FF                  LEA EAX,[EDX + -0x1]
0052810E  83 F8 03                  CMP EAX,0x3
00528111  77 23                     JA 0x00528136
switchD_00528113::switchD:
00528113  FF 24 85 14 88 52 00      JMP dword ptr [EAX*0x4 + 0x528814]
switchD_00528113::caseD_1:
0052811A  B8 D1 32 00 00            MOV EAX,0x32d1
0052811F  5D                        POP EBP
00528120  C3                        RET
switchD_00528113::caseD_2:
00528121  B8 D2 32 00 00            MOV EAX,0x32d2
00528126  5D                        POP EBP
00528127  C3                        RET
switchD_00528113::caseD_3:
00528128  B8 D3 32 00 00            MOV EAX,0x32d3
0052812D  5D                        POP EBP
0052812E  C3                        RET
switchD_00528113::caseD_4:
0052812F  B8 D4 32 00 00            MOV EAX,0x32d4
00528134  5D                        POP EBP
00528135  C3                        RET
switchD_00528113::default:
00528136  B8 71 33 00 00            MOV EAX,0x3371
0052813B  5D                        POP EBP
0052813C  C3                        RET
switchD_0052807e::caseD_7:
0052813D  B8 D5 32 00 00            MOV EAX,0x32d5
00528142  5D                        POP EBP
00528143  C3                        RET
switchD_0052807e::caseD_8:
00528144  B8 D6 32 00 00            MOV EAX,0x32d6
00528149  5D                        POP EBP
0052814A  C3                        RET
switchD_0052807e::caseD_9:
0052814B  B8 D7 32 00 00            MOV EAX,0x32d7
00528150  5D                        POP EBP
00528151  C3                        RET
switchD_0052807e::caseD_a:
00528152  B8 D8 32 00 00            MOV EAX,0x32d8
00528157  5D                        POP EBP
00528158  C3                        RET
switchD_0052807e::caseD_b:
00528159  B8 D9 32 00 00            MOV EAX,0x32d9
0052815E  5D                        POP EBP
0052815F  C3                        RET
switchD_0052807e::caseD_c:
00528160  B8 DA 32 00 00            MOV EAX,0x32da
00528165  5D                        POP EBP
00528166  C3                        RET
switchD_0052807e::caseD_d:
00528167  B8 DB 32 00 00            MOV EAX,0x32db
0052816C  5D                        POP EBP
0052816D  C3                        RET
switchD_0052807e::caseD_e:
0052816E  B8 DC 32 00 00            MOV EAX,0x32dc
00528173  5D                        POP EBP
00528174  C3                        RET
switchD_0052807e::caseD_34:
00528175  B8 6C 33 00 00            MOV EAX,0x336c
0052817A  5D                        POP EBP
0052817B  C3                        RET
switchD_0052807e::caseD_f:
0052817C  B8 DE 32 00 00            MOV EAX,0x32de
00528181  5D                        POP EBP
00528182  C3                        RET
switchD_0052807e::caseD_10:
00528183  B8 DF 32 00 00            MOV EAX,0x32df
00528188  5D                        POP EBP
00528189  C3                        RET
switchD_0052807e::caseD_11:
0052818A  B8 E0 32 00 00            MOV EAX,0x32e0
0052818F  5D                        POP EBP
00528190  C3                        RET
switchD_0052807e::caseD_12:
00528191  B8 E1 32 00 00            MOV EAX,0x32e1
00528196  5D                        POP EBP
00528197  C3                        RET
switchD_0052807e::caseD_13:
00528198  B8 E2 32 00 00            MOV EAX,0x32e2
0052819D  5D                        POP EBP
0052819E  C3                        RET
switchD_0052807e::caseD_14:
0052819F  B8 E3 32 00 00            MOV EAX,0x32e3
005281A4  5D                        POP EBP
005281A5  C3                        RET
switchD_0052807e::caseD_15:
005281A6  B8 E4 32 00 00            MOV EAX,0x32e4
005281AB  5D                        POP EBP
005281AC  C3                        RET
switchD_0052807e::caseD_16:
005281AD  B8 E5 32 00 00            MOV EAX,0x32e5
005281B2  5D                        POP EBP
005281B3  C3                        RET
switchD_0052807e::caseD_17:
005281B4  B8 E6 32 00 00            MOV EAX,0x32e6
005281B9  5D                        POP EBP
005281BA  C3                        RET
switchD_0052807e::caseD_88:
005281BB  B8 6A 33 00 00            MOV EAX,0x336a
005281C0  5D                        POP EBP
005281C1  C3                        RET
switchD_0052807e::caseD_18:
005281C2  B8 E7 32 00 00            MOV EAX,0x32e7
005281C7  5D                        POP EBP
005281C8  C3                        RET
switchD_0052807e::caseD_19:
005281C9  B8 E8 32 00 00            MOV EAX,0x32e8
005281CE  5D                        POP EBP
005281CF  C3                        RET
switchD_0052807e::caseD_1a:
005281D0  B8 E9 32 00 00            MOV EAX,0x32e9
005281D5  5D                        POP EBP
005281D6  C3                        RET
switchD_0052807e::caseD_1b:
005281D7  B8 EB 32 00 00            MOV EAX,0x32eb
005281DC  5D                        POP EBP
005281DD  C3                        RET
switchD_0052807e::caseD_1c:
005281DE  B8 EC 32 00 00            MOV EAX,0x32ec
005281E3  5D                        POP EBP
005281E4  C3                        RET
switchD_0052807e::caseD_1d:
005281E5  B8 ED 32 00 00            MOV EAX,0x32ed
005281EA  5D                        POP EBP
005281EB  C3                        RET
switchD_0052807e::caseD_89:
005281EC  B8 6D 33 00 00            MOV EAX,0x336d
005281F1  5D                        POP EBP
005281F2  C3                        RET
switchD_0052807e::caseD_1e:
005281F3  B8 EE 32 00 00            MOV EAX,0x32ee
005281F8  5D                        POP EBP
005281F9  C3                        RET
switchD_0052807e::caseD_20:
005281FA  B8 F0 32 00 00            MOV EAX,0x32f0
005281FF  5D                        POP EBP
00528200  C3                        RET
switchD_0052807e::caseD_21:
00528201  B8 F1 32 00 00            MOV EAX,0x32f1
00528206  5D                        POP EBP
00528207  C3                        RET
switchD_0052807e::caseD_8c:
00528208  B8 6E 33 00 00            MOV EAX,0x336e
0052820D  5D                        POP EBP
0052820E  C3                        RET
switchD_0052807e::caseD_1f:
0052820F  B8 F2 32 00 00            MOV EAX,0x32f2
00528214  5D                        POP EBP
00528215  C3                        RET
switchD_0052807e::caseD_22:
00528216  B8 F3 32 00 00            MOV EAX,0x32f3
0052821B  5D                        POP EBP
0052821C  C3                        RET
switchD_0052807e::caseD_23:
0052821D  B8 F4 32 00 00            MOV EAX,0x32f4
00528222  5D                        POP EBP
00528223  C3                        RET
switchD_0052807e::caseD_24:
00528224  B8 F5 32 00 00            MOV EAX,0x32f5
00528229  5D                        POP EBP
0052822A  C3                        RET
switchD_0052807e::caseD_25:
0052822B  B8 F6 32 00 00            MOV EAX,0x32f6
00528230  5D                        POP EBP
00528231  C3                        RET
switchD_0052807e::caseD_26:
00528232  B8 F7 32 00 00            MOV EAX,0x32f7
00528237  5D                        POP EBP
00528238  C3                        RET
switchD_0052807e::caseD_27:
00528239  B8 F8 32 00 00            MOV EAX,0x32f8
0052823E  5D                        POP EBP
0052823F  C3                        RET
switchD_0052807e::caseD_28:
00528240  B8 F9 32 00 00            MOV EAX,0x32f9
00528245  5D                        POP EBP
00528246  C3                        RET
switchD_0052807e::caseD_29:
00528247  B8 FA 32 00 00            MOV EAX,0x32fa
0052824C  5D                        POP EBP
0052824D  C3                        RET
switchD_0052807e::caseD_2a:
0052824E  B8 FB 32 00 00            MOV EAX,0x32fb
00528253  5D                        POP EBP
00528254  C3                        RET
switchD_0052807e::caseD_2b:
00528255  B8 FC 32 00 00            MOV EAX,0x32fc
0052825A  5D                        POP EBP
0052825B  C3                        RET
switchD_0052807e::caseD_2c:
0052825C  B8 FD 32 00 00            MOV EAX,0x32fd
00528261  5D                        POP EBP
00528262  C3                        RET
switchD_0052807e::caseD_2d:
00528263  B8 FE 32 00 00            MOV EAX,0x32fe
00528268  5D                        POP EBP
00528269  C3                        RET
switchD_0052807e::caseD_2e:
0052826A  B8 FF 32 00 00            MOV EAX,0x32ff
0052826F  5D                        POP EBP
00528270  C3                        RET
switchD_0052807e::caseD_2f:
00528271  B8 00 33 00 00            MOV EAX,0x3300
00528276  5D                        POP EBP
00528277  C3                        RET
switchD_0052807e::caseD_30:
00528278  B8 01 33 00 00            MOV EAX,0x3301
0052827D  5D                        POP EBP
0052827E  C3                        RET
switchD_0052807e::caseD_31:
0052827F  B8 02 33 00 00            MOV EAX,0x3302
00528284  5D                        POP EBP
00528285  C3                        RET
switchD_0052807e::caseD_32:
00528286  B8 EA 32 00 00            MOV EAX,0x32ea
0052828B  5D                        POP EBP
0052828C  C3                        RET
switchD_0052807e::caseD_33:
0052828D  B8 03 33 00 00            MOV EAX,0x3303
00528292  5D                        POP EBP
00528293  C3                        RET
switchD_0052807e::caseD_36:
00528294  B8 05 33 00 00            MOV EAX,0x3305
00528299  5D                        POP EBP
0052829A  C3                        RET
switchD_0052807e::caseD_37:
0052829B  B8 06 33 00 00            MOV EAX,0x3306
005282A0  5D                        POP EBP
005282A1  C3                        RET
switchD_0052807e::caseD_38:
005282A2  B8 07 33 00 00            MOV EAX,0x3307
005282A7  5D                        POP EBP
005282A8  C3                        RET
switchD_0052807e::caseD_39:
005282A9  B8 08 33 00 00            MOV EAX,0x3308
005282AE  5D                        POP EBP
005282AF  C3                        RET
switchD_0052807e::caseD_3a:
005282B0  B8 09 33 00 00            MOV EAX,0x3309
005282B5  5D                        POP EBP
005282B6  C3                        RET
switchD_0052807e::caseD_3b:
005282B7  B8 0A 33 00 00            MOV EAX,0x330a
005282BC  5D                        POP EBP
005282BD  C3                        RET
switchD_0052807e::caseD_3c:
005282BE  B8 0B 33 00 00            MOV EAX,0x330b
005282C3  5D                        POP EBP
005282C4  C3                        RET
switchD_0052807e::caseD_3d:
005282C5  B8 0C 33 00 00            MOV EAX,0x330c
005282CA  5D                        POP EBP
005282CB  C3                        RET
switchD_0052807e::caseD_3e:
005282CC  B8 0D 33 00 00            MOV EAX,0x330d
005282D1  5D                        POP EBP
005282D2  C3                        RET
switchD_0052807e::caseD_3f:
005282D3  B8 0F 33 00 00            MOV EAX,0x330f
005282D8  5D                        POP EBP
005282D9  C3                        RET
switchD_0052807e::caseD_40:
005282DA  B8 10 33 00 00            MOV EAX,0x3310
005282DF  5D                        POP EBP
005282E0  C3                        RET
switchD_0052807e::caseD_41:
005282E1  B8 11 33 00 00            MOV EAX,0x3311
005282E6  5D                        POP EBP
005282E7  C3                        RET
switchD_0052807e::caseD_42:
005282E8  B8 5D 33 00 00            MOV EAX,0x335d
005282ED  5D                        POP EBP
005282EE  C3                        RET
switchD_0052807e::caseD_43:
005282EF  B8 5E 33 00 00            MOV EAX,0x335e
005282F4  5D                        POP EBP
005282F5  C3                        RET
switchD_0052807e::caseD_96:
005282F6  B8 65 33 00 00            MOV EAX,0x3365
005282FB  5D                        POP EBP
005282FC  C3                        RET
switchD_0052807e::caseD_99:
005282FD  B8 68 33 00 00            MOV EAX,0x3368
00528302  5D                        POP EBP
00528303  C3                        RET
switchD_0052807e::caseD_94:
00528304  B8 63 33 00 00            MOV EAX,0x3363
00528309  5D                        POP EBP
0052830A  C3                        RET
switchD_0052807e::caseD_98:
0052830B  B8 67 33 00 00            MOV EAX,0x3367
00528310  5D                        POP EBP
00528311  C3                        RET
switchD_0052807e::caseD_92:
00528312  B8 61 33 00 00            MOV EAX,0x3361
00528317  5D                        POP EBP
00528318  C3                        RET
switchD_0052807e::caseD_93:
00528319  B8 62 33 00 00            MOV EAX,0x3362
0052831E  5D                        POP EBP
0052831F  C3                        RET
switchD_0052807e::caseD_95:
00528320  B8 64 33 00 00            MOV EAX,0x3364
00528325  5D                        POP EBP
00528326  C3                        RET
switchD_0052807e::caseD_97:
00528327  B8 66 33 00 00            MOV EAX,0x3366
0052832C  5D                        POP EBP
0052832D  C3                        RET
switchD_0052807e::caseD_9a:
0052832E  B8 69 33 00 00            MOV EAX,0x3369
00528333  5D                        POP EBP
00528334  C3                        RET
switchD_0052807e::caseD_44:
00528335  B8 12 33 00 00            MOV EAX,0x3312
0052833A  5D                        POP EBP
0052833B  C3                        RET
switchD_0052807e::caseD_45:
0052833C  B8 13 33 00 00            MOV EAX,0x3313
00528341  5D                        POP EBP
00528342  C3                        RET
switchD_0052807e::caseD_46:
00528343  B8 14 33 00 00            MOV EAX,0x3314
00528348  5D                        POP EBP
00528349  C3                        RET
switchD_0052807e::caseD_47:
0052834A  B8 15 33 00 00            MOV EAX,0x3315
0052834F  5D                        POP EBP
00528350  C3                        RET
switchD_0052807e::caseD_48:
00528351  B8 16 33 00 00            MOV EAX,0x3316
00528356  5D                        POP EBP
00528357  C3                        RET
switchD_0052807e::caseD_49:
00528358  B8 17 33 00 00            MOV EAX,0x3317
0052835D  5D                        POP EBP
0052835E  C3                        RET
switchD_0052807e::caseD_4a:
0052835F  B8 18 33 00 00            MOV EAX,0x3318
00528364  5D                        POP EBP
00528365  C3                        RET
switchD_0052807e::caseD_4b:
00528366  B8 19 33 00 00            MOV EAX,0x3319
0052836B  5D                        POP EBP
0052836C  C3                        RET
switchD_0052807e::caseD_4c:
0052836D  B8 1A 33 00 00            MOV EAX,0x331a
00528372  5D                        POP EBP
00528373  C3                        RET
switchD_0052807e::caseD_4d:
00528374  B8 1B 33 00 00            MOV EAX,0x331b
00528379  5D                        POP EBP
0052837A  C3                        RET
switchD_0052807e::caseD_4e:
0052837B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0052837E  25 FF 00 00 00            AND EAX,0xff
00528383  48                        DEC EAX
00528384  74 1B                     JZ 0x005283a1
00528386  48                        DEC EAX
00528387  74 11                     JZ 0x0052839a
00528389  48                        DEC EAX
0052838A  74 07                     JZ 0x00528393
0052838C  B8 72 33 00 00            MOV EAX,0x3372
00528391  5D                        POP EBP
00528392  C3                        RET
LAB_00528393:
00528393  B8 54 33 00 00            MOV EAX,0x3354
00528398  5D                        POP EBP
00528399  C3                        RET
LAB_0052839a:
0052839A  B8 53 33 00 00            MOV EAX,0x3353
0052839F  5D                        POP EBP
005283A0  C3                        RET
LAB_005283a1:
005283A1  B8 1C 33 00 00            MOV EAX,0x331c
005283A6  5D                        POP EBP
005283A7  C3                        RET
switchD_0052807e::caseD_4f:
005283A8  B8 1D 33 00 00            MOV EAX,0x331d
005283AD  5D                        POP EBP
005283AE  C3                        RET
switchD_0052807e::caseD_50:
005283AF  B8 1E 33 00 00            MOV EAX,0x331e
005283B4  5D                        POP EBP
005283B5  C3                        RET
switchD_0052807e::caseD_51:
005283B6  B8 1F 33 00 00            MOV EAX,0x331f
005283BB  5D                        POP EBP
005283BC  C3                        RET
switchD_0052807e::caseD_52:
005283BD  B8 20 33 00 00            MOV EAX,0x3320
005283C2  5D                        POP EBP
005283C3  C3                        RET
switchD_0052807e::caseD_53:
005283C4  B8 21 33 00 00            MOV EAX,0x3321
005283C9  5D                        POP EBP
005283CA  C3                        RET
switchD_0052807e::caseD_54:
005283CB  B8 22 33 00 00            MOV EAX,0x3322
005283D0  5D                        POP EBP
005283D1  C3                        RET
switchD_0052807e::caseD_55:
005283D2  B8 23 33 00 00            MOV EAX,0x3323
005283D7  5D                        POP EBP
005283D8  C3                        RET
switchD_0052807e::caseD_56:
005283D9  B8 24 33 00 00            MOV EAX,0x3324
005283DE  5D                        POP EBP
005283DF  C3                        RET
switchD_0052807e::caseD_57:
005283E0  B8 25 33 00 00            MOV EAX,0x3325
005283E5  5D                        POP EBP
005283E6  C3                        RET
switchD_0052807e::caseD_58:
005283E7  B8 26 33 00 00            MOV EAX,0x3326
005283EC  5D                        POP EBP
005283ED  C3                        RET
switchD_0052807e::caseD_59:
005283EE  B8 27 33 00 00            MOV EAX,0x3327
005283F3  5D                        POP EBP
005283F4  C3                        RET
switchD_0052807e::caseD_5a:
005283F5  B8 28 33 00 00            MOV EAX,0x3328
005283FA  5D                        POP EBP
005283FB  C3                        RET
switchD_0052807e::caseD_5b:
005283FC  B8 29 33 00 00            MOV EAX,0x3329
00528401  5D                        POP EBP
00528402  C3                        RET
switchD_0052807e::caseD_5c:
00528403  B8 2A 33 00 00            MOV EAX,0x332a
00528408  5D                        POP EBP
00528409  C3                        RET
switchD_0052807e::caseD_5d:
0052840A  B8 2B 33 00 00            MOV EAX,0x332b
0052840F  5D                        POP EBP
00528410  C3                        RET
switchD_0052807e::caseD_5e:
00528411  B8 2C 33 00 00            MOV EAX,0x332c
00528416  5D                        POP EBP
00528417  C3                        RET
switchD_0052807e::caseD_5f:
00528418  B8 2D 33 00 00            MOV EAX,0x332d
0052841D  5D                        POP EBP
0052841E  C3                        RET
switchD_0052807e::caseD_60:
0052841F  B8 2E 33 00 00            MOV EAX,0x332e
00528424  5D                        POP EBP
00528425  C3                        RET
switchD_0052807e::caseD_61:
00528426  B8 30 33 00 00            MOV EAX,0x3330
0052842B  5D                        POP EBP
0052842C  C3                        RET
switchD_0052807e::caseD_62:
0052842D  B8 31 33 00 00            MOV EAX,0x3331
00528432  5D                        POP EBP
00528433  C3                        RET
switchD_0052807e::caseD_63:
00528434  B8 32 33 00 00            MOV EAX,0x3332
00528439  5D                        POP EBP
0052843A  C3                        RET
switchD_0052807e::caseD_65:
0052843B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0052843E  25 FF 00 00 00            AND EAX,0xff
00528443  48                        DEC EAX
00528444  74 1B                     JZ 0x00528461
00528446  48                        DEC EAX
00528447  74 11                     JZ 0x0052845a
00528449  48                        DEC EAX
0052844A  74 07                     JZ 0x00528453
0052844C  B8 73 33 00 00            MOV EAX,0x3373
00528451  5D                        POP EBP
00528452  C3                        RET
LAB_00528453:
00528453  B8 56 33 00 00            MOV EAX,0x3356
00528458  5D                        POP EBP
00528459  C3                        RET
LAB_0052845a:
0052845A  B8 55 33 00 00            MOV EAX,0x3355
0052845F  5D                        POP EBP
00528460  C3                        RET
LAB_00528461:
00528461  B8 36 33 00 00            MOV EAX,0x3336
00528466  5D                        POP EBP
00528467  C3                        RET
switchD_0052807e::caseD_66:
00528468  B8 37 33 00 00            MOV EAX,0x3337
0052846D  5D                        POP EBP
0052846E  C3                        RET
switchD_0052807e::caseD_67:
0052846F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528472  25 FF 00 00 00            AND EAX,0xff
00528477  48                        DEC EAX
00528478  74 1B                     JZ 0x00528495
0052847A  48                        DEC EAX
0052847B  74 11                     JZ 0x0052848e
0052847D  48                        DEC EAX
0052847E  74 07                     JZ 0x00528487
00528480  B8 74 33 00 00            MOV EAX,0x3374
00528485  5D                        POP EBP
00528486  C3                        RET
LAB_00528487:
00528487  B8 58 33 00 00            MOV EAX,0x3358
0052848C  5D                        POP EBP
0052848D  C3                        RET
LAB_0052848e:
0052848E  B8 57 33 00 00            MOV EAX,0x3357
00528493  5D                        POP EBP
00528494  C3                        RET
LAB_00528495:
00528495  B8 38 33 00 00            MOV EAX,0x3338
0052849A  5D                        POP EBP
0052849B  C3                        RET
switchD_0052807e::caseD_68:
0052849C  B8 39 33 00 00            MOV EAX,0x3339
005284A1  5D                        POP EBP
005284A2  C3                        RET
switchD_0052807e::caseD_69:
005284A3  B8 3B 33 00 00            MOV EAX,0x333b
005284A8  5D                        POP EBP
005284A9  C3                        RET
switchD_0052807e::caseD_6a:
005284AA  B8 3C 33 00 00            MOV EAX,0x333c
005284AF  5D                        POP EBP
005284B0  C3                        RET
switchD_0052807e::caseD_6b:
005284B1  B8 3D 33 00 00            MOV EAX,0x333d
005284B6  5D                        POP EBP
005284B7  C3                        RET
switchD_0052807e::caseD_6c:
005284B8  B8 3E 33 00 00            MOV EAX,0x333e
005284BD  5D                        POP EBP
005284BE  C3                        RET
switchD_0052807e::caseD_6d:
005284BF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005284C2  25 FF 00 00 00            AND EAX,0xff
005284C7  48                        DEC EAX
005284C8  74 1B                     JZ 0x005284e5
005284CA  48                        DEC EAX
005284CB  74 11                     JZ 0x005284de
005284CD  48                        DEC EAX
005284CE  74 07                     JZ 0x005284d7
005284D0  B8 75 33 00 00            MOV EAX,0x3375
005284D5  5D                        POP EBP
005284D6  C3                        RET
LAB_005284d7:
005284D7  B8 5A 33 00 00            MOV EAX,0x335a
005284DC  5D                        POP EBP
005284DD  C3                        RET
LAB_005284de:
005284DE  B8 59 33 00 00            MOV EAX,0x3359
005284E3  5D                        POP EBP
005284E4  C3                        RET
LAB_005284e5:
005284E5  B8 3F 33 00 00            MOV EAX,0x333f
005284EA  5D                        POP EBP
005284EB  C3                        RET
switchD_0052807e::caseD_6e:
005284EC  B8 40 33 00 00            MOV EAX,0x3340
005284F1  5D                        POP EBP
005284F2  C3                        RET
switchD_0052807e::caseD_6f:
005284F3  B8 41 33 00 00            MOV EAX,0x3341
005284F8  5D                        POP EBP
005284F9  C3                        RET
switchD_0052807e::caseD_70:
005284FA  B8 42 33 00 00            MOV EAX,0x3342
005284FF  5D                        POP EBP
00528500  C3                        RET
switchD_0052807e::caseD_71:
00528501  B8 43 33 00 00            MOV EAX,0x3343
00528506  5D                        POP EBP
00528507  C3                        RET
switchD_0052807e::caseD_72:
00528508  B8 44 33 00 00            MOV EAX,0x3344
0052850D  5D                        POP EBP
0052850E  C3                        RET
switchD_0052807e::caseD_73:
0052850F  B8 45 33 00 00            MOV EAX,0x3345
00528514  5D                        POP EBP
00528515  C3                        RET
switchD_0052807e::caseD_74:
00528516  B8 46 33 00 00            MOV EAX,0x3346
0052851B  5D                        POP EBP
0052851C  C3                        RET
switchD_0052807e::caseD_75:
0052851D  B8 47 33 00 00            MOV EAX,0x3347
00528522  5D                        POP EBP
00528523  C3                        RET
switchD_0052807e::caseD_76:
00528524  B8 48 33 00 00            MOV EAX,0x3348
00528529  5D                        POP EBP
0052852A  C3                        RET
switchD_0052807e::caseD_77:
0052852B  B8 49 33 00 00            MOV EAX,0x3349
00528530  5D                        POP EBP
00528531  C3                        RET
switchD_0052807e::caseD_78:
00528532  B8 4A 33 00 00            MOV EAX,0x334a
00528537  5D                        POP EBP
00528538  C3                        RET
switchD_0052807e::caseD_79:
00528539  B8 4B 33 00 00            MOV EAX,0x334b
0052853E  5D                        POP EBP
0052853F  C3                        RET
switchD_0052807e::caseD_7a:
00528540  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528543  25 FF 00 00 00            AND EAX,0xff
00528548  48                        DEC EAX
00528549  74 11                     JZ 0x0052855c
0052854B  48                        DEC EAX
0052854C  74 07                     JZ 0x00528555
0052854E  B8 76 33 00 00            MOV EAX,0x3376
00528553  5D                        POP EBP
00528554  C3                        RET
LAB_00528555:
00528555  B8 5B 33 00 00            MOV EAX,0x335b
0052855A  5D                        POP EBP
0052855B  C3                        RET
LAB_0052855c:
0052855C  B8 4C 33 00 00            MOV EAX,0x334c
00528561  5D                        POP EBP
00528562  C3                        RET
switchD_0052807e::caseD_7b:
00528563  B8 4D 33 00 00            MOV EAX,0x334d
00528568  5D                        POP EBP
00528569  C3                        RET
switchD_0052807e::caseD_7c:
0052856A  B8 4E 33 00 00            MOV EAX,0x334e
0052856F  5D                        POP EBP
00528570  C3                        RET
switchD_0052807e::caseD_7d:
00528571  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528574  25 FF 00 00 00            AND EAX,0xff
00528579  48                        DEC EAX
0052857A  74 11                     JZ 0x0052858d
0052857C  48                        DEC EAX
0052857D  74 07                     JZ 0x00528586
0052857F  B8 77 33 00 00            MOV EAX,0x3377
00528584  5D                        POP EBP
00528585  C3                        RET
LAB_00528586:
00528586  B8 5C 33 00 00            MOV EAX,0x335c
0052858B  5D                        POP EBP
0052858C  C3                        RET
LAB_0052858d:
0052858D  B8 4F 33 00 00            MOV EAX,0x334f
00528592  5D                        POP EBP
00528593  C3                        RET
switchD_0052807e::caseD_7e:
00528594  B8 50 33 00 00            MOV EAX,0x3350
00528599  5D                        POP EBP
0052859A  C3                        RET
switchD_0052807e::caseD_90:
0052859B  B8 5F 33 00 00            MOV EAX,0x335f
005285A0  5D                        POP EBP
005285A1  C3                        RET
switchD_0052807e::caseD_64:
005285A2  B8 78 33 00 00            MOV EAX,0x3378
switchD_0052807e::default:
005285A7  5D                        POP EBP
005285A8  C3                        RET
