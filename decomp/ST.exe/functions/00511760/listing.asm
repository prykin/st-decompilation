FUN_00511760:
00511760  55                        PUSH EBP
00511761  8B EC                     MOV EBP,ESP
00511763  83 EC 4C                  SUB ESP,0x4c
00511766  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051176B  53                        PUSH EBX
0051176C  56                        PUSH ESI
0051176D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00511770  33 DB                     XOR EBX,EBX
00511772  57                        PUSH EDI
00511773  8D 55 B8                  LEA EDX,[EBP + -0x48]
00511776  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00511779  53                        PUSH EBX
0051177A  52                        PUSH EDX
0051177B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0051177E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511784  E8 67 C0 21 00            CALL 0x0072d7f0
00511789  8B F0                     MOV ESI,EAX
0051178B  83 C4 08                  ADD ESP,0x8
0051178E  3B F3                     CMP ESI,EBX
00511790  0F 85 18 02 00 00         JNZ 0x005119ae
00511796  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00511799  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
0051179F  3B C3                     CMP EAX,EBX
005117A1  74 09                     JZ 0x005117ac
005117A3  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005117A6  50                        PUSH EAX
005117A7  E8 04 3F 1D 00            CALL 0x006e56b0
LAB_005117ac:
005117AC  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
005117B2  8D BE 80 01 00 00         LEA EDI,[ESI + 0x180]
005117B8  C7 45 FC 07 00 00 00      MOV dword ptr [EBP + -0x4],0x7
LAB_005117bf:
005117BF  8B 07                     MOV EAX,dword ptr [EDI]
005117C1  3B C3                     CMP EAX,EBX
005117C3  74 0B                     JZ 0x005117d0
005117C5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005117C8  50                        PUSH EAX
005117C9  E8 E2 3E 1D 00            CALL 0x006e56b0
005117CE  89 1F                     MOV dword ptr [EDI],EBX
LAB_005117d0:
005117D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005117D3  83 C7 04                  ADD EDI,0x4
005117D6  48                        DEC EAX
005117D7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005117DA  75 E3                     JNZ 0x005117bf
005117DC  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
005117E2  3B C3                     CMP EAX,EBX
005117E4  74 09                     JZ 0x005117ef
005117E6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005117E9  50                        PUSH EAX
005117EA  E8 C1 3E 1D 00            CALL 0x006e56b0
LAB_005117ef:
005117EF  8B 86 B3 01 00 00         MOV EAX,dword ptr [ESI + 0x1b3]
005117F5  89 9E 9C 01 00 00         MOV dword ptr [ESI + 0x19c],EBX
005117FB  3B C3                     CMP EAX,EBX
005117FD  74 06                     JZ 0x00511805
005117FF  50                        PUSH EAX
00511800  E8 0B C9 19 00            CALL 0x006ae110
LAB_00511805:
00511805  8B 86 BB 01 00 00         MOV EAX,dword ptr [ESI + 0x1bb]
0051180B  89 9E B3 01 00 00         MOV dword ptr [ESI + 0x1b3],EBX
00511811  3B C3                     CMP EAX,EBX
00511813  74 06                     JZ 0x0051181b
00511815  50                        PUSH EAX
00511816  E8 F5 C8 19 00            CALL 0x006ae110
LAB_0051181b:
0051181B  8B 86 CB 01 00 00         MOV EAX,dword ptr [ESI + 0x1cb]
00511821  89 9E BB 01 00 00         MOV dword ptr [ESI + 0x1bb],EBX
00511827  3B C3                     CMP EAX,EBX
00511829  74 06                     JZ 0x00511831
0051182B  50                        PUSH EAX
0051182C  E8 DF C8 19 00            CALL 0x006ae110
LAB_00511831:
00511831  8B 86 D7 01 00 00         MOV EAX,dword ptr [ESI + 0x1d7]
00511837  89 9E CB 01 00 00         MOV dword ptr [ESI + 0x1cb],EBX
0051183D  3B C3                     CMP EAX,EBX
0051183F  74 06                     JZ 0x00511847
00511841  50                        PUSH EAX
00511842  E8 C9 C8 19 00            CALL 0x006ae110
LAB_00511847:
00511847  8B 86 D3 01 00 00         MOV EAX,dword ptr [ESI + 0x1d3]
0051184D  89 9E D7 01 00 00         MOV dword ptr [ESI + 0x1d7],EBX
00511853  3B C3                     CMP EAX,EBX
00511855  74 06                     JZ 0x0051185d
00511857  50                        PUSH EAX
00511858  E8 13 3D 1A 00            CALL 0x006b5570
LAB_0051185d:
0051185D  89 9E D3 01 00 00         MOV dword ptr [ESI + 0x1d3],EBX
00511863  8D BE F0 01 00 00         LEA EDI,[ESI + 0x1f0]
00511869  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_00511870:
00511870  39 1F                     CMP dword ptr [EDI],EBX
00511872  74 0C                     JZ 0x00511880
00511874  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051187A  57                        PUSH EDI
0051187B  E8 60 08 1E 00            CALL 0x006f20e0
LAB_00511880:
00511880  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00511883  83 C7 04                  ADD EDI,0x4
00511886  48                        DEC EAX
00511887  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051188A  75 E4                     JNZ 0x00511870
0051188C  8B 86 E0 01 00 00         MOV EAX,dword ptr [ESI + 0x1e0]
00511892  89 9E 38 02 00 00         MOV dword ptr [ESI + 0x238],EBX
00511898  3B C3                     CMP EAX,EBX
0051189A  89 9E 48 02 00 00         MOV dword ptr [ESI + 0x248],EBX
005118A0  89 9E 2C 02 00 00         MOV dword ptr [ESI + 0x22c],EBX
005118A6  89 9E 28 02 00 00         MOV dword ptr [ESI + 0x228],EBX
005118AC  89 9E 34 02 00 00         MOV dword ptr [ESI + 0x234],EBX
005118B2  89 9E 30 02 00 00         MOV dword ptr [ESI + 0x230],EBX
005118B8  89 9E 24 02 00 00         MOV dword ptr [ESI + 0x224],EBX
005118BE  89 9E 20 02 00 00         MOV dword ptr [ESI + 0x220],EBX
005118C4  89 9E 44 02 00 00         MOV dword ptr [ESI + 0x244],EBX
005118CA  89 9E 40 02 00 00         MOV dword ptr [ESI + 0x240],EBX
005118D0  89 9E 3C 02 00 00         MOV dword ptr [ESI + 0x23c],EBX
005118D6  74 0F                     JZ 0x005118e7
005118D8  50                        PUSH EAX
005118D9  E8 82 EC 1F 00            CALL 0x00710560
005118DE  83 C4 04                  ADD ESP,0x4
005118E1  89 9E E0 01 00 00         MOV dword ptr [ESI + 0x1e0],EBX
LAB_005118e7:
005118E7  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
005118ED  3B C3                     CMP EAX,EBX
005118EF  74 0F                     JZ 0x00511900
005118F1  50                        PUSH EAX
005118F2  E8 69 EC 1F 00            CALL 0x00710560
005118F7  83 C4 04                  ADD ESP,0x4
005118FA  89 9E E4 01 00 00         MOV dword ptr [ESI + 0x1e4],EBX
LAB_00511900:
00511900  8B 86 E8 01 00 00         MOV EAX,dword ptr [ESI + 0x1e8]
00511906  3B C3                     CMP EAX,EBX
00511908  74 0F                     JZ 0x00511919
0051190A  50                        PUSH EAX
0051190B  E8 50 EC 1F 00            CALL 0x00710560
00511910  83 C4 04                  ADD ESP,0x4
00511913  89 9E E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EBX
LAB_00511919:
00511919  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
0051191F  8D 86 18 02 00 00         LEA EAX,[ESI + 0x218]
00511925  3B CB                     CMP ECX,EBX
00511927  74 06                     JZ 0x0051192f
00511929  50                        PUSH EAX
0051192A  E8 31 97 19 00            CALL 0x006ab060
LAB_0051192f:
0051192F  8B 8E EC 01 00 00         MOV ECX,dword ptr [ESI + 0x1ec]
00511935  8D 86 EC 01 00 00         LEA EAX,[ESI + 0x1ec]
0051193B  3B CB                     CMP ECX,EBX
0051193D  74 06                     JZ 0x00511945
0051193F  50                        PUSH EAX
00511940  E8 1B 97 19 00            CALL 0x006ab060
LAB_00511945:
00511945  8B 8E 4C 02 00 00         MOV ECX,dword ptr [ESI + 0x24c]
0051194B  8D 86 4C 02 00 00         LEA EAX,[ESI + 0x24c]
00511951  3B CB                     CMP ECX,EBX
00511953  74 0C                     JZ 0x00511961
00511955  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051195B  50                        PUSH EAX
0051195C  E8 7F 07 1E 00            CALL 0x006f20e0
LAB_00511961:
00511961  8B 8E DC 01 00 00         MOV ECX,dword ptr [ESI + 0x1dc]
00511967  8D 86 DC 01 00 00         LEA EAX,[ESI + 0x1dc]
0051196D  3B CB                     CMP ECX,EBX
0051196F  74 0C                     JZ 0x0051197d
00511971  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00511977  50                        PUSH EAX
00511978  E8 63 07 1E 00            CALL 0x006f20e0
LAB_0051197d:
0051197D  8B 8E 1C 02 00 00         MOV ECX,dword ptr [ESI + 0x21c]
00511983  8D 86 1C 02 00 00         LEA EAX,[ESI + 0x21c]
00511989  3B CB                     CMP ECX,EBX
0051198B  74 0C                     JZ 0x00511999
0051198D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00511993  50                        PUSH EAX
00511994  E8 47 07 1E 00            CALL 0x006f20e0
LAB_00511999:
00511999  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0051199C  89 1D 90 16 80 00         MOV dword ptr [0x00801690],EBX
005119A2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005119A7  5F                        POP EDI
005119A8  5E                        POP ESI
005119A9  5B                        POP EBX
005119AA  8B E5                     MOV ESP,EBP
005119AC  5D                        POP EBP
005119AD  C3                        RET
LAB_005119ae:
005119AE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005119B1  68 18 39 7C 00            PUSH 0x7c3918
005119B6  68 CC 4C 7A 00            PUSH 0x7a4ccc
005119BB  56                        PUSH ESI
005119BC  53                        PUSH EBX
005119BD  68 CF 00 00 00            PUSH 0xcf
005119C2  68 3C 38 7C 00            PUSH 0x7c383c
005119C7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005119CD  E8 FE BA 19 00            CALL 0x006ad4d0
005119D2  83 C4 18                  ADD ESP,0x18
005119D5  85 C0                     TEST EAX,EAX
005119D7  74 01                     JZ 0x005119da
005119D9  CC                        INT3
LAB_005119da:
005119DA  68 CF 00 00 00            PUSH 0xcf
005119DF  68 3C 38 7C 00            PUSH 0x7c383c
005119E4  53                        PUSH EBX
005119E5  56                        PUSH ESI
005119E6  E8 55 44 19 00            CALL 0x006a5e40
005119EB  5F                        POP EDI
005119EC  5E                        POP ESI
005119ED  5B                        POP EBX
005119EE  8B E5                     MOV ESP,EBP
005119F0  5D                        POP EBP
005119F1  C3                        RET
