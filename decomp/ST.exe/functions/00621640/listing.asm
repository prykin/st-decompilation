FUN_00621640:
00621640  55                        PUSH EBP
00621641  8B EC                     MOV EBP,ESP
00621643  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00621646  53                        PUSH EBX
00621647  56                        PUSH ESI
00621648  83 C8 FF                  OR EAX,0xffffffff
0062164B  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00621651  8B B1 0A 01 00 00         MOV ESI,dword ptr [ECX + 0x10a]
00621657  85 F6                     TEST ESI,ESI
00621659  57                        PUSH EDI
0062165A  74 52                     JZ 0x006216ae
0062165C  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0062165F  33 D2                     XOR EDX,EDX
00621661  85 FF                     TEST EDI,EDI
00621663  7E 49                     JLE 0x006216ae
00621665  3B D7                     CMP EDX,EDI
LAB_00621667:
00621667  73 30                     JNC 0x00621699
00621669  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062166C  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
0062166F  0F AF CA                  IMUL ECX,EDX
00621672  03 CB                     ADD ECX,EBX
00621674  85 C9                     TEST ECX,ECX
00621676  74 21                     JZ 0x00621699
00621678  8B 59 09                  MOV EBX,dword ptr [ECX + 0x9]
0062167B  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
0062167E  75 19                     JNZ 0x00621699
00621680  8B 1D 38 2A 80 00         MOV EBX,dword ptr [0x00802a38]
00621686  8B C2                     MOV EAX,EDX
00621688  8B 9B E4 00 00 00         MOV EBX,dword ptr [EBX + 0xe4]
0062168E  2B 59 01                  SUB EBX,dword ptr [ECX + 0x1]
00621691  81 FB EE 02 00 00         CMP EBX,0x2ee
00621697  77 0C                     JA 0x006216a5
LAB_00621699:
00621699  42                        INC EDX
0062169A  3B D7                     CMP EDX,EDI
0062169C  7C C9                     JL 0x00621667
0062169E  5F                        POP EDI
0062169F  5E                        POP ESI
006216A0  5B                        POP EBX
006216A1  5D                        POP EBP
006216A2  C2 08 00                  RET 0x8
LAB_006216a5:
006216A5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006216A8  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
LAB_006216ae:
006216AE  5F                        POP EDI
006216AF  5E                        POP ESI
006216B0  5B                        POP EBX
006216B1  5D                        POP EBP
006216B2  C2 08 00                  RET 0x8
