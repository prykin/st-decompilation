FUN_0055b5e0:
0055B5E0  55                        PUSH EBP
0055B5E1  8B EC                     MOV EBP,ESP
0055B5E3  83 EC 0C                  SUB ESP,0xc
0055B5E6  8B D1                     MOV EDX,ECX
0055B5E8  53                        PUSH EBX
0055B5E9  56                        PUSH ESI
0055B5EA  57                        PUSH EDI
0055B5EB  8B 82 14 01 00 00         MOV EAX,dword ptr [EDX + 0x114]
0055B5F1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0055B5F4  85 C0                     TEST EAX,EAX
0055B5F6  0F 84 67 01 00 00         JZ 0x0055b763
0055B5FC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B5FF  83 F9 08                  CMP ECX,0x8
0055B602  0F 83 5B 01 00 00         JNC 0x0055b763
0055B608  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055B60D  85 C0                     TEST EAX,EAX
0055B60F  74 11                     JZ 0x0055b622
0055B611  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0055B614  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055B61C  0F 83 41 01 00 00         JNC 0x0055b763
LAB_0055b622:
0055B622  33 C0                     XOR EAX,EAX
0055B624  BF E9 87 80 00            MOV EDI,0x8087e9
0055B629  81 C2 D4 00 00 00         ADD EDX,0xd4
0055B62F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B632  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0055b635:
0055B635  3B C1                     CMP EAX,ECX
0055B637  0F 84 0A 01 00 00         JZ 0x0055b747
0055B63D  80 3F FF                  CMP byte ptr [EDI],0xff
0055B640  0F 84 01 01 00 00         JZ 0x0055b747
0055B646  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0055B64C  84 D2                     TEST DL,DL
0055B64E  74 30                     JZ 0x0055b680
0055B650  8B D0                     MOV EDX,EAX
0055B652  33 DB                     XOR EBX,EBX
0055B654  81 E2 FF 00 00 00         AND EDX,0xff
0055B65A  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
0055B65D  8B D1                     MOV EDX,ECX
0055B65F  81 E2 FF 00 00 00         AND EDX,0xff
0055B665  8A 8C F6 EA 87 80 00      MOV CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0055B66C  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0055B66F  3A 8C D2 EA 87 80 00      CMP CL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0055B676  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055B679  0F 95 C3                  SETNZ BL
0055B67C  8B D3                     MOV EDX,EBX
0055B67E  EB 79                     JMP 0x0055b6f9
LAB_0055b680:
0055B680  3A C8                     CMP CL,AL
0055B682  74 6A                     JZ 0x0055b6ee
0055B684  8B D1                     MOV EDX,ECX
0055B686  8B F0                     MOV ESI,EAX
0055B688  81 E2 FF 00 00 00         AND EDX,0xff
0055B68E  81 E6 FF 00 00 00         AND ESI,0xff
0055B694  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
0055B69B  84 DB                     TEST BL,BL
0055B69D  75 10                     JNZ 0x0055b6af
0055B69F  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
0055B6A6  75 07                     JNZ 0x0055b6af
0055B6A8  BA FE FF FF FF            MOV EDX,0xfffffffe
0055B6AD  EB 41                     JMP 0x0055b6f0
LAB_0055b6af:
0055B6AF  80 FB 01                  CMP BL,0x1
0055B6B2  75 0F                     JNZ 0x0055b6c3
0055B6B4  80 BC F2 4F 8A 80 00 00   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x0
0055B6BC  75 05                     JNZ 0x0055b6c3
0055B6BE  83 CA FF                  OR EDX,0xffffffff
0055B6C1  EB 2D                     JMP 0x0055b6f0
LAB_0055b6c3:
0055B6C3  84 DB                     TEST BL,BL
0055B6C5  75 11                     JNZ 0x0055b6d8
0055B6C7  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B6CF  75 07                     JNZ 0x0055b6d8
0055B6D1  BA 01 00 00 00            MOV EDX,0x1
0055B6D6  EB 18                     JMP 0x0055b6f0
LAB_0055b6d8:
0055B6D8  80 FB 01                  CMP BL,0x1
0055B6DB  75 11                     JNZ 0x0055b6ee
0055B6DD  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
0055B6E5  75 07                     JNZ 0x0055b6ee
0055B6E7  BA 02 00 00 00            MOV EDX,0x2
0055B6EC  EB 02                     JMP 0x0055b6f0
LAB_0055b6ee:
0055B6EE  33 D2                     XOR EDX,EDX
LAB_0055b6f0:
0055B6F0  33 DB                     XOR EBX,EBX
0055B6F2  85 D2                     TEST EDX,EDX
0055B6F4  0F 9C C3                  SETL BL
0055B6F7  8B D3                     MOV EDX,EBX
LAB_0055b6f9:
0055B6F9  85 D2                     TEST EDX,EDX
0055B6FB  74 4A                     JZ 0x0055b747
0055B6FD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055B700  8B 32                     MOV ESI,dword ptr [EDX]
0055B702  85 F6                     TEST ESI,ESI
0055B704  74 41                     JZ 0x0055b747
0055B706  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055B709  85 D2                     TEST EDX,EDX
0055B70B  7C 3A                     JL 0x0055b747
0055B70D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055B710  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055B713  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
0055B716  3B DA                     CMP EBX,EDX
0055B718  7D 2D                     JGE 0x0055b747
0055B71A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055B71D  85 DB                     TEST EBX,EBX
0055B71F  7C 26                     JL 0x0055b747
0055B721  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0055B724  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
0055B727  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0055B72A  7D 1B                     JGE 0x0055b747
0055B72C  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B732  7D 13                     JGE 0x0055b747
0055B734  0F AF D3                  IMUL EDX,EBX
0055B737  03 D6                     ADD EDX,ESI
0055B739  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055B73C  33 DB                     XOR EBX,EBX
0055B73E  8A 1C 32                  MOV BL,byte ptr [EDX + ESI*0x1]
0055B741  8B D3                     MOV EDX,EBX
0055B743  85 D2                     TEST EDX,EDX
0055B745  7F 27                     JG 0x0055b76e
LAB_0055b747:
0055B747  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0055B74A  83 C7 51                  ADD EDI,0x51
0055B74D  40                        INC EAX
0055B74E  83 C3 04                  ADD EBX,0x4
0055B751  81 FF 71 8A 80 00         CMP EDI,0x808a71
0055B757  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0055B75A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0055B75D  0F 8C D2 FE FF FF         JL 0x0055b635
LAB_0055b763:
0055B763  5F                        POP EDI
0055B764  5E                        POP ESI
0055B765  33 C0                     XOR EAX,EAX
0055B767  5B                        POP EBX
0055B768  8B E5                     MOV ESP,EBP
0055B76A  5D                        POP EBP
0055B76B  C2 10 00                  RET 0x10
LAB_0055b76e:
0055B76E  5F                        POP EDI
0055B76F  5E                        POP ESI
0055B770  B8 01 00 00 00            MOV EAX,0x1
0055B775  5B                        POP EBX
0055B776  8B E5                     MOV ESP,EBP
0055B778  5D                        POP EBP
0055B779  C2 10 00                  RET 0x10
