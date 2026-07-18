FUN_0055b3d0:
0055B3D0  55                        PUSH EBP
0055B3D1  8B EC                     MOV EBP,ESP
0055B3D3  83 EC 0C                  SUB ESP,0xc
0055B3D6  8B D1                     MOV EDX,ECX
0055B3D8  53                        PUSH EBX
0055B3D9  56                        PUSH ESI
0055B3DA  57                        PUSH EDI
0055B3DB  8B 82 14 01 00 00         MOV EAX,dword ptr [EDX + 0x114]
0055B3E1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0055B3E4  85 C0                     TEST EAX,EAX
0055B3E6  0F 84 67 01 00 00         JZ 0x0055b553
0055B3EC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B3EF  83 F9 08                  CMP ECX,0x8
0055B3F2  0F 83 5B 01 00 00         JNC 0x0055b553
0055B3F8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055B3FD  85 C0                     TEST EAX,EAX
0055B3FF  74 11                     JZ 0x0055b412
0055B401  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0055B404  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055B40C  0F 83 41 01 00 00         JNC 0x0055b553
LAB_0055b412:
0055B412  33 C0                     XOR EAX,EAX
0055B414  BF E9 87 80 00            MOV EDI,0x8087e9
0055B419  81 C2 B4 00 00 00         ADD EDX,0xb4
0055B41F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B422  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0055b425:
0055B425  3B C1                     CMP EAX,ECX
0055B427  0F 84 0A 01 00 00         JZ 0x0055b537
0055B42D  80 3F FF                  CMP byte ptr [EDI],0xff
0055B430  0F 84 01 01 00 00         JZ 0x0055b537
0055B436  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0055B43C  84 D2                     TEST DL,DL
0055B43E  74 30                     JZ 0x0055b470
0055B440  8B D0                     MOV EDX,EAX
0055B442  33 DB                     XOR EBX,EBX
0055B444  81 E2 FF 00 00 00         AND EDX,0xff
0055B44A  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
0055B44D  8B D1                     MOV EDX,ECX
0055B44F  81 E2 FF 00 00 00         AND EDX,0xff
0055B455  8A 8C F6 EA 87 80 00      MOV CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0055B45C  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0055B45F  3A 8C D2 EA 87 80 00      CMP CL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0055B466  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B469  0F 95 C3                  SETNZ BL
0055B46C  8B D3                     MOV EDX,EBX
0055B46E  EB 79                     JMP 0x0055b4e9
LAB_0055b470:
0055B470  3A C8                     CMP CL,AL
0055B472  74 6A                     JZ 0x0055b4de
0055B474  8B D1                     MOV EDX,ECX
0055B476  8B F0                     MOV ESI,EAX
0055B478  81 E2 FF 00 00 00         AND EDX,0xff
0055B47E  81 E6 FF 00 00 00         AND ESI,0xff
0055B484  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
0055B48B  84 DB                     TEST BL,BL
0055B48D  75 10                     JNZ 0x0055b49f
0055B48F  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
0055B496  75 07                     JNZ 0x0055b49f
0055B498  BA FE FF FF FF            MOV EDX,0xfffffffe
0055B49D  EB 41                     JMP 0x0055b4e0
LAB_0055b49f:
0055B49F  80 FB 01                  CMP BL,0x1
0055B4A2  75 0F                     JNZ 0x0055b4b3
0055B4A4  80 BC F2 4F 8A 80 00 00   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x0
0055B4AC  75 05                     JNZ 0x0055b4b3
0055B4AE  83 CA FF                  OR EDX,0xffffffff
0055B4B1  EB 2D                     JMP 0x0055b4e0
LAB_0055b4b3:
0055B4B3  84 DB                     TEST BL,BL
0055B4B5  75 11                     JNZ 0x0055b4c8
0055B4B7  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B4BF  75 07                     JNZ 0x0055b4c8
0055B4C1  BA 01 00 00 00            MOV EDX,0x1
0055B4C6  EB 18                     JMP 0x0055b4e0
LAB_0055b4c8:
0055B4C8  80 FB 01                  CMP BL,0x1
0055B4CB  75 11                     JNZ 0x0055b4de
0055B4CD  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B4D5  75 07                     JNZ 0x0055b4de
0055B4D7  BA 02 00 00 00            MOV EDX,0x2
0055B4DC  EB 02                     JMP 0x0055b4e0
LAB_0055b4de:
0055B4DE  33 D2                     XOR EDX,EDX
LAB_0055b4e0:
0055B4E0  33 DB                     XOR EBX,EBX
0055B4E2  85 D2                     TEST EDX,EDX
0055B4E4  0F 9C C3                  SETL BL
0055B4E7  8B D3                     MOV EDX,EBX
LAB_0055b4e9:
0055B4E9  85 D2                     TEST EDX,EDX
0055B4EB  74 4A                     JZ 0x0055b537
0055B4ED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055B4F0  8B 32                     MOV ESI,dword ptr [EDX]
0055B4F2  85 F6                     TEST ESI,ESI
0055B4F4  74 41                     JZ 0x0055b537
0055B4F6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055B4F9  85 D2                     TEST EDX,EDX
0055B4FB  7C 3A                     JL 0x0055b537
0055B4FD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055B500  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055B503  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
0055B506  3B DA                     CMP EBX,EDX
0055B508  7D 2D                     JGE 0x0055b537
0055B50A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055B50D  85 DB                     TEST EBX,EBX
0055B50F  7C 26                     JL 0x0055b537
0055B511  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0055B514  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
0055B517  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0055B51A  7D 1B                     JGE 0x0055b537
0055B51C  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B522  7D 13                     JGE 0x0055b537
0055B524  0F AF D3                  IMUL EDX,EBX
0055B527  03 D6                     ADD EDX,ESI
0055B529  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055B52C  33 DB                     XOR EBX,EBX
0055B52E  8A 1C 32                  MOV BL,byte ptr [EDX + ESI*0x1]
0055B531  8B D3                     MOV EDX,EBX
0055B533  85 D2                     TEST EDX,EDX
0055B535  7F 27                     JG 0x0055b55e
LAB_0055b537:
0055B537  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0055B53A  83 C7 51                  ADD EDI,0x51
0055B53D  40                        INC EAX
0055B53E  83 C3 04                  ADD EBX,0x4
0055B541  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B547  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0055B54A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B54D  0F 8C D2 FE FF FF         JL 0x0055b425
LAB_0055b553:
0055B553  5F                        POP EDI
0055B554  5E                        POP ESI
0055B555  33 C0                     XOR EAX,EAX
0055B557  5B                        POP EBX
0055B558  8B E5                     MOV ESP,EBP
0055B55A  5D                        POP EBP
0055B55B  C2 10 00                  RET 0x10
LAB_0055b55e:
0055B55E  5F                        POP EDI
0055B55F  5E                        POP ESI
0055B560  B8 01 00 00 00            MOV EAX,0x1
0055B565  5B                        POP EBX
0055B566  8B E5                     MOV ESP,EBP
0055B568  5D                        POP EBP
0055B569  C2 10 00                  RET 0x10
