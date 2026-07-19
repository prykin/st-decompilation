STGroupBoatC::GetMessage:
00497E00  55                        PUSH EBP
00497E01  8B EC                     MOV EBP,ESP
00497E03  81 EC 80 00 00 00         SUB ESP,0x80
00497E09  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00497E0E  53                        PUSH EBX
00497E0F  56                        PUSH ESI
00497E10  57                        PUSH EDI
00497E11  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00497E14  33 FF                     XOR EDI,EDI
00497E16  8D 55 84                  LEA EDX,[EBP + -0x7c]
00497E19  8D 4D 80                  LEA ECX,[EBP + -0x80]
00497E1C  57                        PUSH EDI
00497E1D  52                        PUSH EDX
00497E1E  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00497E21  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00497E27  E8 C4 59 29 00            CALL 0x0072d7f0
00497E2C  8B F0                     MOV ESI,EAX
00497E2E  83 C4 08                  ADD ESP,0x8
00497E31  3B F7                     CMP ESI,EDI
00497E33  0F 85 31 0B 00 00         JNZ 0x0049896a
00497E39  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00497E3C  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00497E3F  83 7E 10 03               CMP dword ptr [ESI + 0x10],0x3
00497E43  74 08                     JZ 0x00497e4d
00497E45  56                        PUSH ESI
00497E46  8B CB                     MOV ECX,EBX
00497E48  E8 9D B6 F6 FF            CALL 0x004034ea
LAB_00497e4d:
00497E4D  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00497E50  83 F8 03                  CMP EAX,0x3
00497E53  0F 87 43 0A 00 00         JA 0x0049889c
00497E59  0F 84 FD 07 00 00         JZ 0x0049865c
00497E5F  2B C7                     SUB EAX,EDI
00497E61  74 5C                     JZ 0x00497ebf
00497E63  83 E8 02                  SUB EAX,0x2
00497E66  0F 85 EA 0A 00 00         JNZ 0x00498956
00497E6C  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00497E6F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00497E72  83 F9 01                  CMP ECX,0x1
00497E75  76 2A                     JBE 0x00497ea1
00497E77  83 F9 02                  CMP ECX,0x2
00497E7A  0F 85 D6 0A 00 00         JNZ 0x00498956
00497E80  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
00497E83  03 C8                     ADD ECX,EAX
00497E85  51                        PUSH ECX
00497E86  8B CB                     MOV ECX,EBX
00497E88  E8 BA 9A F6 FF            CALL 0x00401947
00497E8D  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00497E90  33 C0                     XOR EAX,EAX
00497E92  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00497E98  5F                        POP EDI
00497E99  5E                        POP ESI
00497E9A  5B                        POP EBX
00497E9B  8B E5                     MOV ESP,EBP
00497E9D  5D                        POP EBP
00497E9E  C2 04 00                  RET 0x4
LAB_00497ea1:
00497EA1  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00497EA4  C7 83 E6 01 00 00 03 00 00 00  MOV dword ptr [EBX + 0x1e6],0x3
00497EAE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00497EB4  33 C0                     XOR EAX,EAX
00497EB6  5F                        POP EDI
00497EB7  5E                        POP ESI
00497EB8  5B                        POP EBX
00497EB9  8B E5                     MOV ESP,EBP
00497EBB  5D                        POP EBP
00497EBC  C2 04 00                  RET 0x4
LAB_00497ebf:
00497EBF  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
00497EC2  BF 01 00 00 00            MOV EDI,0x1
00497EC7  3B C7                     CMP EAX,EDI
00497EC9  75 3D                     JNZ 0x00497f08
00497ECB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00497ED1  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00497ED4  C7 45 D4 0A 00 00 00      MOV dword ptr [EBP + -0x2c],0xa
00497EDB  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
00497EE2  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00497EE5  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00497EE8  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00497EEB  8D 55 C4                  LEA EDX,[EBP + -0x3c]
00497EEE  52                        PUSH EDX
00497EEF  E8 1C D9 24 00            CALL 0x006e5810
00497EF4  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00497EF7  33 C0                     XOR EAX,EAX
00497EF9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00497EFF  5F                        POP EDI
00497F00  5E                        POP ESI
00497F01  5B                        POP EBX
00497F02  8B E5                     MOV ESP,EBP
00497F04  5D                        POP EBP
00497F05  C2 04 00                  RET 0x4
LAB_00497f08:
00497F08  39 7B 61                  CMP dword ptr [EBX + 0x61],EDI
00497F0B  0F 85 2B 01 00 00         JNZ 0x0049803c
00497F11  8B 83 81 00 00 00         MOV EAX,dword ptr [EBX + 0x81]
00497F17  33 F6                     XOR ESI,ESI
00497F19  3B C7                     CMP EAX,EDI
00497F1B  89 73 61                  MOV dword ptr [EBX + 0x61],ESI
00497F1E  75 74                     JNZ 0x00497f94
00497F20  8B 8B DA 01 00 00         MOV ECX,dword ptr [EBX + 0x1da]
00497F26  89 B3 81 00 00 00         MOV dword ptr [EBX + 0x81],ESI
00497F2C  39 71 0C                  CMP dword ptr [ECX + 0xc],ESI
00497F2F  7E 22                     JLE 0x00497f53
LAB_00497f31:
00497F31  8D 45 F0                  LEA EAX,[EBP + -0x10]
00497F34  8B D6                     MOV EDX,ESI
00497F36  50                        PUSH EAX
00497F37  E8 34 4D 21 00            CALL 0x006acc70
00497F3C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00497F3F  8B 13                     MOV EDX,dword ptr [EBX]
00497F41  50                        PUSH EAX
00497F42  8B CB                     MOV ECX,EBX
00497F44  FF 52 04                  CALL dword ptr [EDX + 0x4]
00497F47  8B 8B DA 01 00 00         MOV ECX,dword ptr [EBX + 0x1da]
00497F4D  46                        INC ESI
00497F4E  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
00497F51  7C DE                     JL 0x00497f31
LAB_00497f53:
00497F53  83 BB E6 01 00 00 06      CMP dword ptr [EBX + 0x1e6],0x6
00497F5A  75 0F                     JNZ 0x00497f6b
00497F5C  8B CB                     MOV ECX,EBX
00497F5E  E8 1D C0 F6 FF            CALL 0x00403f80
00497F63  57                        PUSH EDI
00497F64  8B CB                     MOV ECX,EBX
00497F66  E8 B3 B3 F6 FF            CALL 0x0040331e
LAB_00497f6b:
00497F6B  66 83 7B 27 00            CMP word ptr [EBX + 0x27],0x0
00497F70  75 0A                     JNZ 0x00497f7c
00497F72  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00497F75  85 C0                     TEST EAX,EAX
00497F77  75 03                     JNZ 0x00497f7c
00497F79  89 7B 5D                  MOV dword ptr [EBX + 0x5d],EDI
LAB_00497f7c:
00497F7C  8B 8B DA 01 00 00         MOV ECX,dword ptr [EBX + 0x1da]
00497F82  51                        PUSH ECX
00497F83  E8 88 61 21 00            CALL 0x006ae110
00497F88  C7 83 DA 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1da],0x0
00497F92  33 F6                     XOR ESI,ESI
LAB_00497f94:
00497F94  39 7B 6D                  CMP dword ptr [EBX + 0x6d],EDI
00497F97  75 1D                     JNZ 0x00497fb6
00497F99  8B 43 2D                  MOV EAX,dword ptr [EBX + 0x2d]
00497F9C  89 73 6D                  MOV dword ptr [EBX + 0x6d],ESI
00497F9F  3B C6                     CMP EAX,ESI
00497FA1  74 13                     JZ 0x00497fb6
00497FA3  8B CB                     MOV ECX,EBX
00497FA5  E8 F7 AD F6 FF            CALL 0x00402da1
00497FAA  8B 53 2D                  MOV EDX,dword ptr [EBX + 0x2d]
00497FAD  52                        PUSH EDX
00497FAE  E8 5D 61 21 00            CALL 0x006ae110
00497FB3  89 73 2D                  MOV dword ptr [EBX + 0x2d],ESI
LAB_00497fb6:
00497FB6  39 7B 71                  CMP dword ptr [EBX + 0x71],EDI
00497FB9  75 15                     JNZ 0x00497fd0
00497FBB  8B 83 CA 01 00 00         MOV EAX,dword ptr [EBX + 0x1ca]
00497FC1  89 73 71                  MOV dword ptr [EBX + 0x71],ESI
00497FC4  50                        PUSH EAX
00497FC5  E8 46 61 21 00            CALL 0x006ae110
00497FCA  89 B3 CA 01 00 00         MOV dword ptr [EBX + 0x1ca],ESI
LAB_00497fd0:
00497FD0  39 7B 75                  CMP dword ptr [EBX + 0x75],EDI
00497FD3  75 31                     JNZ 0x00498006
00497FD5  8B 8B CE 01 00 00         MOV ECX,dword ptr [EBX + 0x1ce]
00497FDB  89 73 75                  MOV dword ptr [EBX + 0x75],ESI
00497FDE  51                        PUSH ECX
00497FDF  8B CB                     MOV ECX,EBX
00497FE1  E8 9F C9 F6 FF            CALL 0x00404985
00497FE6  8B 93 CE 01 00 00         MOV EDX,dword ptr [EBX + 0x1ce]
00497FEC  8B CB                     MOV ECX,EBX
00497FEE  52                        PUSH EDX
00497FEF  E8 52 D1 F6 FF            CALL 0x00405146
00497FF4  8B 83 CE 01 00 00         MOV EAX,dword ptr [EBX + 0x1ce]
00497FFA  50                        PUSH EAX
00497FFB  E8 10 61 21 00            CALL 0x006ae110
00498000  89 B3 CE 01 00 00         MOV dword ptr [EBX + 0x1ce],ESI
LAB_00498006:
00498006  39 7B 79                  CMP dword ptr [EBX + 0x79],EDI
00498009  75 15                     JNZ 0x00498020
0049800B  8B 8B D2 01 00 00         MOV ECX,dword ptr [EBX + 0x1d2]
00498011  89 73 79                  MOV dword ptr [EBX + 0x79],ESI
00498014  51                        PUSH ECX
00498015  E8 F6 60 21 00            CALL 0x006ae110
0049801A  89 B3 D2 01 00 00         MOV dword ptr [EBX + 0x1d2],ESI
LAB_00498020:
00498020  39 7B 7D                  CMP dword ptr [EBX + 0x7d],EDI
00498023  75 19                     JNZ 0x0049803e
00498025  8B 93 D6 01 00 00         MOV EDX,dword ptr [EBX + 0x1d6]
0049802B  89 73 7D                  MOV dword ptr [EBX + 0x7d],ESI
0049802E  52                        PUSH EDX
0049802F  E8 DC 60 21 00            CALL 0x006ae110
00498034  89 B3 D6 01 00 00         MOV dword ptr [EBX + 0x1d6],ESI
0049803A  EB 02                     JMP 0x0049803e
LAB_0049803c:
0049803C  33 F6                     XOR ESI,ESI
LAB_0049803e:
0049803E  39 7B 65                  CMP dword ptr [EBX + 0x65],EDI
00498041  0F 85 89 04 00 00         JNZ 0x004984d0
00498047  39 BB 89 00 00 00         CMP dword ptr [EBX + 0x89],EDI
0049804D  75 1B                     JNZ 0x0049806a
0049804F  8B 83 E6 01 00 00         MOV EAX,dword ptr [EBX + 0x1e6]
00498055  48                        DEC EAX
00498056  74 0C                     JZ 0x00498064
00498058  89 BB E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EDI
0049805E  56                        PUSH ESI
0049805F  E9 85 04 00 00            JMP 0x004984e9
LAB_00498064:
00498064  57                        PUSH EDI
00498065  E9 7F 04 00 00            JMP 0x004984e9
LAB_0049806a:
0049806A  39 BB 91 00 00 00         CMP dword ptr [EBX + 0x91],EDI
00498070  75 4D                     JNZ 0x004980bf
00498072  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498078  B8 03 00 00 00            MOV EAX,0x3
0049807D  3B C8                     CMP ECX,EAX
0049807F  74 22                     JZ 0x004980a3
00498081  56                        PUSH ESI
00498082  8B CB                     MOV ECX,EBX
00498084  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
0049808A  E8 AF D8 F6 FF            CALL 0x0040593e
0049808F  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00498092  33 C0                     XOR EAX,EAX
00498094  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049809A  5F                        POP EDI
0049809B  5E                        POP ESI
0049809C  5B                        POP EBX
0049809D  8B E5                     MOV ESP,EBP
0049809F  5D                        POP EBP
004980A0  C2 04 00                  RET 0x4
LAB_004980a3:
004980A3  57                        PUSH EDI
004980A4  8B CB                     MOV ECX,EBX
004980A6  E8 93 D8 F6 FF            CALL 0x0040593e
004980AB  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
004980AE  33 C0                     XOR EAX,EAX
004980B0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004980B6  5F                        POP EDI
004980B7  5E                        POP ESI
004980B8  5B                        POP EBX
004980B9  8B E5                     MOV ESP,EBP
004980BB  5D                        POP EBP
004980BC  C2 04 00                  RET 0x4
LAB_004980bf:
004980BF  39 BB 8D 00 00 00         CMP dword ptr [EBX + 0x8d],EDI
004980C5  75 2F                     JNZ 0x004980f6
004980C7  8B 83 E6 01 00 00         MOV EAX,dword ptr [EBX + 0x1e6]
004980CD  83 E8 02                  SUB EAX,0x2
004980D0  74 17                     JZ 0x004980e9
004980D2  56                        PUSH ESI
004980D3  8B CB                     MOV ECX,EBX
004980D5  C7 83 E6 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1e6],0x2
004980DF  E8 DA 8F F6 FF            CALL 0x004010be
004980E4  E9 07 04 00 00            JMP 0x004984f0
LAB_004980e9:
004980E9  57                        PUSH EDI
004980EA  8B CB                     MOV ECX,EBX
004980EC  E8 CD 8F F6 FF            CALL 0x004010be
004980F1  E9 FA 03 00 00            JMP 0x004984f0
LAB_004980f6:
004980F6  39 BB A1 00 00 00         CMP dword ptr [EBX + 0xa1],EDI
004980FC  75 2F                     JNZ 0x0049812d
004980FE  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498104  B8 07 00 00 00            MOV EAX,0x7
00498109  3B C8                     CMP ECX,EAX
0049810B  74 13                     JZ 0x00498120
0049810D  56                        PUSH ESI
0049810E  8B CB                     MOV ECX,EBX
00498110  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498116  E8 D4 9A F6 FF            CALL 0x00401bef
0049811B  E9 D0 03 00 00            JMP 0x004984f0
LAB_00498120:
00498120  57                        PUSH EDI
00498121  8B CB                     MOV ECX,EBX
00498123  E8 C7 9A F6 FF            CALL 0x00401bef
00498128  E9 C3 03 00 00            JMP 0x004984f0
LAB_0049812d:
0049812D  39 BB 9D 00 00 00         CMP dword ptr [EBX + 0x9d],EDI
00498133  75 30                     JNZ 0x00498165
00498135  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
0049813B  B8 06 00 00 00            MOV EAX,0x6
00498140  3B C8                     CMP ECX,EAX
00498142  74 09                     JZ 0x0049814d
00498144  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
0049814A  56                        PUSH ESI
0049814B  EB 01                     JMP 0x0049814e
LAB_0049814d:
0049814D  57                        PUSH EDI
LAB_0049814e:
0049814E  8B CB                     MOV ECX,EBX
00498150  E8 1C D2 F6 FF            CALL 0x00405371
00498155  83 F8 FF                  CMP EAX,-0x1
00498158  0F 84 48 08 00 00         JZ 0x004989a6
0049815E  3B C6                     CMP EAX,ESI
00498160  E9 8D 03 00 00            JMP 0x004984f2
LAB_00498165:
00498165  39 BB A5 00 00 00         CMP dword ptr [EBX + 0xa5],EDI
0049816B  75 36                     JNZ 0x004981a3
0049816D  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498173  B8 08 00 00 00            MOV EAX,0x8
00498178  3B C8                     CMP ECX,EAX
0049817A  74 09                     JZ 0x00498185
0049817C  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498182  56                        PUSH ESI
00498183  EB 01                     JMP 0x00498186
LAB_00498185:
00498185  57                        PUSH EDI
LAB_00498186:
00498186  8B CB                     MOV ECX,EBX
00498188  E8 E6 D4 F6 FF            CALL 0x00405673
LAB_0049818d:
0049818D  83 F8 FF                  CMP EAX,-0x1
00498190  0F 84 10 08 00 00         JZ 0x004989a6
00498196  3B C6                     CMP EAX,ESI
00498198  0F 85 B8 07 00 00         JNZ 0x00498956
0049819E  E9 5F 03 00 00            JMP 0x00498502
LAB_004981a3:
004981A3  39 BB A9 00 00 00         CMP dword ptr [EBX + 0xa9],EDI
004981A9  75 2F                     JNZ 0x004981da
004981AB  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
004981B1  B8 09 00 00 00            MOV EAX,0x9
004981B6  3B C8                     CMP ECX,EAX
004981B8  74 13                     JZ 0x004981cd
004981BA  56                        PUSH ESI
004981BB  8B CB                     MOV ECX,EBX
004981BD  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
004981C3  E8 B9 AD F6 FF            CALL 0x00402f81
004981C8  E9 23 03 00 00            JMP 0x004984f0
LAB_004981cd:
004981CD  57                        PUSH EDI
004981CE  8B CB                     MOV ECX,EBX
004981D0  E8 AC AD F6 FF            CALL 0x00402f81
004981D5  E9 16 03 00 00            JMP 0x004984f0
LAB_004981da:
004981DA  39 BB AD 00 00 00         CMP dword ptr [EBX + 0xad],EDI
004981E0  75 29                     JNZ 0x0049820b
004981E2  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
004981E8  B8 0A 00 00 00            MOV EAX,0xa
004981ED  3B C8                     CMP ECX,EAX
004981EF  74 10                     JZ 0x00498201
004981F1  56                        PUSH ESI
004981F2  8B CB                     MOV ECX,EBX
004981F4  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
004981FA  E8 BD D1 F6 FF            CALL 0x004053bc
004981FF  EB 8C                     JMP 0x0049818d
LAB_00498201:
00498201  57                        PUSH EDI
00498202  8B CB                     MOV ECX,EBX
00498204  E8 B3 D1 F6 FF            CALL 0x004053bc
00498209  EB 82                     JMP 0x0049818d
LAB_0049820b:
0049820B  39 BB 95 00 00 00         CMP dword ptr [EBX + 0x95],EDI
00498211  75 2F                     JNZ 0x00498242
00498213  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498219  B8 04 00 00 00            MOV EAX,0x4
0049821E  3B C8                     CMP ECX,EAX
00498220  74 13                     JZ 0x00498235
00498222  56                        PUSH ESI
00498223  8B CB                     MOV ECX,EBX
00498225  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
0049822B  E8 29 C6 F6 FF            CALL 0x00404859
00498230  E9 58 FF FF FF            JMP 0x0049818d
LAB_00498235:
00498235  57                        PUSH EDI
00498236  8B CB                     MOV ECX,EBX
00498238  E8 1C C6 F6 FF            CALL 0x00404859
0049823D  E9 4B FF FF FF            JMP 0x0049818d
LAB_00498242:
00498242  39 BB 99 00 00 00         CMP dword ptr [EBX + 0x99],EDI
00498248  75 2F                     JNZ 0x00498279
0049824A  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498250  B8 05 00 00 00            MOV EAX,0x5
00498255  3B C8                     CMP ECX,EAX
00498257  74 13                     JZ 0x0049826c
00498259  56                        PUSH ESI
0049825A  8B CB                     MOV ECX,EBX
0049825C  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498262  E8 3C DB F6 FF            CALL 0x00405da3
00498267  E9 21 FF FF FF            JMP 0x0049818d
LAB_0049826c:
0049826C  57                        PUSH EDI
0049826D  8B CB                     MOV ECX,EBX
0049826F  E8 2F DB F6 FF            CALL 0x00405da3
00498274  E9 14 FF FF FF            JMP 0x0049818d
LAB_00498279:
00498279  39 BB B1 00 00 00         CMP dword ptr [EBX + 0xb1],EDI
0049827F  75 2F                     JNZ 0x004982b0
00498281  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498287  B8 0B 00 00 00            MOV EAX,0xb
0049828C  3B C8                     CMP ECX,EAX
0049828E  74 13                     JZ 0x004982a3
00498290  56                        PUSH ESI
00498291  8B CB                     MOV ECX,EBX
00498293  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498299  E8 B7 A6 F6 FF            CALL 0x00402955
0049829E  E9 EA FE FF FF            JMP 0x0049818d
LAB_004982a3:
004982A3  57                        PUSH EDI
004982A4  8B CB                     MOV ECX,EBX
004982A6  E8 AA A6 F6 FF            CALL 0x00402955
004982AB  E9 DD FE FF FF            JMP 0x0049818d
LAB_004982b0:
004982B0  39 BB B5 00 00 00         CMP dword ptr [EBX + 0xb5],EDI
004982B6  75 2F                     JNZ 0x004982e7
004982B8  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
004982BE  B8 0C 00 00 00            MOV EAX,0xc
004982C3  3B C8                     CMP ECX,EAX
004982C5  74 13                     JZ 0x004982da
004982C7  56                        PUSH ESI
004982C8  8B CB                     MOV ECX,EBX
004982CA  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
004982D0  E8 50 AE F6 FF            CALL 0x00403125
004982D5  E9 B3 FE FF FF            JMP 0x0049818d
LAB_004982da:
004982DA  57                        PUSH EDI
004982DB  8B CB                     MOV ECX,EBX
004982DD  E8 43 AE F6 FF            CALL 0x00403125
004982E2  E9 A6 FE FF FF            JMP 0x0049818d
LAB_004982e7:
004982E7  39 BB B9 00 00 00         CMP dword ptr [EBX + 0xb9],EDI
004982ED  75 2F                     JNZ 0x0049831e
004982EF  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
004982F5  B8 0D 00 00 00            MOV EAX,0xd
004982FA  3B C8                     CMP ECX,EAX
004982FC  74 13                     JZ 0x00498311
004982FE  56                        PUSH ESI
004982FF  8B CB                     MOV ECX,EBX
00498301  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498307  E8 79 A8 F6 FF            CALL 0x00402b85
0049830C  E9 DF 01 00 00            JMP 0x004984f0
LAB_00498311:
00498311  57                        PUSH EDI
00498312  8B CB                     MOV ECX,EBX
00498314  E8 6C A8 F6 FF            CALL 0x00402b85
00498319  E9 D2 01 00 00            JMP 0x004984f0
LAB_0049831e:
0049831E  39 BB BD 00 00 00         CMP dword ptr [EBX + 0xbd],EDI
00498324  75 2F                     JNZ 0x00498355
00498326  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
0049832C  B8 0E 00 00 00            MOV EAX,0xe
00498331  3B C8                     CMP ECX,EAX
00498333  74 13                     JZ 0x00498348
00498335  56                        PUSH ESI
00498336  8B CB                     MOV ECX,EBX
00498338  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
0049833E  E8 9B B3 F6 FF            CALL 0x004036de
00498343  E9 A8 01 00 00            JMP 0x004984f0
LAB_00498348:
00498348  57                        PUSH EDI
00498349  8B CB                     MOV ECX,EBX
0049834B  E8 8E B3 F6 FF            CALL 0x004036de
00498350  E9 9B 01 00 00            JMP 0x004984f0
LAB_00498355:
00498355  39 BB C1 00 00 00         CMP dword ptr [EBX + 0xc1],EDI
0049835B  75 2F                     JNZ 0x0049838c
0049835D  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498363  B8 0F 00 00 00            MOV EAX,0xf
00498368  3B C8                     CMP ECX,EAX
0049836A  74 13                     JZ 0x0049837f
0049836C  56                        PUSH ESI
0049836D  8B CB                     MOV ECX,EBX
0049836F  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498375  E8 4B B3 F6 FF            CALL 0x004036c5
0049837A  E9 71 01 00 00            JMP 0x004984f0
LAB_0049837f:
0049837F  57                        PUSH EDI
00498380  8B CB                     MOV ECX,EBX
00498382  E8 3E B3 F6 FF            CALL 0x004036c5
00498387  E9 64 01 00 00            JMP 0x004984f0
LAB_0049838c:
0049838C  39 BB C9 00 00 00         CMP dword ptr [EBX + 0xc9],EDI
00498392  75 2F                     JNZ 0x004983c3
00498394  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
0049839A  B8 11 00 00 00            MOV EAX,0x11
0049839F  3B C8                     CMP ECX,EAX
004983A1  74 13                     JZ 0x004983b6
004983A3  56                        PUSH ESI
004983A4  8B CB                     MOV ECX,EBX
004983A6  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
004983AC  E8 FE CD F6 FF            CALL 0x004051af
004983B1  E9 3A 01 00 00            JMP 0x004984f0
LAB_004983b6:
004983B6  57                        PUSH EDI
004983B7  8B CB                     MOV ECX,EBX
004983B9  E8 F1 CD F6 FF            CALL 0x004051af
004983BE  E9 2D 01 00 00            JMP 0x004984f0
LAB_004983c3:
004983C3  39 BB C5 00 00 00         CMP dword ptr [EBX + 0xc5],EDI
004983C9  75 2F                     JNZ 0x004983fa
004983CB  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
004983D1  B8 10 00 00 00            MOV EAX,0x10
004983D6  3B C8                     CMP ECX,EAX
004983D8  74 13                     JZ 0x004983ed
004983DA  56                        PUSH ESI
004983DB  8B CB                     MOV ECX,EBX
004983DD  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
004983E3  E8 BA A3 F6 FF            CALL 0x004027a2
004983E8  E9 03 01 00 00            JMP 0x004984f0
LAB_004983ed:
004983ED  57                        PUSH EDI
004983EE  8B CB                     MOV ECX,EBX
004983F0  E8 AD A3 F6 FF            CALL 0x004027a2
004983F5  E9 F6 00 00 00            JMP 0x004984f0
LAB_004983fa:
004983FA  39 BB CD 00 00 00         CMP dword ptr [EBX + 0xcd],EDI
00498400  75 2F                     JNZ 0x00498431
00498402  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498408  B8 12 00 00 00            MOV EAX,0x12
0049840D  3B C8                     CMP ECX,EAX
0049840F  74 13                     JZ 0x00498424
00498411  56                        PUSH ESI
00498412  8B CB                     MOV ECX,EBX
00498414  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
0049841A  E8 4C D0 F6 FF            CALL 0x0040546b
0049841F  E9 CC 00 00 00            JMP 0x004984f0
LAB_00498424:
00498424  57                        PUSH EDI
00498425  8B CB                     MOV ECX,EBX
00498427  E8 3F D0 F6 FF            CALL 0x0040546b
0049842C  E9 BF 00 00 00            JMP 0x004984f0
LAB_00498431:
00498431  39 BB D1 00 00 00         CMP dword ptr [EBX + 0xd1],EDI
00498437  75 2F                     JNZ 0x00498468
00498439  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
0049843F  B8 13 00 00 00            MOV EAX,0x13
00498444  3B C8                     CMP ECX,EAX
00498446  74 13                     JZ 0x0049845b
00498448  56                        PUSH ESI
00498449  8B CB                     MOV ECX,EBX
0049844B  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498451  E8 6A 94 F6 FF            CALL 0x004018c0
00498456  E9 95 00 00 00            JMP 0x004984f0
LAB_0049845b:
0049845B  57                        PUSH EDI
0049845C  8B CB                     MOV ECX,EBX
0049845E  E8 5D 94 F6 FF            CALL 0x004018c0
00498463  E9 88 00 00 00            JMP 0x004984f0
LAB_00498468:
00498468  39 BB D5 00 00 00         CMP dword ptr [EBX + 0xd5],EDI
0049846E  75 29                     JNZ 0x00498499
00498470  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
00498476  B8 14 00 00 00            MOV EAX,0x14
0049847B  3B C8                     CMP ECX,EAX
0049847D  74 10                     JZ 0x0049848f
0049847F  56                        PUSH ESI
00498480  8B CB                     MOV ECX,EBX
00498482  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
00498488  E8 73 95 F6 FF            CALL 0x00401a00
0049848D  EB 61                     JMP 0x004984f0
LAB_0049848f:
0049848F  57                        PUSH EDI
00498490  8B CB                     MOV ECX,EBX
00498492  E8 69 95 F6 FF            CALL 0x00401a00
00498497  EB 57                     JMP 0x004984f0
LAB_00498499:
00498499  39 BB D9 00 00 00         CMP dword ptr [EBX + 0xd9],EDI
0049849F  75 2F                     JNZ 0x004984d0
004984A1  8B 8B E6 01 00 00         MOV ECX,dword ptr [EBX + 0x1e6]
004984A7  B8 15 00 00 00            MOV EAX,0x15
004984AC  3B C8                     CMP ECX,EAX
004984AE  74 13                     JZ 0x004984c3
004984B0  56                        PUSH ESI
004984B1  8B CB                     MOV ECX,EBX
004984B3  89 83 E6 01 00 00         MOV dword ptr [EBX + 0x1e6],EAX
004984B9  E8 68 CE F6 FF            CALL 0x00405326
004984BE  E9 CA FC FF FF            JMP 0x0049818d
LAB_004984c3:
004984C3  57                        PUSH EDI
004984C4  8B CB                     MOV ECX,EBX
004984C6  E8 5B CE F6 FF            CALL 0x00405326
004984CB  E9 BD FC FF FF            JMP 0x0049818d
LAB_004984d0:
004984D0  8B 83 E6 01 00 00         MOV EAX,dword ptr [EBX + 0x1e6]
004984D6  48                        DEC EAX
004984D7  83 F8 14                  CMP EAX,0x14
004984DA  0F 87 76 04 00 00         JA 0x00498956
switchD_004984e0::switchD:
004984E0  FF 24 85 B4 89 49 00      JMP dword ptr [EAX*0x4 + 0x4989b4]
switchD_004984e0::caseD_1:
004984E7  6A 02                     PUSH 0x2
LAB_004984e9:
004984E9  8B CB                     MOV ECX,EBX
004984EB  E8 5E AB F6 FF            CALL 0x0040304e
LAB_004984f0:
004984F0  85 C0                     TEST EAX,EAX
STGroupBoatC::GetMessage::cf_common_exit_004984F2:
004984F2  0F 85 5E 04 00 00         JNZ 0x00498956
004984F8  C7 83 E6 01 00 00 03 00 00 00  MOV dword ptr [EBX + 0x1e6],0x3
LAB_00498502:
00498502  56                        PUSH ESI
LAB_00498503:
00498503  8B CB                     MOV ECX,EBX
00498505  E8 34 D4 F6 FF            CALL 0x0040593e
0049850A  68 95 5D 00 00            PUSH 0x5d95
0049850F  8B CB                     MOV ECX,EBX
00498511  E8 42 BA F6 FF            CALL 0x00403f58
00498516  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00498519  33 C0                     XOR EAX,EAX
0049851B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00498521  5F                        POP EDI
00498522  5E                        POP ESI
00498523  5B                        POP EBX
00498524  8B E5                     MOV ESP,EBP
00498526  5D                        POP EBP
00498527  C2 04 00                  RET 0x4
switchD_004984e0::caseD_3:
0049852A  6A 02                     PUSH 0x2
0049852C  8B CB                     MOV ECX,EBX
0049852E  E8 0B D4 F6 FF            CALL 0x0040593e
00498533  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00498536  33 C0                     XOR EAX,EAX
00498538  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049853E  5F                        POP EDI
0049853F  5E                        POP ESI
00498540  5B                        POP EBX
00498541  8B E5                     MOV ESP,EBP
00498543  5D                        POP EBP
00498544  C2 04 00                  RET 0x4
switchD_004984e0::caseD_2:
00498547  6A 02                     PUSH 0x2
00498549  8B CB                     MOV ECX,EBX
0049854B  E8 6E 8B F6 FF            CALL 0x004010be
00498550  EB 9E                     JMP 0x004984f0
switchD_004984e0::caseD_7:
00498552  6A 02                     PUSH 0x2
00498554  8B CB                     MOV ECX,EBX
00498556  E8 94 96 F6 FF            CALL 0x00401bef
0049855B  EB 93                     JMP 0x004984f0
switchD_004984e0::caseD_6:
0049855D  6A 02                     PUSH 0x2
0049855F  8B CB                     MOV ECX,EBX
00498561  E8 0B CE F6 FF            CALL 0x00405371
00498566  EB 88                     JMP 0x004984f0
switchD_004984e0::caseD_8:
00498568  6A 02                     PUSH 0x2
0049856A  8B CB                     MOV ECX,EBX
0049856C  E8 02 D1 F6 FF            CALL 0x00405673
00498571  E9 7A FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_9:
00498576  6A 02                     PUSH 0x2
00498578  8B CB                     MOV ECX,EBX
0049857A  E8 02 AA F6 FF            CALL 0x00402f81
0049857F  85 C0                     TEST EAX,EAX
00498581  0F 85 CF 03 00 00         JNZ 0x00498956
00498587  C7 83 E6 01 00 00 03 00 00 00  MOV dword ptr [EBX + 0x1e6],0x3
00498591  6A 02                     PUSH 0x2
00498593  E9 6B FF FF FF            JMP 0x00498503
switchD_004984e0::caseD_a:
00498598  6A 02                     PUSH 0x2
0049859A  8B CB                     MOV ECX,EBX
0049859C  E8 1B CE F6 FF            CALL 0x004053bc
004985A1  E9 4A FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_4:
004985A6  6A 02                     PUSH 0x2
004985A8  8B CB                     MOV ECX,EBX
004985AA  E8 AA C2 F6 FF            CALL 0x00404859
004985AF  E9 3C FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_5:
004985B4  6A 02                     PUSH 0x2
004985B6  8B CB                     MOV ECX,EBX
004985B8  E8 E6 D7 F6 FF            CALL 0x00405da3
004985BD  E9 2E FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_b:
004985C2  6A 02                     PUSH 0x2
004985C4  8B CB                     MOV ECX,EBX
004985C6  E8 8A A3 F6 FF            CALL 0x00402955
004985CB  E9 20 FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_c:
004985D0  6A 02                     PUSH 0x2
004985D2  8B CB                     MOV ECX,EBX
004985D4  E8 4C AB F6 FF            CALL 0x00403125
004985D9  E9 12 FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_d:
004985DE  6A 02                     PUSH 0x2
004985E0  8B CB                     MOV ECX,EBX
004985E2  E8 9E A5 F6 FF            CALL 0x00402b85
004985E7  E9 04 FF FF FF            JMP 0x004984f0
switchD_004984e0::caseD_e:
004985EC  6A 02                     PUSH 0x2
004985EE  8B CB                     MOV ECX,EBX
004985F0  E8 E9 B0 F6 FF            CALL 0x004036de
004985F5  E9 F6 FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_f:
004985FA  6A 02                     PUSH 0x2
004985FC  8B CB                     MOV ECX,EBX
004985FE  E8 C2 B0 F6 FF            CALL 0x004036c5
00498603  E9 E8 FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_11:
00498608  6A 02                     PUSH 0x2
0049860A  8B CB                     MOV ECX,EBX
0049860C  E8 9E CB F6 FF            CALL 0x004051af
00498611  E9 DA FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_10:
00498616  6A 02                     PUSH 0x2
00498618  8B CB                     MOV ECX,EBX
0049861A  E8 83 A1 F6 FF            CALL 0x004027a2
0049861F  E9 CC FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_12:
00498624  6A 02                     PUSH 0x2
00498626  8B CB                     MOV ECX,EBX
00498628  E8 3E CE F6 FF            CALL 0x0040546b
0049862D  E9 BE FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_13:
00498632  6A 02                     PUSH 0x2
00498634  8B CB                     MOV ECX,EBX
00498636  E8 85 92 F6 FF            CALL 0x004018c0
0049863B  E9 B0 FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_14:
00498640  6A 02                     PUSH 0x2
00498642  8B CB                     MOV ECX,EBX
00498644  E8 B7 93 F6 FF            CALL 0x00401a00
00498649  E9 A2 FE FF FF            JMP 0x004984f0
switchD_004984e0::caseD_15:
0049864E  6A 02                     PUSH 0x2
00498650  8B CB                     MOV ECX,EBX
00498652  E8 CF CC F6 FF            CALL 0x00405326
00498657  E9 94 FE FF FF            JMP 0x004984f0
LAB_0049865c:
0049865C  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00498662  3B C7                     CMP EAX,EDI
00498664  74 0C                     JZ 0x00498672
00498666  50                        PUSH EAX
00498667  E8 A4 5A 21 00            CALL 0x006ae110
0049866C  89 BB EF 00 00 00         MOV dword ptr [EBX + 0xef],EDI
LAB_00498672:
00498672  8B 83 03 01 00 00         MOV EAX,dword ptr [EBX + 0x103]
00498678  3B C7                     CMP EAX,EDI
0049867A  74 0C                     JZ 0x00498688
0049867C  50                        PUSH EAX
0049867D  E8 8E 5A 21 00            CALL 0x006ae110
00498682  89 BB 03 01 00 00         MOV dword ptr [EBX + 0x103],EDI
LAB_00498688:
00498688  8B 83 0F 01 00 00         MOV EAX,dword ptr [EBX + 0x10f]
0049868E  3B C7                     CMP EAX,EDI
00498690  74 0C                     JZ 0x0049869e
00498692  50                        PUSH EAX
00498693  E8 78 5A 21 00            CALL 0x006ae110
00498698  89 BB 0F 01 00 00         MOV dword ptr [EBX + 0x10f],EDI
LAB_0049869e:
0049869E  8B 83 27 01 00 00         MOV EAX,dword ptr [EBX + 0x127]
004986A4  3B C7                     CMP EAX,EDI
004986A6  74 0C                     JZ 0x004986b4
004986A8  50                        PUSH EAX
004986A9  E8 62 5A 21 00            CALL 0x006ae110
004986AE  89 BB 27 01 00 00         MOV dword ptr [EBX + 0x127],EDI
LAB_004986b4:
004986B4  8B 83 60 01 00 00         MOV EAX,dword ptr [EBX + 0x160]
004986BA  3B C7                     CMP EAX,EDI
004986BC  74 0C                     JZ 0x004986ca
004986BE  50                        PUSH EAX
004986BF  E8 4C 5A 21 00            CALL 0x006ae110
004986C4  89 BB 60 01 00 00         MOV dword ptr [EBX + 0x160],EDI
LAB_004986ca:
004986CA  8B 83 68 01 00 00         MOV EAX,dword ptr [EBX + 0x168]
004986D0  3B C7                     CMP EAX,EDI
004986D2  74 0C                     JZ 0x004986e0
004986D4  50                        PUSH EAX
004986D5  E8 36 5A 21 00            CALL 0x006ae110
004986DA  89 BB 68 01 00 00         MOV dword ptr [EBX + 0x168],EDI
LAB_004986e0:
004986E0  8B 83 CA 01 00 00         MOV EAX,dword ptr [EBX + 0x1ca]
004986E6  3B C7                     CMP EAX,EDI
004986E8  74 0C                     JZ 0x004986f6
004986EA  50                        PUSH EAX
004986EB  E8 20 5A 21 00            CALL 0x006ae110
004986F0  89 BB CA 01 00 00         MOV dword ptr [EBX + 0x1ca],EDI
LAB_004986f6:
004986F6  8B 83 CE 01 00 00         MOV EAX,dword ptr [EBX + 0x1ce]
004986FC  3B C7                     CMP EAX,EDI
004986FE  74 0C                     JZ 0x0049870c
00498700  50                        PUSH EAX
00498701  E8 0A 5A 21 00            CALL 0x006ae110
00498706  89 BB CE 01 00 00         MOV dword ptr [EBX + 0x1ce],EDI
LAB_0049870c:
0049870C  8B 83 D2 01 00 00         MOV EAX,dword ptr [EBX + 0x1d2]
00498712  3B C7                     CMP EAX,EDI
00498714  74 0C                     JZ 0x00498722
00498716  50                        PUSH EAX
00498717  E8 F4 59 21 00            CALL 0x006ae110
0049871C  89 BB D2 01 00 00         MOV dword ptr [EBX + 0x1d2],EDI
LAB_00498722:
00498722  8B 83 D6 01 00 00         MOV EAX,dword ptr [EBX + 0x1d6]
00498728  3B C7                     CMP EAX,EDI
0049872A  74 0C                     JZ 0x00498738
0049872C  50                        PUSH EAX
0049872D  E8 DE 59 21 00            CALL 0x006ae110
00498732  89 BB D6 01 00 00         MOV dword ptr [EBX + 0x1d6],EDI
LAB_00498738:
00498738  8B 83 DA 01 00 00         MOV EAX,dword ptr [EBX + 0x1da]
0049873E  3B C7                     CMP EAX,EDI
00498740  74 0C                     JZ 0x0049874e
00498742  50                        PUSH EAX
00498743  E8 C8 59 21 00            CALL 0x006ae110
00498748  89 BB DA 01 00 00         MOV dword ptr [EBX + 0x1da],EDI
LAB_0049874e:
0049874E  8B 83 DE 01 00 00         MOV EAX,dword ptr [EBX + 0x1de]
00498754  3B C7                     CMP EAX,EDI
00498756  74 0C                     JZ 0x00498764
00498758  50                        PUSH EAX
00498759  E8 B2 59 21 00            CALL 0x006ae110
0049875E  89 BB DE 01 00 00         MOV dword ptr [EBX + 0x1de],EDI
LAB_00498764:
00498764  8B 43 29                  MOV EAX,dword ptr [EBX + 0x29]
00498767  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0049876A  85 FF                     TEST EDI,EDI
0049876C  76 37                     JBE 0x004987a5
0049876E  33 F6                     XOR ESI,ESI
00498770  85 FF                     TEST EDI,EDI
00498772  76 31                     JBE 0x004987a5
LAB_00498774:
00498774  8D 4D F0                  LEA ECX,[EBP + -0x10]
00498777  8B D6                     MOV EDX,ESI
00498779  51                        PUSH ECX
0049877A  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049877D  E8 EE 44 21 00            CALL 0x006acc70
00498782  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00498785  66 3D FF FF               CMP AX,0xffff
00498789  74 0D                     JZ 0x00498798
0049878B  25 FF FF 00 00            AND EAX,0xffff
00498790  8B CB                     MOV ECX,EBX
00498792  50                        PUSH EAX
00498793  E8 5A C8 F6 FF            CALL 0x00404ff2
LAB_00498798:
00498798  46                        INC ESI
00498799  8B D6                     MOV EDX,ESI
0049879B  81 E2 FF FF 00 00         AND EDX,0xffff
004987A1  3B D7                     CMP EDX,EDI
004987A3  72 CF                     JC 0x00498774
LAB_004987a5:
004987A5  8B 8B 1E 02 00 00         MOV ECX,dword ptr [EBX + 0x21e]
004987AB  8D 83 1E 02 00 00         LEA EAX,[EBX + 0x21e]
004987B1  85 C9                     TEST ECX,ECX
004987B3  74 06                     JZ 0x004987bb
004987B5  50                        PUSH EAX
004987B6  E8 A5 28 21 00            CALL 0x006ab060
LAB_004987bb:
004987BB  8B 83 0E 02 00 00         MOV EAX,dword ptr [EBX + 0x20e]
004987C1  85 C0                     TEST EAX,EAX
004987C3  74 10                     JZ 0x004987d5
004987C5  50                        PUSH EAX
004987C6  E8 45 59 21 00            CALL 0x006ae110
004987CB  C7 83 0E 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x20e],0x0
LAB_004987d5:
004987D5  8B 83 26 02 00 00         MOV EAX,dword ptr [EBX + 0x226]
004987DB  85 C0                     TEST EAX,EAX
004987DD  74 10                     JZ 0x004987ef
004987DF  50                        PUSH EAX
004987E0  E8 2B 59 21 00            CALL 0x006ae110
004987E5  C7 83 26 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x226],0x0
LAB_004987ef:
004987EF  8B 83 2A 02 00 00         MOV EAX,dword ptr [EBX + 0x22a]
004987F5  85 C0                     TEST EAX,EAX
004987F7  74 10                     JZ 0x00498809
004987F9  50                        PUSH EAX
004987FA  E8 11 59 21 00            CALL 0x006ae110
004987FF  C7 83 2A 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x22a],0x0
LAB_00498809:
00498809  8B 83 2E 02 00 00         MOV EAX,dword ptr [EBX + 0x22e]
0049880F  85 C0                     TEST EAX,EAX
00498811  74 10                     JZ 0x00498823
00498813  50                        PUSH EAX
00498814  E8 F7 58 21 00            CALL 0x006ae110
00498819  C7 83 2E 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x22e],0x0
LAB_00498823:
00498823  8B 83 4E 02 00 00         MOV EAX,dword ptr [EBX + 0x24e]
00498829  85 C0                     TEST EAX,EAX
0049882B  74 10                     JZ 0x0049883d
0049882D  50                        PUSH EAX
0049882E  E8 DD 58 21 00            CALL 0x006ae110
00498833  C7 83 4E 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x24e],0x0
LAB_0049883d:
0049883D  8B 83 66 02 00 00         MOV EAX,dword ptr [EBX + 0x266]
00498843  85 C0                     TEST EAX,EAX
00498845  74 10                     JZ 0x00498857
00498847  50                        PUSH EAX
00498848  E8 C3 58 21 00            CALL 0x006ae110
0049884D  C7 83 66 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x266],0x0
LAB_00498857:
00498857  8B 83 9F 02 00 00         MOV EAX,dword ptr [EBX + 0x29f]
0049885D  85 C0                     TEST EAX,EAX
0049885F  74 10                     JZ 0x00498871
00498861  50                        PUSH EAX
00498862  E8 A9 58 21 00            CALL 0x006ae110
00498867  C7 83 9F 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x29f],0x0
LAB_00498871:
00498871  8B 03                     MOV EAX,dword ptr [EBX]
00498873  6A 00                     PUSH 0x0
00498875  6A 00                     PUSH 0x0
00498877  6A 00                     PUSH 0x0
00498879  53                        PUSH EBX
0049887A  FF 50 18                  CALL dword ptr [EAX + 0x18]
0049887D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00498880  51                        PUSH ECX
00498881  8B CB                     MOV ECX,EBX
00498883  E8 62 AC F6 FF            CALL 0x004034ea
00498888  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0049888B  33 C0                     XOR EAX,EAX
0049888D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00498893  5F                        POP EDI
00498894  5E                        POP ESI
00498895  5B                        POP EBX
00498896  8B E5                     MOV ESP,EBP
00498898  5D                        POP EBP
00498899  C2 04 00                  RET 0x4
LAB_0049889c:
0049889C  3D 0F 01 00 00            CMP EAX,0x10f
004988A1  0F 85 AF 00 00 00         JNZ 0x00498956
004988A7  8D 55 F8                  LEA EDX,[EBP + -0x8]
004988AA  8B CB                     MOV ECX,EBX
004988AC  52                        PUSH EDX
004988AD  E8 87 CB F6 FF            CALL 0x00405439
004988B2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004988B5  C7 00 3C 00 00 00         MOV dword ptr [EAX],0x3c
004988BB  8D 45 F4                  LEA EAX,[EBP + -0xc]
004988BE  8B CB                     MOV ECX,EBX
004988C0  50                        PUSH EAX
004988C1  E8 26 96 F6 FF            CALL 0x00401eec
004988C6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004988C9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004988CC  03 D1                     ADD EDX,ECX
004988CE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004988D1  52                        PUSH EDX
004988D2  E8 99 23 21 00            CALL 0x006aac70
004988D7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004988DA  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004988DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004988E0  8B F8                     MOV EDI,EAX
004988E2  8B C1                     MOV EAX,ECX
004988E4  C1 E9 02                  SHR ECX,0x2
004988E7  F3 A5                     MOVSD.REP ES:EDI,ESI
004988E9  8B C8                     MOV ECX,EAX
004988EB  83 E1 03                  AND ECX,0x3
004988EE  F3 A4                     MOVSB.REP ES:EDI,ESI
004988F0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004988F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004988F6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004988F9  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004988FC  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004988FF  8B D1                     MOV EDX,ECX
00498901  C1 E9 02                  SHR ECX,0x2
00498904  F3 A5                     MOVSD.REP ES:EDI,ESI
00498906  8B CA                     MOV ECX,EDX
00498908  83 E1 03                  AND ECX,0x3
0049890B  F3 A4                     MOVSB.REP ES:EDI,ESI
0049890D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00498910  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00498913  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
00498916  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00498919  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049891C  89 50 3C                  MOV dword ptr [EAX + 0x3c],EDX
0049891F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00498922  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00498925  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00498928  03 D1                     ADD EDX,ECX
0049892A  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0049892D  52                        PUSH EDX
0049892E  50                        PUSH EAX
0049892F  51                        PUSH ECX
00498930  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00498936  E8 BE 9C F6 FF            CALL 0x004025f9
0049893B  8D 55 E8                  LEA EDX,[EBP + -0x18]
0049893E  52                        PUSH EDX
0049893F  E8 1C 27 21 00            CALL 0x006ab060
00498944  8D 45 EC                  LEA EAX,[EBP + -0x14]
00498947  50                        PUSH EAX
00498948  E8 13 27 21 00            CALL 0x006ab060
0049894D  8D 4D FC                  LEA ECX,[EBP + -0x4]
00498950  51                        PUSH ECX
00498951  E8 0A 27 21 00            CALL 0x006ab060
switchD_004984e0::default:
00498956  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
00498959  33 C0                     XOR EAX,EAX
0049895B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00498961  5F                        POP EDI
00498962  5E                        POP ESI
00498963  5B                        POP EBX
00498964  8B E5                     MOV ESP,EBP
00498966  5D                        POP EBP
00498967  C2 04 00                  RET 0x4
LAB_0049896a:
0049896A  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0049896D  68 7C BE 7A 00            PUSH 0x7abe7c
00498972  68 CC 4C 7A 00            PUSH 0x7a4ccc
00498977  56                        PUSH ESI
00498978  57                        PUSH EDI
00498979  68 B4 03 00 00            PUSH 0x3b4
0049897E  68 3C BE 7A 00            PUSH 0x7abe3c
00498983  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00498988  E8 43 4B 21 00            CALL 0x006ad4d0
0049898D  83 C4 18                  ADD ESP,0x18
00498990  85 C0                     TEST EAX,EAX
00498992  74 01                     JZ 0x00498995
00498994  CC                        INT3
LAB_00498995:
00498995  68 B5 03 00 00            PUSH 0x3b5
0049899A  68 3C BE 7A 00            PUSH 0x7abe3c
0049899F  57                        PUSH EDI
004989A0  56                        PUSH ESI
004989A1  E8 9A D4 20 00            CALL 0x006a5e40
LAB_004989a6:
004989A6  5F                        POP EDI
004989A7  5E                        POP ESI
004989A8  B8 FF FF 00 00            MOV EAX,0xffff
004989AD  5B                        POP EBX
004989AE  8B E5                     MOV ESP,EBP
004989B0  5D                        POP EBP
004989B1  C2 04 00                  RET 0x4
