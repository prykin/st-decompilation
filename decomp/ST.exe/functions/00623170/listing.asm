FUN_00623170:
00623170  55                        PUSH EBP
00623171  8B EC                     MOV EBP,ESP
00623173  83 EC 4C                  SUB ESP,0x4c
00623176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0062317B  56                        PUSH ESI
0062317C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062317F  57                        PUSH EDI
00623180  8D 55 B8                  LEA EDX,[EBP + -0x48]
00623183  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00623186  6A 00                     PUSH 0x0
00623188  52                        PUSH EDX
00623189  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00623190  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00623193  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00623199  E8 52 A6 10 00            CALL 0x0072d7f0
0062319E  8B F0                     MOV ESI,EAX
006231A0  83 C4 08                  ADD ESP,0x8
006231A3  85 F6                     TEST ESI,ESI
006231A5  0F 85 17 03 00 00         JNZ 0x006234c2
006231AB  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006231AE  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
006231B4  8B CE                     MOV ECX,ESI
006231B6  E8 11 21 DE FF            CALL 0x004052cc
006231BB  89 87 BA 02 00 00         MOV dword ptr [EDI + 0x2ba],EAX
006231C1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006231C4  85 C0                     TEST EAX,EAX
006231C6  6A 1D                     PUSH 0x1d
006231C8  0F 85 20 01 00 00         JNZ 0x006232ee
006231CE  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
006231D4  33 C0                     XOR EAX,EAX
006231D6  8A 87 AD 02 00 00         MOV AL,byte ptr [EDI + 0x2ad]
006231DC  8B 0C 85 C4 02 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d02c4]
006231E3  51                        PUSH ECX
006231E4  52                        PUSH EDX
006231E5  6A 0E                     PUSH 0xe
006231E7  8B CE                     MOV ECX,ESI
006231E9  E8 95 0F DE FF            CALL 0x00404183
006231EE  85 C0                     TEST EAX,EAX
006231F0  74 0B                     JZ 0x006231fd
006231F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006231F5  5F                        POP EDI
006231F6  5E                        POP ESI
006231F7  8B E5                     MOV ESP,EBP
006231F9  5D                        POP EBP
006231FA  C2 04 00                  RET 0x4
LAB_006231fd:
006231FD  6A 45                     PUSH 0x45
006231FF  6A 5A                     PUSH 0x5a
00623201  8B CE                     MOV ECX,ESI
00623203  E8 BC F1 DD FF            CALL 0x004023c4
00623208  6A 0E                     PUSH 0xe
0062320A  8B CE                     MOV ECX,ESI
0062320C  E8 95 28 DE FF            CALL 0x00405aa6
00623211  8B 87 CE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ce]
00623217  8B CE                     MOV ECX,ESI
00623219  50                        PUSH EAX
0062321A  6A 0E                     PUSH 0xe
0062321C  E8 43 DE DD FF            CALL 0x00401064
00623221  6A 0E                     PUSH 0xe
00623223  8B CE                     MOV ECX,ESI
00623225  E8 92 FE DD FF            CALL 0x004030bc
0062322A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00623230  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00623236  8B CE                     MOV ECX,ESI
00623238  52                        PUSH EDX
00623239  6A 0E                     PUSH 0xe
0062323B  E8 00 20 DE FF            CALL 0x00405240
00623240  6A 0E                     PUSH 0xe
00623242  8B CE                     MOV ECX,ESI
00623244  E8 63 F0 DD FF            CALL 0x004022ac
00623249  89 87 D2 02 00 00         MOV dword ptr [EDI + 0x2d2],EAX
0062324F  8A 87 52 03 00 00         MOV AL,byte ptr [EDI + 0x352]
00623255  84 C0                     TEST AL,AL
00623257  74 71                     JZ 0x006232ca
00623259  8B 8F 62 02 00 00         MOV ECX,dword ptr [EDI + 0x262]
0062325F  33 C0                     XOR EAX,EAX
00623261  8A 87 AD 02 00 00         MOV AL,byte ptr [EDI + 0x2ad]
00623267  6A 1D                     PUSH 0x1d
00623269  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0062326C  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00623272  8B 04 95 D4 02 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d02d4]
00623279  50                        PUSH EAX
0062327A  51                        PUSH ECX
0062327B  6A 0C                     PUSH 0xc
0062327D  8B CE                     MOV ECX,ESI
0062327F  E8 FF 0E DE FF            CALL 0x00404183
00623284  85 C0                     TEST EAX,EAX
00623286  74 0B                     JZ 0x00623293
00623288  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062328B  5F                        POP EDI
0062328C  5E                        POP ESI
0062328D  8B E5                     MOV ESP,EBP
0062328F  5D                        POP EBP
00623290  C2 04 00                  RET 0x4
LAB_00623293:
00623293  8B 97 CE 02 00 00         MOV EDX,dword ptr [EDI + 0x2ce]
00623299  8B CE                     MOV ECX,ESI
0062329B  52                        PUSH EDX
0062329C  6A 0C                     PUSH 0xc
0062329E  E8 C1 DD DD FF            CALL 0x00401064
006232A3  6A 0C                     PUSH 0xc
006232A5  8B CE                     MOV ECX,ESI
006232A7  E8 FA 27 DE FF            CALL 0x00405aa6
006232AC  6A 0C                     PUSH 0xc
006232AE  8B CE                     MOV ECX,ESI
006232B0  E8 07 FE DD FF            CALL 0x004030bc
006232B5  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006232BA  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
006232C0  51                        PUSH ECX
006232C1  6A 0C                     PUSH 0xc
006232C3  8B CE                     MOV ECX,ESI
006232C5  E8 76 1F DE FF            CALL 0x00405240
LAB_006232ca:
006232CA  A0 26 73 80 00            MOV AL,[0x00807326]
006232CF  84 C0                     TEST AL,AL
006232D1  0F 84 7F 01 00 00         JZ 0x00623456
006232D7  33 D2                     XOR EDX,EDX
006232D9  8B CE                     MOV ECX,ESI
006232DB  8A 97 D6 02 00 00         MOV DL,byte ptr [EDI + 0x2d6]
006232E1  52                        PUSH EDX
006232E2  6A 0E                     PUSH 0xe
006232E4  E8 15 20 DE FF            CALL 0x004052fe
006232E9  E9 68 01 00 00            JMP 0x00623456
LAB_006232ee:
006232EE  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
006232F4  33 C0                     XOR EAX,EAX
006232F6  8A 87 AD 02 00 00         MOV AL,byte ptr [EDI + 0x2ad]
006232FC  8B 0C 85 54 03 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d0354]
00623303  51                        PUSH ECX
00623304  52                        PUSH EDX
00623305  6A 0E                     PUSH 0xe
00623307  8B CE                     MOV ECX,ESI
00623309  E8 75 0E DE FF            CALL 0x00404183
0062330E  85 C0                     TEST EAX,EAX
00623310  74 0B                     JZ 0x0062331d
00623312  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623315  5F                        POP EDI
00623316  5E                        POP ESI
00623317  8B E5                     MOV ESP,EBP
00623319  5D                        POP EBP
0062331A  C2 04 00                  RET 0x4
LAB_0062331d:
0062331D  6A 0E                     PUSH 0xe
0062331F  8B CE                     MOV ECX,ESI
00623321  E8 80 27 DE FF            CALL 0x00405aa6
00623326  8B 87 CE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ce]
0062332C  8B CE                     MOV ECX,ESI
0062332E  50                        PUSH EAX
0062332F  6A 0E                     PUSH 0xe
00623331  E8 2E DD DD FF            CALL 0x00401064
00623336  6A 0E                     PUSH 0xe
00623338  8B CE                     MOV ECX,ESI
0062333A  E8 7D FD DD FF            CALL 0x004030bc
0062333F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00623345  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0062334B  8B CE                     MOV ECX,ESI
0062334D  52                        PUSH EDX
0062334E  6A 0E                     PUSH 0xe
00623350  E8 EB 1E DE FF            CALL 0x00405240
00623355  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0062335B  33 C0                     XOR EAX,EAX
0062335D  8A 87 AD 02 00 00         MOV AL,byte ptr [EDI + 0x2ad]
00623363  6A 1D                     PUSH 0x1d
00623365  8B 0C 85 64 03 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d0364]
0062336C  51                        PUSH ECX
0062336D  52                        PUSH EDX
0062336E  6A 0A                     PUSH 0xa
00623370  8B CE                     MOV ECX,ESI
00623372  E8 0C 0E DE FF            CALL 0x00404183
00623377  85 C0                     TEST EAX,EAX
00623379  74 0B                     JZ 0x00623386
0062337B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062337E  5F                        POP EDI
0062337F  5E                        POP ESI
00623380  8B E5                     MOV ESP,EBP
00623382  5D                        POP EBP
00623383  C2 04 00                  RET 0x4
LAB_00623386:
00623386  6A 0A                     PUSH 0xa
00623388  8B CE                     MOV ECX,ESI
0062338A  E8 17 27 DE FF            CALL 0x00405aa6
0062338F  8B 87 E1 02 00 00         MOV EAX,dword ptr [EDI + 0x2e1]
00623395  8B CE                     MOV ECX,ESI
00623397  50                        PUSH EAX
00623398  6A 0A                     PUSH 0xa
0062339A  E8 C5 DC DD FF            CALL 0x00401064
0062339F  6A 0A                     PUSH 0xa
006233A1  8B CE                     MOV ECX,ESI
006233A3  E8 14 FD DD FF            CALL 0x004030bc
006233A8  8B 0D B8 32 80 00         MOV ECX,dword ptr [0x008032b8]
006233AE  6A 10                     PUSH 0x10
006233B0  51                        PUSH ECX
006233B1  8B CE                     MOV ECX,ESI
006233B3  E8 36 11 DE FF            CALL 0x004044ee
006233B8  6A 0A                     PUSH 0xa
006233BA  8B CE                     MOV ECX,ESI
006233BC  E8 72 FE DD FF            CALL 0x00403233
006233C1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006233C7  8B CE                     MOV ECX,ESI
006233C9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006233CF  50                        PUSH EAX
006233D0  6A 0A                     PUSH 0xa
006233D2  E8 69 1E DE FF            CALL 0x00405240
006233D7  33 C9                     XOR ECX,ECX
006233D9  C6 87 E0 02 00 00 01      MOV byte ptr [EDI + 0x2e0],0x1
006233E0  8A 8F AD 02 00 00         MOV CL,byte ptr [EDI + 0x2ad]
006233E6  A1 64 67 80 00            MOV EAX,[0x00806764]
006233EB  6A 1D                     PUSH 0x1d
006233ED  8B 14 8D 74 03 7D 00      MOV EDX,dword ptr [ECX*0x4 + 0x7d0374]
006233F4  8B CE                     MOV ECX,ESI
006233F6  52                        PUSH EDX
006233F7  50                        PUSH EAX
006233F8  6A 09                     PUSH 0x9
006233FA  E8 84 0D DE FF            CALL 0x00404183
006233FF  85 C0                     TEST EAX,EAX
00623401  74 0B                     JZ 0x0062340e
00623403  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623406  5F                        POP EDI
00623407  5E                        POP ESI
00623408  8B E5                     MOV ESP,EBP
0062340A  5D                        POP EBP
0062340B  C2 04 00                  RET 0x4
LAB_0062340e:
0062340E  6A 09                     PUSH 0x9
00623410  8B CE                     MOV ECX,ESI
00623412  E8 8F 26 DE FF            CALL 0x00405aa6
00623417  8B 8F DB 02 00 00         MOV ECX,dword ptr [EDI + 0x2db]
0062341D  51                        PUSH ECX
0062341E  6A 09                     PUSH 0x9
00623420  8B CE                     MOV ECX,ESI
00623422  E8 3D DC DD FF            CALL 0x00401064
00623427  6A 09                     PUSH 0x9
00623429  8B CE                     MOV ECX,ESI
0062342B  E8 8C FC DD FF            CALL 0x004030bc
00623430  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00623436  8B CE                     MOV ECX,ESI
00623438  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0062343E  50                        PUSH EAX
0062343F  6A 09                     PUSH 0x9
00623441  E8 FA 1D DE FF            CALL 0x00405240
00623446  6A 09                     PUSH 0x9
00623448  8B CE                     MOV ECX,ESI
0062344A  E8 12 F3 DD FF            CALL 0x00402761
0062344F  C6 87 DF 02 00 00 01      MOV byte ptr [EDI + 0x2df],0x1
LAB_00623456:
00623456  DB 87 CA 02 00 00         FILD dword ptr [EDI + 0x2ca]
0062345C  51                        PUSH ECX
0062345D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623463  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623469  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0062346F  D9 1C 24                  FSTP float ptr [ESP]
00623472  DB 87 C6 02 00 00         FILD dword ptr [EDI + 0x2c6]
00623478  51                        PUSH ECX
00623479  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062347F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623485  D9 1C 24                  FSTP float ptr [ESP]
00623488  DB 87 C2 02 00 00         FILD dword ptr [EDI + 0x2c2]
0062348E  51                        PUSH ECX
0062348F  8B CE                     MOV ECX,ESI
00623491  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623497  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062349D  D9 1C 24                  FSTP float ptr [ESP]
006234A0  E8 34 11 DE FF            CALL 0x004045d9
006234A5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006234A8  C6 87 E9 02 00 00 01      MOV byte ptr [EDI + 0x2e9],0x1
006234AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006234B5  B8 01 00 00 00            MOV EAX,0x1
006234BA  5F                        POP EDI
006234BB  5E                        POP ESI
006234BC  8B E5                     MOV ESP,EBP
006234BE  5D                        POP EBP
006234BF  C2 04 00                  RET 0x4
LAB_006234c2:
006234C2  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006234C5  68 F4 06 7D 00            PUSH 0x7d06f4
006234CA  68 CC 4C 7A 00            PUSH 0x7a4ccc
006234CF  56                        PUSH ESI
006234D0  6A 00                     PUSH 0x0
006234D2  68 DF 02 00 00            PUSH 0x2df
006234D7  68 B0 06 7D 00            PUSH 0x7d06b0
006234DC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006234E2  E8 E9 9F 08 00            CALL 0x006ad4d0
006234E7  83 C4 18                  ADD ESP,0x18
006234EA  85 C0                     TEST EAX,EAX
006234EC  74 01                     JZ 0x006234ef
006234EE  CC                        INT3
LAB_006234ef:
006234EF  68 E1 02 00 00            PUSH 0x2e1
006234F4  68 B0 06 7D 00            PUSH 0x7d06b0
006234F9  6A 00                     PUSH 0x0
006234FB  56                        PUSH ESI
006234FC  E8 3F 29 08 00            CALL 0x006a5e40
00623501  5F                        POP EDI
00623502  B8 FF FF 00 00            MOV EAX,0xffff
00623507  5E                        POP ESI
00623508  8B E5                     MOV ESP,EBP
0062350A  5D                        POP EBP
0062350B  C2 04 00                  RET 0x4
