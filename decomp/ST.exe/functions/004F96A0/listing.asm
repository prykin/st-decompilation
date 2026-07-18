FUN_004f96a0:
004F96A0  55                        PUSH EBP
004F96A1  8B EC                     MOV EBP,ESP
004F96A3  83 EC 50                  SUB ESP,0x50
004F96A6  66 83 3D F7 C4 80 00 01   CMP word ptr [0x0080c4f7],0x1
004F96AE  53                        PUSH EBX
004F96AF  56                        PUSH ESI
004F96B0  57                        PUSH EDI
004F96B1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F96B4  0F 85 B5 04 00 00         JNZ 0x004f9b6f
004F96BA  8B 81 4B 02 00 00         MOV EAX,dword ptr [ECX + 0x24b]
004F96C0  85 C0                     TEST EAX,EAX
004F96C2  0F 84 A7 04 00 00         JZ 0x004f9b6f
004F96C8  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F96CD  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004F96D0  8D 4D B0                  LEA ECX,[EBP + -0x50]
004F96D3  6A 00                     PUSH 0x0
004F96D5  52                        PUSH EDX
004F96D6  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004F96D9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F96DF  E8 0C 41 23 00            CALL 0x0072d7f0
004F96E4  8B F0                     MOV ESI,EAX
004F96E6  83 C4 08                  ADD ESP,0x8
004F96E9  85 F6                     TEST ESI,ESI
004F96EB  0F 85 3F 04 00 00         JNZ 0x004f9b30
004F96F1  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004F96F4  8B 86 4B 02 00 00         MOV EAX,dword ptr [ESI + 0x24b]
004F96FA  8B 8E 4F 02 00 00         MOV ECX,dword ptr [ESI + 0x24f]
004F9700  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004F9703  3B CA                     CMP ECX,EDX
004F9705  0F 83 15 04 00 00         JNC 0x004f9b20
LAB_004f970b:
004F970B  8B 8E 4F 02 00 00         MOV ECX,dword ptr [ESI + 0x24f]
004F9711  3B CA                     CMP ECX,EDX
004F9713  73 0B                     JNC 0x004f9720
004F9715  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
004F9718  0F AF F9                  IMUL EDI,ECX
004F971B  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
004F971E  EB 02                     JMP 0x004f9722
LAB_004f9720:
004F9720  33 FF                     XOR EDI,EDI
LAB_004f9722:
004F9722  8B 86 53 02 00 00         MOV EAX,dword ptr [ESI + 0x253]
004F9728  8B 96 57 02 00 00         MOV EDX,dword ptr [ESI + 0x257]
004F972E  8B 4F 01                  MOV ECX,dword ptr [EDI + 0x1]
004F9731  2B C2                     SUB EAX,EDX
004F9733  3B C8                     CMP ECX,EAX
004F9735  0F 87 E5 03 00 00         JA 0x004f9b20
004F973B  33 C0                     XOR EAX,EAX
004F973D  8A 07                     MOV AL,byte ptr [EDI]
004F973F  48                        DEC EAX
004F9740  83 F8 03                  CMP EAX,0x3
004F9743  0F 87 B7 03 00 00         JA 0x004f9b00
switchD_004f9749::switchD:
004F9749  FF 24 85 78 9B 4F 00      JMP dword ptr [EAX*0x4 + 0x4f9b78]
switchD_004f9749::caseD_1:
004F9750  8B 4F 05                  MOV ECX,dword ptr [EDI + 0x5]
004F9753  6A 00                     PUSH 0x0
004F9755  6A 00                     PUSH 0x0
004F9757  83 C7 09                  ADD EDI,0x9
004F975A  51                        PUSH ECX
004F975B  57                        PUSH EDI
004F975C  6A 0C                     PUSH 0xc
004F975E  B9 58 76 80 00            MOV ECX,0x807658
004F9763  E8 70 B4 F0 FF            CALL 0x00404bd8
004F9768  E9 93 03 00 00            JMP 0x004f9b00
switchD_004f9749::caseD_2:
004F976D  8B 8E D8 01 00 00         MOV ECX,dword ptr [ESI + 0x1d8]
004F9773  85 C9                     TEST ECX,ECX
004F9775  74 1E                     JZ 0x004f9795
004F9777  E8 E4 A8 21 00            CALL 0x00714060
004F977C  8B 96 D8 01 00 00         MOV EDX,dword ptr [ESI + 0x1d8]
004F9782  52                        PUSH EDX
004F9783  E8 28 4B 23 00            CALL 0x0072e2b0
004F9788  83 C4 04                  ADD ESP,0x4
004F978B  C7 86 D8 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1d8],0x0
LAB_004f9795:
004F9795  8B 86 B4 01 00 00         MOV EAX,dword ptr [ESI + 0x1b4]
004F979B  6A 00                     PUSH 0x0
004F979D  6A 55                     PUSH 0x55
004F979F  68 26 02 00 00            PUSH 0x226
004F97A4  6A 05                     PUSH 0x5
004F97A6  6A 64                     PUSH 0x64
004F97A8  6A 00                     PUSH 0x0
004F97AA  50                        PUSH EAX
004F97AB  E8 C0 A9 1B 00            CALL 0x006b4170
004F97B0  6A 0A                     PUSH 0xa
004F97B2  6A 0A                     PUSH 0xa
004F97B4  6A 00                     PUSH 0x0
004F97B6  E8 35 BD 1B 00            CALL 0x006b54f0
004F97BB  8B 15 C7 C4 80 00         MOV EDX,dword ptr [0x0080c4c7]
004F97C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F97C4  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
004F97C7  85 C0                     TEST EAX,EAX
004F97C9  7E 0A                     JLE 0x004f97d5
004F97CB  8B 4F 06                  MOV ECX,dword ptr [EDI + 0x6]
004F97CE  03 C8                     ADD ECX,EAX
004F97D0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F97D3  EB 06                     JMP 0x004f97db
LAB_004f97d5:
004F97D5  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
004F97D8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_004f97db:
004F97DB  8B 5F 06                  MOV EBX,dword ptr [EDI + 0x6]
004F97DE  3B D9                     CMP EBX,ECX
004F97E0  7D 31                     JGE 0x004f9813
004F97E2  EB 06                     JMP 0x004f97ea
LAB_004f97e4:
004F97E4  8B 15 C7 C4 80 00         MOV EDX,dword ptr [0x0080c4c7]
LAB_004f97ea:
004F97EA  3B 5A 08                  CMP EBX,dword ptr [EDX + 0x8]
004F97ED  7D 08                     JGE 0x004f97f7
004F97EF  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
004F97F2  8B 04 9A                  MOV EAX,dword ptr [EDX + EBX*0x4]
004F97F5  EB 02                     JMP 0x004f97f9
LAB_004f97f7:
004F97F7  33 C0                     XOR EAX,EAX
LAB_004f97f9:
004F97F9  68 60 22 7C 00            PUSH 0x7c2260
004F97FE  50                        PUSH EAX
004F97FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F9802  50                        PUSH EAX
004F9803  E8 98 7D F0 FF            CALL 0x004015a0
004F9808  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F980B  83 C4 0C                  ADD ESP,0xc
004F980E  43                        INC EBX
004F980F  3B D8                     CMP EBX,EAX
004F9811  7C D1                     JL 0x004f97e4
LAB_004f9813:
004F9813  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F9816  6A 01                     PUSH 0x1
004F9818  6A 00                     PUSH 0x0
004F981A  6A FF                     PUSH -0x1
004F981C  6A 00                     PUSH 0x0
004F981E  68 26 02 00 00            PUSH 0x226
004F9823  68 EC 21 7C 00            PUSH 0x7c21ec
004F9828  68 D8 21 7C 00            PUSH 0x7c21d8
004F982D  51                        PUSH ECX
004F982E  8B 8E D4 01 00 00         MOV ECX,dword ptr [ESI + 0x1d4]
004F9834  E8 A7 8E 21 00            CALL 0x007126e0
004F9839  8B D8                     MOV EBX,EAX
004F983B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F983E  85 C0                     TEST EAX,EAX
004F9840  74 06                     JZ 0x004f9848
004F9842  50                        PUSH EAX
004F9843  E8 28 BD 1B 00            CALL 0x006b5570
LAB_004f9848:
004F9848  85 DB                     TEST EBX,EBX
004F984A  74 05                     JZ 0x004f9851
004F984C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004F984F  EB 0E                     JMP 0x004f985f
LAB_004f9851:
004F9851  6A 01                     PUSH 0x1
004F9853  6A 01                     PUSH 0x1
004F9855  6A 00                     PUSH 0x0
004F9857  E8 94 BC 1B 00            CALL 0x006b54f0
004F985C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004f985f:
004F985F  8A 47 05                  MOV AL,byte ptr [EDI + 0x5]
004F9862  84 C0                     TEST AL,AL
004F9864  0F 84 8A 00 00 00         JZ 0x004f98f4
004F986A  8B 96 B4 01 00 00         MOV EDX,dword ptr [ESI + 0x1b4]
004F9870  8B 8E D4 01 00 00         MOV ECX,dword ptr [ESI + 0x1d4]
004F9876  6A 55                     PUSH 0x55
004F9878  68 26 02 00 00            PUSH 0x226
004F987D  6A 05                     PUSH 0x5
004F987F  6A 64                     PUSH 0x64
004F9881  6A 00                     PUSH 0x0
004F9883  52                        PUSH EDX
004F9884  E8 07 72 21 00            CALL 0x00710a90
004F9889  68 B4 00 00 00            PUSH 0xb4
004F988E  E8 9D 4C 23 00            CALL 0x0072e530
004F9893  33 D2                     XOR EDX,EDX
004F9895  83 C4 04                  ADD ESP,0x4
004F9898  3B C2                     CMP EAX,EDX
004F989A  74 0D                     JZ 0x004f98a9
004F989C  89 50 58                  MOV dword ptr [EAX + 0x58],EDX
004F989F  89 90 88 00 00 00         MOV dword ptr [EAX + 0x88],EDX
004F98A5  8B C8                     MOV ECX,EAX
004F98A7  EB 02                     JMP 0x004f98ab
LAB_004f98a9:
004F98A9  33 C9                     XOR ECX,ECX
LAB_004f98ab:
004F98AB  68 FF 00 00 00            PUSH 0xff
004F98B0  6A 02                     PUSH 0x2
004F98B2  6A 01                     PUSH 0x1
004F98B4  8B 86 D4 01 00 00         MOV EAX,dword ptr [ESI + 0x1d4]
004F98BA  52                        PUSH EDX
004F98BB  52                        PUSH EDX
004F98BC  52                        PUSH EDX
004F98BD  6A 55                     PUSH 0x55
004F98BF  68 26 02 00 00            PUSH 0x226
004F98C4  52                        PUSH EDX
004F98C5  52                        PUSH EDX
004F98C6  52                        PUSH EDX
004F98C7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004F98CA  50                        PUSH EAX
004F98CB  52                        PUSH EDX
004F98CC  89 8E D8 01 00 00         MOV dword ptr [ESI + 0x1d8],ECX
004F98D2  E8 59 A6 21 00            CALL 0x00713f30
004F98D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F98DA  89 86 DC 01 00 00         MOV dword ptr [ESI + 0x1dc],EAX
004F98E0  8A 47 0E                  MOV AL,byte ptr [EDI + 0xe]
004F98E3  51                        PUSH ECX
004F98E4  88 86 E0 01 00 00         MOV byte ptr [ESI + 0x1e0],AL
004F98EA  E8 81 BC 1B 00            CALL 0x006b5570
004F98EF  E9 0C 02 00 00            JMP 0x004f9b00
LAB_004f98f4:
004F98F4  8B 8E B4 01 00 00         MOV ECX,dword ptr [ESI + 0x1b4]
004F98FA  6A 00                     PUSH 0x0
004F98FC  6A 55                     PUSH 0x55
004F98FE  68 26 02 00 00            PUSH 0x226
004F9903  6A 05                     PUSH 0x5
004F9905  6A 64                     PUSH 0x64
004F9907  6A 00                     PUSH 0x0
004F9909  51                        PUSH ECX
004F990A  8B 8E D4 01 00 00         MOV ECX,dword ptr [ESI + 0x1d4]
004F9910  E8 8B 72 21 00            CALL 0x00710ba0
004F9915  8B D8                     MOV EBX,EAX
004F9917  85 DB                     TEST EBX,EBX
004F9919  74 4B                     JZ 0x004f9966
004F991B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004F991E  8B 8E D4 01 00 00         MOV ECX,dword ptr [ESI + 0x1d4]
004F9924  6A 00                     PUSH 0x0
004F9926  6A 00                     PUSH 0x0
004F9928  6A 00                     PUSH 0x0
004F992A  6A FF                     PUSH -0x1
004F992C  6A 00                     PUSH 0x0
004F992E  52                        PUSH EDX
004F992F  E8 3C 86 21 00            CALL 0x00711f70
004F9934  8B 86 B4 01 00 00         MOV EAX,dword ptr [ESI + 0x1b4]
004F993A  53                        PUSH EBX
004F993B  6A 01                     PUSH 0x1
004F993D  6A 05                     PUSH 0x5
004F993F  6A 64                     PUSH 0x64
004F9941  50                        PUSH EAX
004F9942  E8 E2 98 F0 FF            CALL 0x00403229
004F9947  8B 8E D4 01 00 00         MOV ECX,dword ptr [ESI + 0x1d4]
004F994D  83 C4 14                  ADD ESP,0x14
004F9950  E8 AB 75 21 00            CALL 0x00710f00
004F9955  8A 47 0E                  MOV AL,byte ptr [EDI + 0xe]
004F9958  84 C0                     TEST AL,AL
004F995A  74 0A                     JZ 0x004f9966
004F995C  6A 1E                     PUSH 0x1e
004F995E  E8 CC C4 F0 FF            CALL 0x00405e2f
004F9963  83 C4 04                  ADD ESP,0x4
LAB_004f9966:
004F9966  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F9969  51                        PUSH ECX
004F996A  E8 01 BC 1B 00            CALL 0x006b5570
004F996F  E9 8C 01 00 00            JMP 0x004f9b00
switchD_004f9749::caseD_3:
004F9974  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
004F997A  8D 9E 5B 02 00 00         LEA EBX,[ESI + 0x25b]
004F9980  85 C0                     TEST EAX,EAX
004F9982  74 09                     JZ 0x004f998d
004F9984  53                        PUSH EBX
004F9985  E8 76 1C 21 00            CALL 0x0070b600
004F998A  83 C4 04                  ADD ESP,0x4
LAB_004f998d:
004F998D  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004F9992  85 C0                     TEST EAX,EAX
004F9994  0F 84 9A 00 00 00         JZ 0x004f9a34
004F999A  6A 01                     PUSH 0x1
004F999C  6A 00                     PUSH 0x0
004F999E  6A 06                     PUSH 0x6
004F99A0  6A 01                     PUSH 0x1
004F99A2  6A 00                     PUSH 0x0
004F99A4  6A 00                     PUSH 0x0
004F99A6  E8 F7 9C F0 FF            CALL 0x004036a2
004F99AB  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
004F99B1  83 C4 0C                  ADD ESP,0xc
004F99B4  50                        PUSH EAX
004F99B5  52                        PUSH EDX
004F99B6  E8 75 1A 21 00            CALL 0x0070b430
004F99BB  89 03                     MOV dword ptr [EBX],EAX
004F99BD  8D 47 0A                  LEA EAX,[EDI + 0xa]
004F99C0  C6 86 60 02 00 00 05      MOV byte ptr [ESI + 0x260],0x5
004F99C7  C6 86 5F 02 00 00 00      MOV byte ptr [ESI + 0x25f],0x0
004F99CE  8A 08                     MOV CL,byte ptr [EAX]
004F99D0  83 C4 14                  ADD ESP,0x14
004F99D3  84 C9                     TEST CL,CL
004F99D5  6A 1F                     PUSH 0x1f
004F99D7  74 19                     JZ 0x004f99f2
004F99D9  50                        PUSH EAX
004F99DA  8D 86 65 02 00 00         LEA EAX,[ESI + 0x265]
004F99E0  50                        PUSH EAX
004F99E1  E8 5A 49 23 00            CALL 0x0072e340
004F99E6  83 C4 0C                  ADD ESP,0xc
004F99E9  C6 86 85 02 00 00 00      MOV byte ptr [ESI + 0x285],0x0
004F99F0  EB 29                     JMP 0x004f9a1b
LAB_004f99f2:
004F99F2  8A 4F 09                  MOV CL,byte ptr [EDI + 0x9]
004F99F5  8B 57 05                  MOV EDX,dword ptr [EDI + 0x5]
004F99F8  6A 00                     PUSH 0x0
004F99FA  51                        PUSH ECX
004F99FB  52                        PUSH EDX
004F99FC  E8 A1 9C F0 FF            CALL 0x004036a2
004F9A01  83 C4 0C                  ADD ESP,0xc
004F9A04  50                        PUSH EAX
004F9A05  8D 86 65 02 00 00         LEA EAX,[ESI + 0x265]
004F9A0B  50                        PUSH EAX
004F9A0C  E8 2F 49 23 00            CALL 0x0072e340
004F9A11  83 C4 0C                  ADD ESP,0xc
004F9A14  C6 86 85 02 00 00 01      MOV byte ptr [ESI + 0x285],0x1
LAB_004f9a1b:
004F9A1B  68 B3 00 00 00            PUSH 0xb3
004F9A20  C6 86 84 02 00 00 00      MOV byte ptr [ESI + 0x284],0x0
004F9A27  E8 03 C4 F0 FF            CALL 0x00405e2f
004F9A2C  83 C4 04                  ADD ESP,0x4
004F9A2F  E9 CC 00 00 00            JMP 0x004f9b00
LAB_004f9a34:
004F9A34  8A 4F 0A                  MOV CL,byte ptr [EDI + 0xa]
004F9A37  8D 47 0A                  LEA EAX,[EDI + 0xa]
004F9A3A  84 C9                     TEST CL,CL
004F9A3C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F9A3F  74 2B                     JZ 0x004f9a6c
004F9A41  8B 0D 58 67 80 00         MOV ECX,dword ptr [0x00806758]
004F9A47  6A 00                     PUSH 0x0
004F9A49  6A 00                     PUSH 0x0
004F9A4B  6A 06                     PUSH 0x6
004F9A4D  50                        PUSH EAX
004F9A4E  51                        PUSH ECX
004F9A4F  E8 DC 19 21 00            CALL 0x0070b430
004F9A54  83 C4 14                  ADD ESP,0x14
004F9A57  89 03                     MOV dword ptr [EBX],EAX
004F9A59  85 C0                     TEST EAX,EAX
004F9A5B  75 38                     JNZ 0x004f9a95
004F9A5D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F9A60  50                        PUSH EAX
004F9A61  50                        PUSH EAX
004F9A62  A1 98 67 80 00            MOV EAX,[0x00806798]
004F9A67  6A 06                     PUSH 0x6
004F9A69  52                        PUSH EDX
004F9A6A  EB 1E                     JMP 0x004f9a8a
LAB_004f9a6c:
004F9A6C  8A 4F 09                  MOV CL,byte ptr [EDI + 0x9]
004F9A6F  8B 57 05                  MOV EDX,dword ptr [EDI + 0x5]
004F9A72  6A 01                     PUSH 0x1
004F9A74  6A 00                     PUSH 0x0
004F9A76  6A 06                     PUSH 0x6
004F9A78  6A 00                     PUSH 0x0
004F9A7A  51                        PUSH ECX
004F9A7B  52                        PUSH EDX
004F9A7C  E8 21 9C F0 FF            CALL 0x004036a2
004F9A81  83 C4 0C                  ADD ESP,0xc
004F9A84  50                        PUSH EAX
004F9A85  A1 90 67 80 00            MOV EAX,[0x00806790]
LAB_004f9a8a:
004F9A8A  50                        PUSH EAX
004F9A8B  E8 A0 19 21 00            CALL 0x0070b430
004F9A90  83 C4 14                  ADD ESP,0x14
004F9A93  89 03                     MOV dword ptr [EBX],EAX
LAB_004f9a95:
004F9A95  83 3B 00                  CMP dword ptr [EBX],0x0
004F9A98  75 26                     JNZ 0x004f9ac0
004F9A9A  6A 01                     PUSH 0x1
004F9A9C  6A 00                     PUSH 0x0
004F9A9E  6A 06                     PUSH 0x6
004F9AA0  6A 00                     PUSH 0x0
004F9AA2  6A 00                     PUSH 0x0
004F9AA4  6A 00                     PUSH 0x0
004F9AA6  E8 F7 9B F0 FF            CALL 0x004036a2
004F9AAB  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F9AB1  83 C4 0C                  ADD ESP,0xc
004F9AB4  50                        PUSH EAX
004F9AB5  51                        PUSH ECX
004F9AB6  E8 75 19 21 00            CALL 0x0070b430
004F9ABB  83 C4 14                  ADD ESP,0x14
004F9ABE  89 03                     MOV dword ptr [EBX],EAX
LAB_004f9ac0:
004F9AC0  8B CE                     MOV ECX,ESI
004F9AC2  C6 86 5F 02 00 00 00      MOV byte ptr [ESI + 0x25f],0x0
004F9AC9  E8 20 C3 F0 FF            CALL 0x00405dee
004F9ACE  EB 30                     JMP 0x004f9b00
switchD_004f9749::caseD_4:
004F9AD0  C7 46 28 C6 5D 00 00      MOV dword ptr [ESI + 0x28],0x5dc6
004F9AD7  C7 46 2C D7 C4 80 00      MOV dword ptr [ESI + 0x2c],0x80c4d7
004F9ADE  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004F9AE4  85 C9                     TEST ECX,ECX
004F9AE6  74 08                     JZ 0x004f9af0
004F9AE8  8B 11                     MOV EDX,dword ptr [ECX]
004F9AEA  8D 46 18                  LEA EAX,[ESI + 0x18]
004F9AED  50                        PUSH EAX
004F9AEE  FF 12                     CALL dword ptr [EDX]
LAB_004f9af0:
004F9AF0  C6 86 60 02 00 00 04      MOV byte ptr [ESI + 0x260],0x4
004F9AF7  66 C7 05 F7 C4 80 00 04 00  MOV word ptr [0x0080c4f7],0x4
switchD_004f9749::default:
004F9B00  8B 9E 4F 02 00 00         MOV EBX,dword ptr [ESI + 0x24f]
004F9B06  8B 86 4B 02 00 00         MOV EAX,dword ptr [ESI + 0x24b]
004F9B0C  43                        INC EBX
004F9B0D  89 9E 4F 02 00 00         MOV dword ptr [ESI + 0x24f],EBX
004F9B13  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004F9B16  8B CB                     MOV ECX,EBX
004F9B18  3B CA                     CMP ECX,EDX
004F9B1A  0F 82 EB FB FF FF         JC 0x004f970b
LAB_004f9b20:
004F9B20  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004F9B23  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F9B29  5F                        POP EDI
004F9B2A  5E                        POP ESI
004F9B2B  5B                        POP EBX
004F9B2C  8B E5                     MOV ESP,EBP
004F9B2E  5D                        POP EBP
004F9B2F  C3                        RET
LAB_004f9b30:
004F9B30  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004F9B33  68 48 22 7C 00            PUSH 0x7c2248
004F9B38  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F9B3D  56                        PUSH ESI
004F9B3E  6A 00                     PUSH 0x0
004F9B40  68 B0 03 00 00            PUSH 0x3b0
004F9B45  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9B4A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F9B50  E8 7B 39 1B 00            CALL 0x006ad4d0
004F9B55  83 C4 18                  ADD ESP,0x18
004F9B58  85 C0                     TEST EAX,EAX
004F9B5A  74 01                     JZ 0x004f9b5d
004F9B5C  CC                        INT3
LAB_004f9b5d:
004F9B5D  68 B0 03 00 00            PUSH 0x3b0
004F9B62  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9B67  6A 00                     PUSH 0x0
004F9B69  56                        PUSH ESI
004F9B6A  E8 D1 C2 1A 00            CALL 0x006a5e40
LAB_004f9b6f:
004F9B6F  5F                        POP EDI
004F9B70  5E                        POP ESI
004F9B71  5B                        POP EBX
004F9B72  8B E5                     MOV ESP,EBP
004F9B74  5D                        POP EBP
004F9B75  C3                        RET
