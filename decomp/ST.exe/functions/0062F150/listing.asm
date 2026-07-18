FUN_0062f150:
0062F150  55                        PUSH EBP
0062F151  8B EC                     MOV EBP,ESP
0062F153  83 EC 10                  SUB ESP,0x10
0062F156  53                        PUSH EBX
0062F157  56                        PUSH ESI
0062F158  57                        PUSH EDI
0062F159  8B F9                     MOV EDI,ECX
0062F15B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0062F15E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0062F165  8A 87 F9 01 00 00         MOV AL,byte ptr [EDI + 0x1f9]
0062F16B  84 C0                     TEST AL,AL
0062F16D  0F 84 95 00 00 00         JZ 0x0062f208
0062F173  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0062F179  85 F6                     TEST ESI,ESI
0062F17B  0F 84 87 00 00 00         JZ 0x0062f208
0062F181  A0 4D 87 80 00            MOV AL,[0x0080874d]
0062F186  8B 9F DD 01 00 00         MOV EBX,dword ptr [EDI + 0x1dd]
0062F18C  3C FF                     CMP AL,0xff
0062F18E  74 71                     JZ 0x0062f201
0062F190  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0062F196  85 C0                     TEST EAX,EAX
0062F198  74 67                     JZ 0x0062f201
0062F19A  8B 97 D9 01 00 00         MOV EDX,dword ptr [EDI + 0x1d9]
0062F1A0  8D 45 F4                  LEA EAX,[EBP + -0xc]
0062F1A3  8D 4D FC                  LEA ECX,[EBP + -0x4]
0062F1A6  50                        PUSH EAX
0062F1A7  8B 87 D5 01 00 00         MOV EAX,dword ptr [EDI + 0x1d5]
0062F1AD  51                        PUSH ECX
0062F1AE  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0062F1B4  52                        PUSH EDX
0062F1B5  50                        PUSH EAX
0062F1B6  51                        PUSH ECX
0062F1B7  8B CE                     MOV ECX,ESI
0062F1B9  E8 95 4D DD FF            CALL 0x00403f53
0062F1BE  85 DB                     TEST EBX,EBX
0062F1C0  7C 3F                     JL 0x0062f201
0062F1C2  83 FB 05                  CMP EBX,0x5
0062F1C5  7D 3A                     JGE 0x0062f201
0062F1C7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062F1CA  85 D2                     TEST EDX,EDX
0062F1CC  7C 33                     JL 0x0062f201
0062F1CE  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0062F1D1  3B D1                     CMP EDX,ECX
0062F1D3  7D 2C                     JGE 0x0062f201
0062F1D5  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0062F1DC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0062F1DF  03 C3                     ADD EAX,EBX
0062F1E1  85 C0                     TEST EAX,EAX
0062F1E3  7C 1C                     JL 0x0062f201
0062F1E5  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0062F1E8  7D 17                     JGE 0x0062f201
0062F1EA  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0062F1ED  85 F6                     TEST ESI,ESI
0062F1EF  74 10                     JZ 0x0062f201
0062F1F1  0F AF C1                  IMUL EAX,ECX
0062F1F4  03 C6                     ADD EAX,ESI
0062F1F6  33 C9                     XOR ECX,ECX
0062F1F8  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0062F1FB  8B C1                     MOV EAX,ECX
0062F1FD  85 C0                     TEST EAX,EAX
0062F1FF  74 07                     JZ 0x0062f208
LAB_0062f201:
0062F201  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_0062f208:
0062F208  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0062F20F  8D B7 E5 01 00 00         LEA ESI,[EDI + 0x1e5]
LAB_0062f215:
0062F215  8B 0E                     MOV ECX,dword ptr [ESI]
0062F217  B8 02 00 00 00            MOV EAX,0x2
0062F21C  85 C9                     TEST ECX,ECX
0062F21E  0F 84 E6 00 00 00         JZ 0x0062f30a
0062F224  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0062F227  8B 79 10                  MOV EDI,dword ptr [ECX + 0x10]
0062F22A  3B D0                     CMP EDX,EAX
0062F22C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0062F232  75 5C                     JNZ 0x0062f290
0062F234  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0062F23A  33 D2                     XOR EDX,EDX
0062F23C  BB 05 00 00 00            MOV EBX,0x5
0062F241  F7 F3                     DIV EBX
0062F243  85 D2                     TEST EDX,EDX
0062F245  75 7E                     JNZ 0x0062f2c5
0062F247  85 FF                     TEST EDI,EDI
0062F249  74 1B                     JZ 0x0062f266
0062F24B  A1 24 67 80 00            MOV EAX,[0x00806724]
0062F250  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
0062F254  52                        PUSH EDX
0062F255  33 D2                     XOR EDX,EDX
0062F257  8A 51 34                  MOV DL,byte ptr [ECX + 0x34]
0062F25A  8B CF                     MOV ECX,EDI
0062F25C  8B 44 90 30               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x30]
0062F260  50                        PUSH EAX
0062F261  E8 07 1F DD FF            CALL 0x0040116d
LAB_0062f266:
0062F266  8B 06                     MOV EAX,dword ptr [ESI]
0062F268  8A 50 34                  MOV DL,byte ptr [EAX + 0x34]
0062F26B  FE C2                     INC DL
0062F26D  88 50 34                  MOV byte ptr [EAX + 0x34],DL
0062F270  8B 0E                     MOV ECX,dword ptr [ESI]
0062F272  A1 24 67 80 00            MOV EAX,[0x00806724]
0062F277  66 0F B6 51 34            MOVZX DX,byte ptr [ECX + 0x34]
0062F27C  66 3B 50 23               CMP DX,word ptr [EAX + 0x23]
0062F280  7C 43                     JL 0x0062f2c5
0062F282  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062F285  51                        PUSH ECX
0062F286  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0062F289  E8 9A 54 DD FF            CALL 0x00404728
0062F28E  EB 35                     JMP 0x0062f2c5
LAB_0062f290:
0062F290  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0062F296  8B 59 35                  MOV EBX,dword ptr [ECX + 0x35]
0062F299  2B D3                     SUB EDX,EBX
0062F29B  8B 59 39                  MOV EBX,dword ptr [ECX + 0x39]
0062F29E  3B D3                     CMP EDX,EBX
0062F2A0  76 23                     JBE 0x0062f2c5
0062F2A2  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
0062F2A5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062F2AB  8B 06                     MOV EAX,dword ptr [ESI]
0062F2AD  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0062F2B3  89 50 35                  MOV dword ptr [EAX + 0x35],EDX
0062F2B6  8B 06                     MOV EAX,dword ptr [ESI]
0062F2B8  C7 40 39 0A 00 00 00      MOV dword ptr [EAX + 0x39],0xa
0062F2BF  8B 0E                     MOV ECX,dword ptr [ESI]
0062F2C1  C6 41 34 00               MOV byte ptr [ECX + 0x34],0x0
LAB_0062f2c5:
0062F2C5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062F2C8  85 C0                     TEST EAX,EAX
0062F2CA  8B 06                     MOV EAX,dword ptr [ESI]
0062F2CC  74 20                     JZ 0x0062f2ee
0062F2CE  85 C0                     TEST EAX,EAX
0062F2D0  74 38                     JZ 0x0062f30a
0062F2D2  8A 48 3D                  MOV CL,byte ptr [EAX + 0x3d]
0062F2D5  84 C9                     TEST CL,CL
0062F2D7  75 31                     JNZ 0x0062f30a
0062F2D9  85 FF                     TEST EDI,EDI
0062F2DB  74 2D                     JZ 0x0062f30a
0062F2DD  6A 00                     PUSH 0x0
0062F2DF  8B CF                     MOV ECX,EDI
0062F2E1  E8 9C 36 DD FF            CALL 0x00402982
0062F2E6  8B 16                     MOV EDX,dword ptr [ESI]
0062F2E8  C6 42 3D 01               MOV byte ptr [EDX + 0x3d],0x1
0062F2EC  EB 1C                     JMP 0x0062f30a
LAB_0062f2ee:
0062F2EE  85 C0                     TEST EAX,EAX
0062F2F0  74 18                     JZ 0x0062f30a
0062F2F2  8A 48 3D                  MOV CL,byte ptr [EAX + 0x3d]
0062F2F5  84 C9                     TEST CL,CL
0062F2F7  74 11                     JZ 0x0062f30a
0062F2F9  85 FF                     TEST EDI,EDI
0062F2FB  74 0D                     JZ 0x0062f30a
0062F2FD  8B CF                     MOV ECX,EDI
0062F2FF  E8 0B 4A DD FF            CALL 0x00403d0f
0062F304  8B 06                     MOV EAX,dword ptr [ESI]
0062F306  C6 40 3D 00               MOV byte ptr [EAX + 0x3d],0x0
LAB_0062f30a:
0062F30A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062F30D  83 C6 04                  ADD ESI,0x4
0062F310  40                        INC EAX
0062F311  83 F8 05                  CMP EAX,0x5
0062F314  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062F317  0F 8C F8 FE FF FF         JL 0x0062f215
0062F31D  5F                        POP EDI
0062F31E  5E                        POP ESI
0062F31F  5B                        POP EBX
0062F320  8B E5                     MOV ESP,EBP
0062F322  5D                        POP EBP
0062F323  C3                        RET
