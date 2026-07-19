TraksClassTy::GetMessage:
005564C0  55                        PUSH EBP
005564C1  8B EC                     MOV EBP,ESP
005564C3  83 EC 54                  SUB ESP,0x54
005564C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005564CB  56                        PUSH ESI
005564CC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005564CF  57                        PUSH EDI
005564D0  8D 55 B0                  LEA EDX,[EBP + -0x50]
005564D3  8D 4D AC                  LEA ECX,[EBP + -0x54]
005564D6  6A 00                     PUSH 0x0
005564D8  52                        PUSH EDX
005564D9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005564DC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005564E2  E8 09 73 1D 00            CALL 0x0072d7f0
005564E7  8B F0                     MOV ESI,EAX
005564E9  83 C4 08                  ADD ESP,0x8
005564EC  85 F6                     TEST ESI,ESI
005564EE  0F 85 6C 01 00 00         JNZ 0x00556660
005564F4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005564F9  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005564FC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005564FF  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00556505  57                        PUSH EDI
00556506  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
00556509  8B CE                     MOV ECX,ESI
0055650B  E8 C0 FA 18 00            CALL 0x006e5fd0
00556510  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00556513  83 F8 03                  CMP EAX,0x3
00556516  0F 87 EC 00 00 00         JA 0x00556608
0055651C  0F 84 C2 00 00 00         JZ 0x005565e4
00556522  83 E8 00                  SUB EAX,0x0
00556525  0F 84 9F 00 00 00         JZ 0x005565ca
0055652B  83 E8 02                  SUB EAX,0x2
0055652E  0F 85 19 01 00 00         JNZ 0x0055664d
00556534  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0055653A  33 C0                     XOR EAX,EAX
0055653C  85 C9                     TEST ECX,ECX
0055653E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00556541  74 15                     JZ 0x00556558
00556543  8B 15 BC AE 79 00         MOV EDX,dword ptr [0x0079aebc]
00556549  50                        PUSH EAX
0055654A  50                        PUSH EAX
0055654B  52                        PUSH EDX
0055654C  51                        PUSH ECX
0055654D  E8 3E C8 19 00            CALL 0x006f2d90
00556552  83 C4 10                  ADD ESP,0x10
00556555  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00556558:
00556558  85 C0                     TEST EAX,EAX
0055655A  74 11                     JZ 0x0055656d
0055655C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0055655F  85 C9                     TEST ECX,ECX
00556561  74 0A                     JZ 0x0055656d
00556563  50                        PUSH EAX
00556564  8B CE                     MOV ECX,ESI
00556566  E8 33 D0 EA FF            CALL 0x0040359e
0055656B  EB 21                     JMP 0x0055658e
LAB_0055656d:
0055656D  6A 32                     PUSH 0x32
0055656F  6A 3C                     PUSH 0x3c
00556571  6A 32                     PUSH 0x32
00556573  6A 00                     PUSH 0x0
00556575  E8 16 7D 15 00            CALL 0x006ae290
0055657A  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0055657D  A1 54 87 80 00            MOV EAX,[0x00808754]
00556582  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00556585  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00556588  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0055658B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_0055658e:
0055658E  8B CE                     MOV ECX,ESI
00556590  E8 6C D1 EA FF            CALL 0x00403701
00556595  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0055659B  85 C9                     TEST ECX,ECX
0055659D  0F 84 AA 00 00 00         JZ 0x0055664d
005565A3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005565A6  85 C0                     TEST EAX,EAX
005565A8  0F 84 9F 00 00 00         JZ 0x0055664d
005565AE  8D 55 FC                  LEA EDX,[EBP + -0x4]
005565B1  52                        PUSH EDX
005565B2  E8 29 BB 19 00            CALL 0x006f20e0
005565B7  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005565BA  33 C0                     XOR EAX,EAX
005565BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005565C2  5F                        POP EDI
005565C3  5E                        POP ESI
005565C4  8B E5                     MOV ESP,EBP
005565C6  5D                        POP EBP
005565C7  C2 04 00                  RET 0x4
LAB_005565ca:
005565CA  8B CE                     MOV ECX,ESI
005565CC  E8 F9 DA EA FF            CALL 0x004040ca
005565D1  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005565D4  33 C0                     XOR EAX,EAX
005565D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005565DC  5F                        POP EDI
005565DD  5E                        POP ESI
005565DE  8B E5                     MOV ESP,EBP
005565E0  5D                        POP EBP
005565E1  C2 04 00                  RET 0x4
LAB_005565e4:
005565E4  8B CE                     MOV ECX,ESI
005565E6  E8 C7 BB EA FF            CALL 0x004021b2
005565EB  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005565EE  C7 05 7C 2A 80 00 00 00 00 00  MOV dword ptr [0x00802a7c],0x0
005565F8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005565FE  33 C0                     XOR EAX,EAX
00556600  5F                        POP EDI
00556601  5E                        POP ESI
00556602  8B E5                     MOV ESP,EBP
00556604  5D                        POP EBP
00556605  C2 04 00                  RET 0x4
LAB_00556608:
00556608  3D 0F 01 00 00            CMP EAX,0x10f
0055660D  75 3E                     JNZ 0x0055664d
0055660F  8D 45 F8                  LEA EAX,[EBP + -0x8]
00556612  8B CE                     MOV ECX,ESI
00556614  50                        PUSH EAX
00556615  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0055661C  E8 24 E2 EA FF            CALL 0x00404845
00556621  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00556624  8B 15 BC AE 79 00         MOV EDX,dword ptr [0x0079aebc]
0055662A  6A 0C                     PUSH 0xc
0055662C  51                        PUSH ECX
0055662D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00556633  50                        PUSH EAX
00556634  52                        PUSH EDX
00556635  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00556638  E8 3B AA EA FF            CALL 0x00401078
0055663D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00556640  85 C0                     TEST EAX,EAX
00556642  74 09                     JZ 0x0055664d
00556644  8D 45 F4                  LEA EAX,[EBP + -0xc]
00556647  50                        PUSH EAX
00556648  E8 13 4A 15 00            CALL 0x006ab060
LAB_0055664d:
0055664D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00556650  33 C0                     XOR EAX,EAX
00556652  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00556658  5F                        POP EDI
00556659  5E                        POP ESI
0055665A  8B E5                     MOV ESP,EBP
0055665C  5D                        POP EBP
0055665D  C2 04 00                  RET 0x4
LAB_00556660:
00556660  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00556663  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00556666  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055666C  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0055666F  51                        PUSH ECX
00556670  68 FC 91 7C 00            PUSH 0x7c91fc
00556675  56                        PUSH ESI
00556676  6A 00                     PUSH 0x0
00556678  68 51 01 00 00            PUSH 0x151
0055667D  68 04 91 7C 00            PUSH 0x7c9104
00556682  E8 49 6E 15 00            CALL 0x006ad4d0
00556687  83 C4 18                  ADD ESP,0x18
0055668A  85 C0                     TEST EAX,EAX
0055668C  74 01                     JZ 0x0055668f
0055668E  CC                        INT3
LAB_0055668f:
0055668F  68 52 01 00 00            PUSH 0x152
00556694  68 04 91 7C 00            PUSH 0x7c9104
00556699  6A 00                     PUSH 0x0
0055669B  56                        PUSH ESI
0055669C  E8 9F F7 14 00            CALL 0x006a5e40
005566A1  5F                        POP EDI
005566A2  B8 FF FF 00 00            MOV EAX,0xffff
005566A7  5E                        POP ESI
005566A8  8B E5                     MOV ESP,EBP
005566AA  5D                        POP EBP
005566AB  C2 04 00                  RET 0x4
