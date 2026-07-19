DumpClassC::GetMessage:
00495980  55                        PUSH EBP
00495981  8B EC                     MOV EBP,ESP
00495983  81 EC 8C 00 00 00         SUB ESP,0x8c
00495989  56                        PUSH ESI
0049598A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0049598D  57                        PUSH EDI
0049598E  56                        PUSH ESI
0049598F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00495992  E8 39 06 25 00            CALL 0x006e5fd0
00495997  8B 76 10                  MOV ESI,dword ptr [ESI + 0x10]
0049599A  8D 46 FE                  LEA EAX,[ESI + -0x2]
0049599D  83 F8 07                  CMP EAX,0x7
004959A0  0F 87 4B 02 00 00         JA 0x00495bf1
switchD_004959a6::switchD:
004959A6  FF 24 85 30 5D 49 00      JMP dword ptr [EAX*0x4 + 0x495d30]
switchD_004959a6::caseD_2:
004959AD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004959B2  8D 55 BC                  LEA EDX,[EBP + -0x44]
004959B5  8D 4D B8                  LEA ECX,[EBP + -0x48]
004959B8  6A 00                     PUSH 0x0
004959BA  52                        PUSH EDX
004959BB  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004959BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004959C4  E8 27 7E 29 00            CALL 0x0072d7f0
004959C9  8B F0                     MOV ESI,EAX
004959CB  83 C4 08                  ADD ESP,0x8
004959CE  85 F6                     TEST ESI,ESI
004959D0  0F 85 25 02 00 00         JNZ 0x00495bfb
004959D6  A1 50 67 80 00            MOV EAX,[0x00806750]
004959DB  66 8B 08                  MOV CX,word ptr [EAX]
004959DE  66 89 0D 78 B2 7F 00      MOV word ptr [0x007fb278],CX
004959E5  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
004959E9  66 89 15 7A B2 7F 00      MOV word ptr [0x007fb27a],DX
004959F0  66 C7 05 7C B2 7F 00 05 00  MOV word ptr [0x007fb27c],0x5
004959F9  66 8B 30                  MOV SI,word ptr [EAX]
004959FC  66 0F AF 70 02            IMUL SI,word ptr [EAX + 0x2]
00495A01  0F BF C2                  MOVSX EAX,DX
00495A04  0F BF C9                  MOVSX ECX,CX
00495A07  0F AF C1                  IMUL EAX,ECX
00495A0A  66 89 35 7E B2 7F 00      MOV word ptr [0x007fb27e],SI
00495A11  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00495A14  D1 E2                     SHL EDX,0x1
00495A16  52                        PUSH EDX
00495A17  E8 54 52 21 00            CALL 0x006aac70
00495A1C  8B F8                     MOV EDI,EAX
00495A1E  85 FF                     TEST EDI,EDI
00495A20  89 3D 80 B2 7F 00         MOV dword ptr [0x007fb280],EDI
00495A26  75 1A                     JNZ 0x00495a42
00495A28  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00495A2D  6A 2B                     PUSH 0x2b
00495A2F  68 D4 BD 7A 00            PUSH 0x7abdd4
00495A34  50                        PUSH EAX
00495A35  6A FF                     PUSH -0x1
00495A37  E8 04 04 21 00            CALL 0x006a5e40
00495A3C  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
LAB_00495a42:
00495A42  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00495A49  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
00495A50  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00495A57  0F AF CA                  IMUL ECX,EDX
00495A5A  0F AF C8                  IMUL ECX,EAX
00495A5D  D1 E1                     SHL ECX,0x1
00495A5F  8B D1                     MOV EDX,ECX
00495A61  33 C0                     XOR EAX,EAX
00495A63  C1 E9 02                  SHR ECX,0x2
00495A66  F3 AB                     STOSD.REP ES:EDI
00495A68  8B CA                     MOV ECX,EDX
00495A6A  83 E1 03                  AND ECX,0x3
00495A6D  F3 AA                     STOSB.REP ES:EDI
00495A6F  66 8B 0D 7A B2 7F 00      MOV CX,word ptr [0x007fb27a]
00495A76  66 8B 15 7C B2 7F 00      MOV DX,word ptr [0x007fb27c]
00495A7D  66 89 0D 32 B2 7F 00      MOV word ptr [0x007fb232],CX
00495A84  66 89 15 34 B2 7F 00      MOV word ptr [0x007fb234],DX
00495A8B  66 A1 78 B2 7F 00         MOV AX,[0x007fb278]
00495A91  66 8B 35 7E B2 7F 00      MOV SI,word ptr [0x007fb27e]
00495A98  0F BF D2                  MOVSX EDX,DX
00495A9B  0F BF C9                  MOVSX ECX,CX
00495A9E  0F AF D1                  IMUL EDX,ECX
00495AA1  66 A3 30 B2 7F 00         MOV [0x007fb230],AX
00495AA7  66 89 35 36 B2 7F 00      MOV word ptr [0x007fb236],SI
00495AAE  0F BF C0                  MOVSX EAX,AX
00495AB1  0F AF D0                  IMUL EDX,EAX
00495AB4  D1 E2                     SHL EDX,0x1
00495AB6  52                        PUSH EDX
00495AB7  E8 B4 51 21 00            CALL 0x006aac70
00495ABC  85 C0                     TEST EAX,EAX
00495ABE  A3 38 B2 7F 00            MOV [0x007fb238],EAX
00495AC3  75 15                     JNZ 0x00495ada
00495AC5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00495ACB  6A 30                     PUSH 0x30
00495ACD  68 D4 BD 7A 00            PUSH 0x7abdd4
00495AD2  51                        PUSH ECX
00495AD3  6A FF                     PUSH -0x1
00495AD5  E8 66 03 21 00            CALL 0x006a5e40
LAB_00495ada:
00495ADA  66 8B 0D 7A B2 7F 00      MOV CX,word ptr [0x007fb27a]
00495AE1  66 8B 15 7C B2 7F 00      MOV DX,word ptr [0x007fb27c]
00495AE8  66 89 0D 42 B2 7F 00      MOV word ptr [0x007fb242],CX
00495AEF  66 89 15 44 B2 7F 00      MOV word ptr [0x007fb244],DX
00495AF6  66 A1 78 B2 7F 00         MOV AX,[0x007fb278]
00495AFC  66 8B 35 7E B2 7F 00      MOV SI,word ptr [0x007fb27e]
00495B03  0F BF D2                  MOVSX EDX,DX
00495B06  0F BF C9                  MOVSX ECX,CX
00495B09  0F AF D1                  IMUL EDX,ECX
00495B0C  66 A3 40 B2 7F 00         MOV [0x007fb240],AX
00495B12  66 89 35 46 B2 7F 00      MOV word ptr [0x007fb246],SI
00495B19  0F BF C0                  MOVSX EAX,AX
00495B1C  0F AF D0                  IMUL EDX,EAX
00495B1F  C1 E2 03                  SHL EDX,0x3
00495B22  52                        PUSH EDX
00495B23  E8 48 51 21 00            CALL 0x006aac70
00495B28  8B F8                     MOV EDI,EAX
00495B2A  85 FF                     TEST EDI,EDI
00495B2C  89 3D 48 B2 7F 00         MOV dword ptr [0x007fb248],EDI
00495B32  75 1B                     JNZ 0x00495b4f
00495B34  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00495B3A  6A 34                     PUSH 0x34
00495B3C  68 D4 BD 7A 00            PUSH 0x7abdd4
00495B41  51                        PUSH ECX
00495B42  6A FF                     PUSH -0x1
00495B44  E8 F7 02 21 00            CALL 0x006a5e40
00495B49  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
LAB_00495b4f:
00495B4F  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
00495B56  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00495B5D  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00495B64  0F AF CA                  IMUL ECX,EDX
00495B67  0F AF C8                  IMUL ECX,EAX
00495B6A  C1 E1 03                  SHL ECX,0x3
00495B6D  8B D1                     MOV EDX,ECX
00495B6F  33 C0                     XOR EAX,EAX
00495B71  C1 E9 02                  SHR ECX,0x2
00495B74  F3 AB                     STOSD.REP ES:EDI
00495B76  8B CA                     MOV ECX,EDX
00495B78  83 E1 03                  AND ECX,0x3
00495B7B  F3 AA                     STOSB.REP ES:EDI
00495B7D  0F BF 05 32 B2 7F 00      MOVSX EAX,word ptr [0x007fb232]
00495B84  0F BF 0D 30 B2 7F 00      MOVSX ECX,word ptr [0x007fb230]
00495B8B  0F AF C1                  IMUL EAX,ECX
00495B8E  50                        PUSH EAX
00495B8F  E8 DC 50 21 00            CALL 0x006aac70
00495B94  0F BF 0D 32 B2 7F 00      MOVSX ECX,word ptr [0x007fb232]
00495B9B  0F BF 15 30 B2 7F 00      MOVSX EDX,word ptr [0x007fb230]
00495BA2  0F AF CA                  IMUL ECX,EDX
00495BA5  8B D1                     MOV EDX,ECX
00495BA7  8B F8                     MOV EDI,EAX
00495BA9  33 C0                     XOR EAX,EAX
00495BAB  89 3D 6C B2 7F 00         MOV dword ptr [0x007fb26c],EDI
00495BB1  C1 E9 02                  SHR ECX,0x2
00495BB4  F3 AB                     STOSD.REP ES:EDI
00495BB6  8B CA                     MOV ECX,EDX
00495BB8  6A 0A                     PUSH 0xa
00495BBA  83 E1 03                  AND ECX,0x3
00495BBD  6A 18                     PUSH 0x18
00495BBF  6A 0A                     PUSH 0xa
00495BC1  6A 00                     PUSH 0x0
00495BC3  F3 AA                     STOSB.REP ES:EDI
00495BC5  E8 C6 86 21 00            CALL 0x006ae290
00495BCA  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00495BD0  A3 70 B2 7F 00            MOV [0x007fb270],EAX
00495BD5  E8 48 F1 F6 FF            CALL 0x00404d22
00495BDA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00495BDD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00495BE2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00495BE5  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00495BE8  51                        PUSH ECX
00495BE9  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00495BEC  E8 4F F1 24 00            CALL 0x006e4d40
switchD_004959a6::caseD_4:
00495BF1  33 C0                     XOR EAX,EAX
00495BF3  5F                        POP EDI
00495BF4  5E                        POP ESI
00495BF5  8B E5                     MOV ESP,EBP
00495BF7  5D                        POP EBP
00495BF8  C2 04 00                  RET 0x4
LAB_00495bfb:
00495BFB  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00495BFE  68 A4 BD 7A 00            PUSH 0x7abda4
00495C03  68 CC 4C 7A 00            PUSH 0x7a4ccc
00495C08  56                        PUSH ESI
00495C09  6A 00                     PUSH 0x0
00495C0B  6A 3D                     PUSH 0x3d
00495C0D  68 D4 BD 7A 00            PUSH 0x7abdd4
00495C12  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00495C18  E8 B3 78 21 00            CALL 0x006ad4d0
00495C1D  83 C4 18                  ADD ESP,0x18
00495C20  85 C0                     TEST EAX,EAX
00495C22  74 01                     JZ 0x00495c25
00495C24  CC                        INT3
LAB_00495c25:
00495C25  6A 3E                     PUSH 0x3e
LAB_00495c27:
00495C27  68 D4 BD 7A 00            PUSH 0x7abdd4
00495C2C  6A 00                     PUSH 0x0
00495C2E  56                        PUSH ESI
00495C2F  E8 0C 02 21 00            CALL 0x006a5e40
00495C34  B8 FF FF 00 00            MOV EAX,0xffff
00495C39  5F                        POP EDI
00495C3A  5E                        POP ESI
00495C3B  8B E5                     MOV ESP,EBP
00495C3D  5D                        POP EBP
00495C3E  C2 04 00                  RET 0x4
switchD_004959a6::caseD_3:
00495C41  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00495C46  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
00495C4C  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
00495C52  6A 00                     PUSH 0x0
00495C54  52                        PUSH EDX
00495C55  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00495C5B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00495C61  E8 8A 7B 29 00            CALL 0x0072d7f0
00495C66  8B F0                     MOV ESI,EAX
00495C68  83 C4 08                  ADD ESP,0x8
00495C6B  85 F6                     TEST ESI,ESI
00495C6D  0F 85 88 00 00 00         JNZ 0x00495cfb
00495C73  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00495C79  E8 D9 E8 F6 FF            CALL 0x00404557
00495C7E  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
00495C83  85 C0                     TEST EAX,EAX
00495C85  74 0A                     JZ 0x00495c91
00495C87  68 80 B2 7F 00            PUSH 0x7fb280
00495C8C  E8 CF 53 21 00            CALL 0x006ab060
LAB_00495c91:
00495C91  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00495C96  85 C0                     TEST EAX,EAX
00495C98  74 0A                     JZ 0x00495ca4
00495C9A  68 38 B2 7F 00            PUSH 0x7fb238
00495C9F  E8 BC 53 21 00            CALL 0x006ab060
LAB_00495ca4:
00495CA4  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00495CA9  85 C0                     TEST EAX,EAX
00495CAB  74 0A                     JZ 0x00495cb7
00495CAD  68 48 B2 7F 00            PUSH 0x7fb248
00495CB2  E8 A9 53 21 00            CALL 0x006ab060
LAB_00495cb7:
00495CB7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00495CBA  8B CE                     MOV ECX,ESI
00495CBC  E8 8C F7 F6 FF            CALL 0x0040544d
00495CC1  A1 70 B2 7F 00            MOV EAX,[0x007fb270]
00495CC6  85 C0                     TEST EAX,EAX
00495CC8  74 06                     JZ 0x00495cd0
00495CCA  50                        PUSH EAX
00495CCB  E8 40 84 21 00            CALL 0x006ae110
LAB_00495cd0:
00495CD0  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00495CD3  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00495CD6  50                        PUSH EAX
00495CD7  E8 64 F0 24 00            CALL 0x006e4d40
00495CDC  83 F8 01                  CMP EAX,0x1
00495CDF  0F 85 0C FF FF FF         JNZ 0x00495bf1
00495CE5  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
00495CEB  5F                        POP EDI
00495CEC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00495CF2  33 C0                     XOR EAX,EAX
00495CF4  5E                        POP ESI
00495CF5  8B E5                     MOV ESP,EBP
00495CF7  5D                        POP EBP
00495CF8  C2 04 00                  RET 0x4
LAB_00495cfb:
00495CFB  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
00495D01  68 74 BD 7A 00            PUSH 0x7abd74
00495D06  68 CC 4C 7A 00            PUSH 0x7a4ccc
00495D0B  56                        PUSH ESI
00495D0C  6A 00                     PUSH 0x0
00495D0E  6A 58                     PUSH 0x58
00495D10  68 D4 BD 7A 00            PUSH 0x7abdd4
00495D15  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00495D1B  E8 B0 77 21 00            CALL 0x006ad4d0
00495D20  83 C4 18                  ADD ESP,0x18
00495D23  85 C0                     TEST EAX,EAX
00495D25  74 01                     JZ 0x00495d28
00495D27  CC                        INT3
LAB_00495d28:
00495D28  6A 59                     PUSH 0x59
00495D2A  E9 F8 FE FF FF            JMP 0x00495c27
