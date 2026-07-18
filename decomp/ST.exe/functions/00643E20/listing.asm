FUN_00643e20:
00643E20  55                        PUSH EBP
00643E21  8B EC                     MOV EBP,ESP
00643E23  83 EC 20                  SUB ESP,0x20
00643E26  53                        PUSH EBX
00643E27  56                        PUSH ESI
00643E28  57                        PUSH EDI
00643E29  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00643E2F  33 DB                     XOR EBX,EBX
00643E31  8B F1                     MOV ESI,ECX
00643E33  3B FB                     CMP EDI,EBX
00643E35  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00643E38  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00643E3B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00643E3E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00643E41  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00643E44  0F 84 30 01 00 00         JZ 0x00643f7a
00643E4A  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00643E4E  66 3B C3                  CMP AX,BX
00643E51  0F BF C8                  MOVSX ECX,AX
00643E54  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00643E59  7C 11                     JL 0x00643e6c
00643E5B  F7 E9                     IMUL ECX
00643E5D  C1 FA 06                  SAR EDX,0x6
00643E60  8B C2                     MOV EAX,EDX
00643E62  C1 E8 1F                  SHR EAX,0x1f
00643E65  03 D0                     ADD EDX,EAX
00643E67  0F BF DA                  MOVSX EBX,DX
00643E6A  EB 10                     JMP 0x00643e7c
LAB_00643e6c:
00643E6C  F7 E9                     IMUL ECX
00643E6E  C1 FA 06                  SAR EDX,0x6
00643E71  8B CA                     MOV ECX,EDX
00643E73  C1 E9 1F                  SHR ECX,0x1f
00643E76  03 D1                     ADD EDX,ECX
00643E78  0F BF DA                  MOVSX EBX,DX
00643E7B  4B                        DEC EBX
LAB_00643e7c:
00643E7C  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00643E80  66 85 C0                  TEST AX,AX
00643E83  0F BF C8                  MOVSX ECX,AX
00643E86  B8 79 19 8C 02            MOV EAX,0x28c1979
00643E8B  7C 10                     JL 0x00643e9d
00643E8D  F7 E9                     IMUL ECX
00643E8F  D1 FA                     SAR EDX,0x1
00643E91  8B C2                     MOV EAX,EDX
00643E93  C1 E8 1F                  SHR EAX,0x1f
00643E96  03 D0                     ADD EDX,EAX
00643E98  0F BF CA                  MOVSX ECX,DX
00643E9B  EB 0F                     JMP 0x00643eac
LAB_00643e9d:
00643E9D  F7 E9                     IMUL ECX
00643E9F  D1 FA                     SAR EDX,0x1
00643EA1  8B CA                     MOV ECX,EDX
00643EA3  C1 E9 1F                  SHR ECX,0x1f
00643EA6  03 D1                     ADD EDX,ECX
00643EA8  0F BF CA                  MOVSX ECX,DX
00643EAB  49                        DEC ECX
LAB_00643eac:
00643EAC  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00643EB0  66 85 C0                  TEST AX,AX
00643EB3  0F BF D0                  MOVSX EDX,AX
00643EB6  B8 79 19 8C 02            MOV EAX,0x28c1979
00643EBB  7C 10                     JL 0x00643ecd
00643EBD  F7 EA                     IMUL EDX
00643EBF  D1 FA                     SAR EDX,0x1
00643EC1  8B C2                     MOV EAX,EDX
00643EC3  C1 E8 1F                  SHR EAX,0x1f
00643EC6  03 D0                     ADD EDX,EAX
00643EC8  0F BF C2                  MOVSX EAX,DX
00643ECB  EB 0F                     JMP 0x00643edc
LAB_00643ecd:
00643ECD  F7 EA                     IMUL EDX
00643ECF  D1 FA                     SAR EDX,0x1
00643ED1  8B C2                     MOV EAX,EDX
00643ED3  C1 E8 1F                  SHR EAX,0x1f
00643ED6  03 D0                     ADD EDX,EAX
00643ED8  0F BF C2                  MOVSX EAX,DX
00643EDB  48                        DEC EAX
LAB_00643edc:
00643EDC  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00643EE3  74 65                     JZ 0x00643f4a
00643EE5  8B 97 F8 00 00 00         MOV EDX,dword ptr [EDI + 0xf8]
00643EEB  85 D2                     TEST EDX,EDX
00643EED  74 5B                     JZ 0x00643f4a
00643EEF  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00643EF2  52                        PUSH EDX
00643EF3  8D 55 E8                  LEA EDX,[EBP + -0x18]
00643EF6  52                        PUSH EDX
00643EF7  51                        PUSH ECX
00643EF8  50                        PUSH EAX
00643EF9  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00643EFF  50                        PUSH EAX
00643F00  8B CF                     MOV ECX,EDI
00643F02  E8 4C 00 DC FF            CALL 0x00403f53
00643F07  85 DB                     TEST EBX,EBX
00643F09  7C 3F                     JL 0x00643f4a
00643F0B  83 FB 05                  CMP EBX,0x5
00643F0E  7D 3A                     JGE 0x00643f4a
00643F10  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00643F13  85 D2                     TEST EDX,EDX
00643F15  7C 33                     JL 0x00643f4a
00643F17  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00643F1A  3B D1                     CMP EDX,ECX
00643F1C  7D 2C                     JGE 0x00643f4a
00643F1E  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00643F25  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00643F28  03 C3                     ADD EAX,EBX
00643F2A  85 C0                     TEST EAX,EAX
00643F2C  7C 1C                     JL 0x00643f4a
00643F2E  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00643F31  7D 17                     JGE 0x00643f4a
00643F33  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00643F36  85 FF                     TEST EDI,EDI
00643F38  74 10                     JZ 0x00643f4a
00643F3A  0F AF C1                  IMUL EAX,ECX
00643F3D  03 C7                     ADD EAX,EDI
00643F3F  33 C9                     XOR ECX,ECX
00643F41  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00643F44  8B C1                     MOV EAX,ECX
00643F46  85 C0                     TEST EAX,EAX
00643F48  74 18                     JZ 0x00643f62
LAB_00643f4a:
00643F4A  80 BE E7 01 00 00 01      CMP byte ptr [ESI + 0x1e7],0x1
00643F51  75 24                     JNZ 0x00643f77
00643F53  6A 00                     PUSH 0x0
00643F55  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00643F5B  E8 22 EA DB FF            CALL 0x00402982
00643F60  EB 15                     JMP 0x00643f77
LAB_00643f62:
00643F62  8A 86 E7 01 00 00         MOV AL,byte ptr [ESI + 0x1e7]
00643F68  84 C0                     TEST AL,AL
00643F6A  75 0B                     JNZ 0x00643f77
00643F6C  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00643F72  E8 98 FD DB FF            CALL 0x00403d0f
LAB_00643f77:
00643F77  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00643f7a:
00643F7A  83 BE 3D 02 00 00 01      CMP dword ptr [ESI + 0x23d],0x1
00643F81  0F 85 C8 00 00 00         JNZ 0x0064404f
00643F87  80 BE 7D 02 00 00 08      CMP byte ptr [ESI + 0x27d],0x8
00643F8E  73 1E                     JNC 0x00643fae
00643F90  66 8B 96 62 02 00 00      MOV DX,word ptr [ESI + 0x262]
00643F97  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00643F9A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00643FA0  6A 01                     PUSH 0x1
00643FA2  52                        PUSH EDX
00643FA3  50                        PUSH EAX
00643FA4  E8 11 E9 DB FF            CALL 0x004028ba
00643FA9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00643FAC  8B D8                     MOV EBX,EAX
LAB_00643fae:
00643FAE  8A 86 7D 02 00 00         MOV AL,byte ptr [ESI + 0x27d]
00643FB4  84 C0                     TEST AL,AL
00643FB6  75 33                     JNZ 0x00643feb
00643FB8  83 BE 59 02 00 00 0A      CMP dword ptr [ESI + 0x259],0xa
00643FBF  74 2A                     JZ 0x00643feb
00643FC1  85 DB                     TEST EBX,EBX
00643FC3  74 26                     JZ 0x00643feb
00643FC5  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00643FC8  8B 86 5E 02 00 00         MOV EAX,dword ptr [ESI + 0x25e]
00643FCE  3B C8                     CMP ECX,EAX
00643FD0  75 19                     JNZ 0x00643feb
00643FD2  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00643FD8  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
00643FDE  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00643FE4  52                        PUSH EDX
00643FE5  50                        PUSH EAX
00643FE6  E8 F5 63 0A 00            CALL 0x006ea3e0
LAB_00643feb:
00643FEB  8A 8E 7D 02 00 00         MOV CL,byte ptr [ESI + 0x27d]
00643FF1  FE C1                     INC CL
00643FF3  8A C1                     MOV AL,CL
00643FF5  88 8E 7D 02 00 00         MOV byte ptr [ESI + 0x27d],CL
00643FFB  3C 08                     CMP AL,0x8
00643FFD  73 2A                     JNC 0x00644029
00643FFF  85 DB                     TEST EBX,EBX
00644001  74 0D                     JZ 0x00644010
00644003  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00644006  8B 86 5E 02 00 00         MOV EAX,dword ptr [ESI + 0x25e]
0064400C  3B C8                     CMP ECX,EAX
0064400E  74 12                     JZ 0x00644022
LAB_00644010:
00644010  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
00644016  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0064401C  52                        PUSH EDX
0064401D  E8 CE 62 0A 00            CALL 0x006ea2f0
LAB_00644022:
00644022  80 BE 7D 02 00 00 08      CMP byte ptr [ESI + 0x27d],0x8
LAB_00644029:
00644029  0F 85 60 02 00 00         JNZ 0x0064428f
0064402F  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
00644035  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0064403B  50                        PUSH EAX
0064403C  E8 AF 62 0A 00            CALL 0x006ea2f0
00644041  8B CE                     MOV ECX,ESI
00644043  E8 F5 0F DC FF            CALL 0x0040503d
00644048  5F                        POP EDI
00644049  5E                        POP ESI
0064404A  5B                        POP EBX
0064404B  8B E5                     MOV ESP,EBP
0064404D  5D                        POP EBP
0064404E  C3                        RET
LAB_0064404f:
0064404F  8B 86 70 02 00 00         MOV EAX,dword ptr [ESI + 0x270]
00644055  85 C0                     TEST EAX,EAX
00644057  0F 85 A0 00 00 00         JNZ 0x006440fd
0064405D  33 C9                     XOR ECX,ECX
0064405F  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00644065  8A 8E 7C 02 00 00         MOV CL,byte ptr [ESI + 0x27c]
0064406B  51                        PUSH ECX
0064406C  6A 00                     PUSH 0x0
0064406E  8B CF                     MOV ECX,EDI
00644070  E8 EF CF DB FF            CALL 0x00401064
00644075  85 C0                     TEST EAX,EAX
00644077  74 0A                     JZ 0x00644083
00644079  5F                        POP EDI
0064407A  5E                        POP ESI
0064407B  83 C8 FF                  OR EAX,0xffffffff
0064407E  5B                        POP EBX
0064407F  8B E5                     MOV ESP,EBP
00644081  5D                        POP EBP
00644082  C3                        RET
LAB_00644083:
00644083  6A 00                     PUSH 0x0
00644085  8B CF                     MOV ECX,EDI
00644087  E8 30 F0 DB FF            CALL 0x004030bc
0064408C  85 C0                     TEST EAX,EAX
0064408E  74 0A                     JZ 0x0064409a
00644090  5F                        POP EDI
00644091  5E                        POP ESI
00644092  83 C8 FF                  OR EAX,0xffffffff
00644095  5B                        POP EBX
00644096  8B E5                     MOV ESP,EBP
00644098  5D                        POP EBP
00644099  C3                        RET
LAB_0064409a:
0064409A  33 DB                     XOR EBX,EBX
0064409C  6A 01                     PUSH 0x1
0064409E  8A 9E 7C 02 00 00         MOV BL,byte ptr [ESI + 0x27c]
006440A4  8B CF                     MOV ECX,EDI
006440A6  E8 01 E2 DB FF            CALL 0x004022ac
006440AB  3B C3                     CMP EAX,EBX
006440AD  7E 2F                     JLE 0x006440de
006440AF  53                        PUSH EBX
006440B0  6A 01                     PUSH 0x1
006440B2  8B CF                     MOV ECX,EDI
006440B4  E8 AB CF DB FF            CALL 0x00401064
006440B9  85 C0                     TEST EAX,EAX
006440BB  74 0A                     JZ 0x006440c7
006440BD  5F                        POP EDI
006440BE  5E                        POP ESI
006440BF  83 C8 FF                  OR EAX,0xffffffff
006440C2  5B                        POP EBX
006440C3  8B E5                     MOV ESP,EBP
006440C5  5D                        POP EBP
006440C6  C3                        RET
LAB_006440c7:
006440C7  6A 01                     PUSH 0x1
006440C9  8B CF                     MOV ECX,EDI
006440CB  E8 EC EF DB FF            CALL 0x004030bc
006440D0  85 C0                     TEST EAX,EAX
006440D2  74 0A                     JZ 0x006440de
006440D4  5F                        POP EDI
006440D5  5E                        POP ESI
006440D6  83 C8 FF                  OR EAX,0xffffffff
006440D9  5B                        POP EBX
006440DA  8B E5                     MOV ESP,EBP
006440DC  5D                        POP EBP
006440DD  C3                        RET
LAB_006440de:
006440DE  6A 01                     PUSH 0x1
006440E0  8B CF                     MOV ECX,EDI
006440E2  E8 C5 E1 DB FF            CALL 0x004022ac
006440E7  33 D2                     XOR EDX,EDX
006440E9  8A 96 7C 02 00 00         MOV DL,byte ptr [ESI + 0x27c]
006440EF  4A                        DEC EDX
006440F0  3B C2                     CMP EAX,EDX
006440F2  0F 85 97 01 00 00         JNZ 0x0064428f
006440F8  E9 89 01 00 00            JMP 0x00644286
LAB_006440fd:
006440FD  8A 86 7C 02 00 00         MOV AL,byte ptr [ESI + 0x27c]
00644103  B3 0F                     MOV BL,0xf
00644105  3A C3                     CMP AL,BL
00644107  0F 83 A3 00 00 00         JNC 0x006441b0
0064410D  8B 8E 74 02 00 00         MOV ECX,dword ptr [ESI + 0x274]
00644113  8D 45 FC                  LEA EAX,[EBP + -0x4]
00644116  50                        PUSH EAX
00644117  51                        PUSH ECX
00644118  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0064411E  E8 AD 21 0A 00            CALL 0x006e62d0
00644123  83 F8 FC                  CMP EAX,-0x4
00644126  75 10                     JNZ 0x00644138
00644128  C6 86 7C 02 00 00 FA      MOV byte ptr [ESI + 0x27c],0xfa
0064412F  5F                        POP EDI
00644130  5E                        POP ESI
00644131  33 C0                     XOR EAX,EAX
00644133  5B                        POP EBX
00644134  8B E5                     MOV ESP,EBP
00644136  5D                        POP EBP
00644137  C3                        RET
LAB_00644138:
00644138  8D 45 E0                  LEA EAX,[EBP + -0x20]
0064413B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064413E  50                        PUSH EAX
0064413F  8D 45 EC                  LEA EAX,[EBP + -0x14]
00644142  8B 11                     MOV EDX,dword ptr [ECX]
00644144  50                        PUSH EAX
00644145  8D 45 F0                  LEA EAX,[EBP + -0x10]
00644148  50                        PUSH EAX
00644149  8D 45 F4                  LEA EAX,[EBP + -0xc]
0064414C  50                        PUSH EAX
0064414D  8B 86 78 02 00 00         MOV EAX,dword ptr [ESI + 0x278]
00644153  50                        PUSH EAX
00644154  FF 92 E0 00 00 00         CALL dword ptr [EDX + 0xe0]
0064415A  85 C0                     TEST EAX,EAX
0064415C  74 0A                     JZ 0x00644168
0064415E  5F                        POP EDI
0064415F  5E                        POP ESI
00644160  83 C8 FF                  OR EAX,0xffffffff
00644163  5B                        POP EBX
00644164  8B E5                     MOV ESP,EBP
00644166  5D                        POP EBP
00644167  C3                        RET
LAB_00644168:
00644168  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
0064416C  66 8B 45 EC               MOV AX,word ptr [EBP + -0x14]
00644170  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
00644174  66 89 4E 41               MOV word ptr [ESI + 0x41],CX
00644178  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064417B  66 89 46 45               MOV word ptr [ESI + 0x45],AX
0064417F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00644182  66 89 56 43               MOV word ptr [ESI + 0x43],DX
00644186  8B 91 ED 01 00 00         MOV EDX,dword ptr [ECX + 0x1ed]
0064418C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00644192  85 C0                     TEST EAX,EAX
00644194  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0064419A  52                        PUSH EDX
0064419B  50                        PUSH EAX
0064419C  75 07                     JNZ 0x006441a5
0064419E  E8 BD 62 0A 00            CALL 0x006ea460
006441A3  EB 05                     JMP 0x006441aa
LAB_006441a5:
006441A5  E8 36 62 0A 00            CALL 0x006ea3e0
LAB_006441aa:
006441AA  38 9E 7C 02 00 00         CMP byte ptr [ESI + 0x27c],BL
LAB_006441b0:
006441B0  75 3D                     JNZ 0x006441ef
006441B2  8B 96 74 02 00 00         MOV EDX,dword ptr [ESI + 0x274]
006441B8  8D 4D FC                  LEA ECX,[EBP + -0x4]
006441BB  51                        PUSH ECX
006441BC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006441C2  52                        PUSH EDX
006441C3  E8 08 21 0A 00            CALL 0x006e62d0
006441C8  83 F8 FC                  CMP EAX,-0x4
006441CB  75 10                     JNZ 0x006441dd
006441CD  C6 86 7C 02 00 00 FA      MOV byte ptr [ESI + 0x27c],0xfa
006441D4  5F                        POP EDI
006441D5  5E                        POP ESI
006441D6  33 C0                     XOR EAX,EAX
006441D8  5B                        POP EBX
006441D9  8B E5                     MOV ESP,EBP
006441DB  5D                        POP EBP
006441DC  C3                        RET
LAB_006441dd:
006441DD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006441E0  8B 96 78 02 00 00         MOV EDX,dword ptr [ESI + 0x278]
006441E6  52                        PUSH EDX
006441E7  8B 01                     MOV EAX,dword ptr [ECX]
006441E9  FF 90 E4 00 00 00         CALL dword ptr [EAX + 0xe4]
LAB_006441ef:
006441EF  33 C0                     XOR EAX,EAX
006441F1  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
006441F7  8A 86 7C 02 00 00         MOV AL,byte ptr [ESI + 0x27c]
006441FD  8B CF                     MOV ECX,EDI
006441FF  50                        PUSH EAX
00644200  6A 00                     PUSH 0x0
00644202  E8 5D CE DB FF            CALL 0x00401064
00644207  85 C0                     TEST EAX,EAX
00644209  74 0A                     JZ 0x00644215
0064420B  5F                        POP EDI
0064420C  5E                        POP ESI
0064420D  83 C8 FF                  OR EAX,0xffffffff
00644210  5B                        POP EBX
00644211  8B E5                     MOV ESP,EBP
00644213  5D                        POP EBP
00644214  C3                        RET
LAB_00644215:
00644215  6A 00                     PUSH 0x0
00644217  8B CF                     MOV ECX,EDI
00644219  E8 9E EE DB FF            CALL 0x004030bc
0064421E  85 C0                     TEST EAX,EAX
00644220  74 0A                     JZ 0x0064422c
00644222  5F                        POP EDI
00644223  5E                        POP ESI
00644224  83 C8 FF                  OR EAX,0xffffffff
00644227  5B                        POP EBX
00644228  8B E5                     MOV ESP,EBP
0064422A  5D                        POP EBP
0064422B  C3                        RET
LAB_0064422c:
0064422C  33 DB                     XOR EBX,EBX
0064422E  6A 01                     PUSH 0x1
00644230  8A 9E 7C 02 00 00         MOV BL,byte ptr [ESI + 0x27c]
00644236  8B CF                     MOV ECX,EDI
00644238  E8 6F E0 DB FF            CALL 0x004022ac
0064423D  3B C3                     CMP EAX,EBX
0064423F  7E 2F                     JLE 0x00644270
00644241  53                        PUSH EBX
00644242  6A 01                     PUSH 0x1
00644244  8B CF                     MOV ECX,EDI
00644246  E8 19 CE DB FF            CALL 0x00401064
0064424B  85 C0                     TEST EAX,EAX
0064424D  74 0A                     JZ 0x00644259
0064424F  5F                        POP EDI
00644250  5E                        POP ESI
00644251  83 C8 FF                  OR EAX,0xffffffff
00644254  5B                        POP EBX
00644255  8B E5                     MOV ESP,EBP
00644257  5D                        POP EBP
00644258  C3                        RET
LAB_00644259:
00644259  6A 01                     PUSH 0x1
0064425B  8B CF                     MOV ECX,EDI
0064425D  E8 5A EE DB FF            CALL 0x004030bc
00644262  85 C0                     TEST EAX,EAX
00644264  74 0A                     JZ 0x00644270
00644266  5F                        POP EDI
00644267  5E                        POP ESI
00644268  83 C8 FF                  OR EAX,0xffffffff
0064426B  5B                        POP EBX
0064426C  8B E5                     MOV ESP,EBP
0064426E  5D                        POP EBP
0064426F  C3                        RET
LAB_00644270:
00644270  6A 01                     PUSH 0x1
00644272  8B CF                     MOV ECX,EDI
00644274  E8 33 E0 DB FF            CALL 0x004022ac
00644279  33 C9                     XOR ECX,ECX
0064427B  8A 8E 7C 02 00 00         MOV CL,byte ptr [ESI + 0x27c]
00644281  49                        DEC ECX
00644282  3B C1                     CMP EAX,ECX
00644284  75 09                     JNZ 0x0064428f
LAB_00644286:
00644286  6A 01                     PUSH 0x1
00644288  8B CF                     MOV ECX,EDI
0064428A  E8 D5 FF DB FF            CALL 0x00404264
LAB_0064428f:
0064428F  8B CE                     MOV ECX,ESI
00644291  E8 A7 0D DC FF            CALL 0x0040503d
00644296  5F                        POP EDI
00644297  5E                        POP ESI
00644298  5B                        POP EBX
00644299  8B E5                     MOV ESP,EBP
0064429B  5D                        POP EBP
0064429C  C3                        RET
