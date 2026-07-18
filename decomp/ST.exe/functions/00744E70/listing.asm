FUN_00744e70:
00744E70  55                        PUSH EBP
00744E71  8B EC                     MOV EBP,ESP
00744E73  83 EC 0C                  SUB ESP,0xc
00744E76  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00744E7D  C7 05 38 74 85 00 00 00 00 00  MOV dword ptr [0x00857438],0x0
00744E87  C7 05 E8 27 7F 00 FF FF FF FF  MOV dword ptr [0x007f27e8],0xffffffff
00744E91  A1 E8 27 7F 00            MOV EAX,[0x007f27e8]
00744E96  A3 D8 27 7F 00            MOV [0x007f27d8],EAX
00744E9B  68 3C 10 7A 00            PUSH 0x7a103c
00744EA0  E8 AB 11 00 00            CALL 0x00746050
00744EA5  83 C4 04                  ADD ESP,0x4
00744EA8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00744EAB  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00744EAF  0F 85 2A 01 00 00         JNZ 0x00744fdf
00744EB5  68 40 74 85 00            PUSH 0x857440
00744EBA  FF 15 5C BC 85 00         CALL dword ptr [0x0085bc5c]
00744EC0  83 F8 FF                  CMP EAX,-0x1
00744EC3  0F 84 11 01 00 00         JZ 0x00744fda
00744EC9  C7 05 38 74 85 00 01 00 00 00  MOV dword ptr [0x00857438],0x1
00744ED3  8B 0D 40 74 85 00         MOV ECX,dword ptr [0x00857440]
00744ED9  6B C9 3C                  IMUL ECX,ECX,0x3c
00744EDC  89 0D 40 27 7F 00         MOV dword ptr [0x007f2740],ECX
00744EE2  33 D2                     XOR EDX,EDX
00744EE4  66 8B 15 86 74 85 00      MOV DX,word ptr [0x00857486]
00744EEB  85 D2                     TEST EDX,EDX
00744EED  74 16                     JZ 0x00744f05
00744EEF  A1 94 74 85 00            MOV EAX,[0x00857494]
00744EF4  6B C0 3C                  IMUL EAX,EAX,0x3c
00744EF7  8B 0D 40 27 7F 00         MOV ECX,dword ptr [0x007f2740]
00744EFD  03 C8                     ADD ECX,EAX
00744EFF  89 0D 40 27 7F 00         MOV dword ptr [0x007f2740],ECX
LAB_00744f05:
00744F05  33 D2                     XOR EDX,EDX
00744F07  66 8B 15 DA 74 85 00      MOV DX,word ptr [0x008574da]
00744F0E  85 D2                     TEST EDX,EDX
00744F10  74 28                     JZ 0x00744f3a
00744F12  83 3D E8 74 85 00 00      CMP dword ptr [0x008574e8],0x0
00744F19  74 1F                     JZ 0x00744f3a
00744F1B  C7 05 44 27 7F 00 01 00 00 00  MOV dword ptr [0x007f2744],0x1
00744F25  A1 E8 74 85 00            MOV EAX,[0x008574e8]
00744F2A  2B 05 94 74 85 00         SUB EAX,dword ptr [0x00857494]
00744F30  6B C0 3C                  IMUL EAX,EAX,0x3c
00744F33  A3 48 27 7F 00            MOV [0x007f2748],EAX
00744F38  EB 14                     JMP 0x00744f4e
LAB_00744f3a:
00744F3A  C7 05 44 27 7F 00 00 00 00 00  MOV dword ptr [0x007f2744],0x0
00744F44  C7 05 48 27 7F 00 00 00 00 00  MOV dword ptr [0x007f2748],0x0
LAB_00744f4e:
00744F4E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00744F51  51                        PUSH ECX
00744F52  6A 00                     PUSH 0x0
00744F54  6A 3F                     PUSH 0x3f
00744F56  8B 15 CC 27 7F 00         MOV EDX,dword ptr [0x007f27cc]
00744F5C  52                        PUSH EDX
00744F5D  6A FF                     PUSH -0x1
00744F5F  68 44 74 85 00            PUSH 0x857444
00744F64  68 20 02 00 00            PUSH 0x220
00744F69  A1 20 72 85 00            MOV EAX,[0x00857220]
00744F6E  50                        PUSH EAX
00744F6F  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
00744F75  85 C0                     TEST EAX,EAX
00744F77  74 12                     JZ 0x00744f8b
00744F79  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00744F7D  75 0C                     JNZ 0x00744f8b
00744F7F  8B 0D CC 27 7F 00         MOV ECX,dword ptr [0x007f27cc]
00744F85  C6 41 3F 00               MOV byte ptr [ECX + 0x3f],0x0
00744F89  EB 09                     JMP 0x00744f94
LAB_00744f8b:
00744F8B  8B 15 CC 27 7F 00         MOV EDX,dword ptr [0x007f27cc]
00744F91  C6 02 00                  MOV byte ptr [EDX],0x0
LAB_00744f94:
00744F94  8D 45 F8                  LEA EAX,[EBP + -0x8]
00744F97  50                        PUSH EAX
00744F98  6A 00                     PUSH 0x0
00744F9A  6A 3F                     PUSH 0x3f
00744F9C  8B 0D D0 27 7F 00         MOV ECX,dword ptr [0x007f27d0]
00744FA2  51                        PUSH ECX
00744FA3  6A FF                     PUSH -0x1
00744FA5  68 98 74 85 00            PUSH 0x857498
00744FAA  68 20 02 00 00            PUSH 0x220
00744FAF  8B 15 20 72 85 00         MOV EDX,dword ptr [0x00857220]
00744FB5  52                        PUSH EDX
00744FB6  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
00744FBC  85 C0                     TEST EAX,EAX
00744FBE  74 11                     JZ 0x00744fd1
00744FC0  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00744FC4  75 0B                     JNZ 0x00744fd1
00744FC6  A1 D0 27 7F 00            MOV EAX,[0x007f27d0]
00744FCB  C6 40 3F 00               MOV byte ptr [EAX + 0x3f],0x0
00744FCF  EB 09                     JMP 0x00744fda
LAB_00744fd1:
00744FD1  8B 0D D0 27 7F 00         MOV ECX,dword ptr [0x007f27d0]
00744FD7  C6 01 00                  MOV byte ptr [ECX],0x0
LAB_00744fda:
00744FDA  E9 06 02 00 00            JMP 0x007451e5
LAB_00744fdf:
00744FDF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00744FE2  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00744FE5  85 C0                     TEST EAX,EAX
00744FE7  74 20                     JZ 0x00745009
00744FE9  83 3D EC 74 85 00 00      CMP dword ptr [0x008574ec],0x0
00744FF0  74 1C                     JZ 0x0074500e
00744FF2  8B 0D EC 74 85 00         MOV ECX,dword ptr [0x008574ec]
00744FF8  51                        PUSH ECX
00744FF9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00744FFC  52                        PUSH EDX
00744FFD  E8 2E 51 FF FF            CALL 0x0073a130
00745002  83 C4 08                  ADD ESP,0x8
00745005  85 C0                     TEST EAX,EAX
00745007  75 05                     JNZ 0x0074500e
LAB_00745009:
00745009  E9 D7 01 00 00            JMP 0x007451e5
LAB_0074500e:
0074500E  6A 02                     PUSH 0x2
00745010  A1 EC 74 85 00            MOV EAX,[0x008574ec]
00745015  50                        PUSH EAX
00745016  E8 F1 F4 CB FF            CALL 0x0040450c
0074501B  83 C4 08                  ADD ESP,0x8
0074501E  68 0C 01 00 00            PUSH 0x10c
00745023  68 34 10 7A 00            PUSH 0x7a1034
00745028  6A 02                     PUSH 0x2
0074502A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0074502D  51                        PUSH ECX
0074502E  E8 DD 1B FF FF            CALL 0x00736c10
00745033  83 C4 04                  ADD ESP,0x4
00745036  83 C0 01                  ADD EAX,0x1
00745039  50                        PUSH EAX
0074503A  E8 C5 C0 CB FF            CALL 0x00401104
0074503F  83 C4 10                  ADD ESP,0x10
00745042  A3 EC 74 85 00            MOV [0x008574ec],EAX
00745047  83 3D EC 74 85 00 00      CMP dword ptr [0x008574ec],0x0
0074504E  75 05                     JNZ 0x00745055
00745050  E9 90 01 00 00            JMP 0x007451e5
LAB_00745055:
00745055  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745058  52                        PUSH EDX
00745059  A1 EC 74 85 00            MOV EAX,[0x008574ec]
0074505E  50                        PUSH EAX
0074505F  E8 DC 51 FF FF            CALL 0x0073a240
00745064  83 C4 08                  ADD ESP,0x8
00745067  6A 03                     PUSH 0x3
00745069  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0074506C  51                        PUSH ECX
0074506D  8B 15 CC 27 7F 00         MOV EDX,dword ptr [0x007f27cc]
00745073  52                        PUSH EDX
00745074  E8 C7 92 FE FF            CALL 0x0072e340
00745079  83 C4 0C                  ADD ESP,0xc
0074507C  A1 CC 27 7F 00            MOV EAX,[0x007f27cc]
00745081  C6 40 03 00               MOV byte ptr [EAX + 0x3],0x0
00745085  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00745088  83 C1 03                  ADD ECX,0x3
0074508B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0074508E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745091  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00745094  83 F8 2D                  CMP EAX,0x2d
00745097  75 12                     JNZ 0x007450ab
00745099  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074509C  83 C1 01                  ADD ECX,0x1
0074509F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007450A2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007450A5  83 C2 01                  ADD EDX,0x1
007450A8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_007450ab:
007450AB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007450AE  50                        PUSH EAX
007450AF  E8 4C AD FE FF            CALL 0x0072fe00
007450B4  83 C4 04                  ADD ESP,0x4
007450B7  69 C0 10 0E 00 00         IMUL EAX,EAX,0xe10
007450BD  A3 40 27 7F 00            MOV [0x007f2740],EAX
LAB_007450c2:
007450C2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007450C5  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007450C8  83 FA 2B                  CMP EDX,0x2b
007450CB  74 16                     JZ 0x007450e3
007450CD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007450D0  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007450D3  83 F9 30                  CMP ECX,0x30
007450D6  7C 16                     JL 0x007450ee
007450D8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007450DB  0F BE 02                  MOVSX EAX,byte ptr [EDX]
007450DE  83 F8 39                  CMP EAX,0x39
007450E1  7F 0B                     JG 0x007450ee
LAB_007450e3:
007450E3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007450E6  83 C1 01                  ADD ECX,0x1
007450E9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007450EC  EB D4                     JMP 0x007450c2
LAB_007450ee:
007450EE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007450F1  0F BE 02                  MOVSX EAX,byte ptr [EDX]
007450F4  83 F8 3A                  CMP EAX,0x3a
007450F7  0F 85 96 00 00 00         JNZ 0x00745193
007450FD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00745100  83 C1 01                  ADD ECX,0x1
00745103  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00745106  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745109  52                        PUSH EDX
0074510A  E8 F1 AC FE FF            CALL 0x0072fe00
0074510F  83 C4 04                  ADD ESP,0x4
00745112  6B C0 3C                  IMUL EAX,EAX,0x3c
00745115  8B 0D 40 27 7F 00         MOV ECX,dword ptr [0x007f2740]
0074511B  03 C8                     ADD ECX,EAX
0074511D  89 0D 40 27 7F 00         MOV dword ptr [0x007f2740],ECX
LAB_00745123:
00745123  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745126  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00745129  83 F8 30                  CMP EAX,0x30
0074512C  7C 16                     JL 0x00745144
0074512E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00745131  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00745134  83 FA 39                  CMP EDX,0x39
00745137  7F 0B                     JG 0x00745144
00745139  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074513C  83 C0 01                  ADD EAX,0x1
0074513F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00745142  EB DF                     JMP 0x00745123
LAB_00745144:
00745144  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00745147  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0074514A  83 FA 3A                  CMP EDX,0x3a
0074514D  75 44                     JNZ 0x00745193
0074514F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00745152  83 C0 01                  ADD EAX,0x1
00745155  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00745158  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0074515B  51                        PUSH ECX
0074515C  E8 9F AC FE FF            CALL 0x0072fe00
00745161  83 C4 04                  ADD ESP,0x4
00745164  8B 15 40 27 7F 00         MOV EDX,dword ptr [0x007f2740]
0074516A  03 D0                     ADD EDX,EAX
0074516C  89 15 40 27 7F 00         MOV dword ptr [0x007f2740],EDX
LAB_00745172:
00745172  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00745175  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00745178  83 F9 30                  CMP ECX,0x30
0074517B  7C 16                     JL 0x00745193
0074517D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745180  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00745183  83 F8 39                  CMP EAX,0x39
00745186  7F 0B                     JG 0x00745193
00745188  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0074518B  83 C1 01                  ADD ECX,0x1
0074518E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00745191  EB DF                     JMP 0x00745172
LAB_00745193:
00745193  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00745197  74 0E                     JZ 0x007451a7
00745199  8B 15 40 27 7F 00         MOV EDX,dword ptr [0x007f2740]
0074519F  F7 DA                     NEG EDX
007451A1  89 15 40 27 7F 00         MOV dword ptr [0x007f2740],EDX
LAB_007451a7:
007451A7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007451AA  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007451AD  89 0D 44 27 7F 00         MOV dword ptr [0x007f2744],ECX
007451B3  83 3D 44 27 7F 00 00      CMP dword ptr [0x007f2744],0x0
007451BA  74 20                     JZ 0x007451dc
007451BC  6A 03                     PUSH 0x3
007451BE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007451C1  52                        PUSH EDX
007451C2  A1 D0 27 7F 00            MOV EAX,[0x007f27d0]
007451C7  50                        PUSH EAX
007451C8  E8 73 91 FE FF            CALL 0x0072e340
007451CD  83 C4 0C                  ADD ESP,0xc
007451D0  8B 0D D0 27 7F 00         MOV ECX,dword ptr [0x007f27d0]
007451D6  C6 41 03 00               MOV byte ptr [ECX + 0x3],0x0
007451DA  EB 09                     JMP 0x007451e5
LAB_007451dc:
007451DC  8B 15 D0 27 7F 00         MOV EDX,dword ptr [0x007f27d0]
007451E2  C6 02 00                  MOV byte ptr [EDX],0x0
LAB_007451e5:
007451E5  8B E5                     MOV ESP,EBP
007451E7  5D                        POP EBP
007451E8  C3                        RET
