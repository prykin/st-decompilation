FUN_00412960:
00412960  55                        PUSH EBP
00412961  8B EC                     MOV EBP,ESP
00412963  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00412968  56                        PUSH ESI
00412969  3D C8 00 00 00            CMP EAX,0xc8
0041296E  0F 8F 8C 01 00 00         JG 0x00412b00
00412974  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00412977  85 D2                     TEST EDX,EDX
00412979  0F 8C 81 01 00 00         JL 0x00412b00
0041297F  3B 15 2C 4D 7F 00         CMP EDX,dword ptr [0x007f4d2c]
00412985  0F 8D 75 01 00 00         JGE 0x00412b00
0041298B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0041298E  85 C9                     TEST ECX,ECX
00412990  0F 8C 6A 01 00 00         JL 0x00412b00
00412996  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0041299C  0F 8D 5E 01 00 00         JGE 0x00412b00
004129A2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004129A5  85 C0                     TEST EAX,EAX
004129A7  0F 8C 53 01 00 00         JL 0x00412b00
004129AD  3B 05 34 4D 7F 00         CMP EAX,dword ptr [0x007f4d34]
004129B3  0F 8D 47 01 00 00         JGE 0x00412b00
004129B9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004129BC  85 C0                     TEST EAX,EAX
004129BE  7E 22                     JLE 0x004129e2
004129C0  8B 35 38 4D 7F 00         MOV ESI,dword ptr [0x007f4d38]
004129C6  0F AF F0                  IMUL ESI,EAX
004129C9  C1 FE 10                  SAR ESI,0x10
004129CC  2B D6                     SUB EDX,ESI
004129CE  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004129D1  8B 15 28 4D 7F 00         MOV EDX,dword ptr [0x007f4d28]
004129D7  0F AF D0                  IMUL EDX,EAX
004129DA  C1 FA 10                  SAR EDX,0x10
004129DD  03 CA                     ADD ECX,EDX
004129DF  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_004129e2:
004129E2  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
004129E5  53                        PUSH EBX
004129E6  57                        PUSH EDI
004129E7  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
004129EA  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
004129ED  8B C7                     MOV EAX,EDI
004129EF  2B C1                     SUB EAX,ECX
004129F1  50                        PUSH EAX
004129F2  E8 49 8C 2C 00            CALL 0x006db640
004129F7  A3 28 4D 7F 00            MOV [0x007f4d28],EAX
004129FC  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
004129FF  2B FA                     SUB EDI,EDX
00412A01  57                        PUSH EDI
00412A02  E8 C9 8C 2C 00            CALL 0x006db6d0
00412A07  A3 38 4D 7F 00            MOV [0x007f4d38],EAX
00412A0C  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
00412A0F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00412A12  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
00412A15  3B C3                     CMP EAX,EBX
00412A17  0F 84 89 00 00 00         JZ 0x00412aa6
00412A1D  8B 15 20 4D 7F 00         MOV EDX,dword ptr [0x007f4d20]
00412A23  B8 30 75 00 00            MOV EAX,0x7530
00412A28  B9 D0 8A FF FF            MOV ECX,0xffff8ad0
00412A2D  83 C6 0C                  ADD ESI,0xc
00412A30  85 D2                     TEST EDX,EDX
00412A32  8B F8                     MOV EDI,EAX
00412A34  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00412A37  7E 2A                     JLE 0x00412a63
00412A39  8B DA                     MOV EBX,EDX
LAB_00412a3b:
00412A3B  8B 16                     MOV EDX,dword ptr [ESI]
00412A3D  3B C2                     CMP EAX,EDX
00412A3F  7E 02                     JLE 0x00412a43
00412A41  8B C2                     MOV EAX,EDX
LAB_00412a43:
00412A43  3B CA                     CMP ECX,EDX
00412A45  7D 02                     JGE 0x00412a49
00412A47  8B CA                     MOV ECX,EDX
LAB_00412a49:
00412A49  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00412A4C  3B FA                     CMP EDI,EDX
00412A4E  7E 02                     JLE 0x00412a52
00412A50  8B FA                     MOV EDI,EDX
LAB_00412a52:
00412A52  39 55 14                  CMP dword ptr [EBP + 0x14],EDX
00412A55  7D 03                     JGE 0x00412a5a
00412A57  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_00412a5a:
00412A5A  83 C6 10                  ADD ESI,0x10
00412A5D  4B                        DEC EBX
00412A5E  75 DB                     JNZ 0x00412a3b
00412A60  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
LAB_00412a63:
00412A63  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00412A66  2B C8                     SUB ECX,EAX
00412A68  2B D7                     SUB EDX,EDI
00412A6A  3B CA                     CMP ECX,EDX
00412A6C  7D 02                     JGE 0x00412a70
00412A6E  8B CA                     MOV ECX,EDX
LAB_00412a70:
00412A70  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00412A73  8B 04 95 60 4B 7A 00      MOV EAX,dword ptr [EDX*0x4 + 0x7a4b60]
00412A7A  8B 14 9D 60 4B 7A 00      MOV EDX,dword ptr [EBX*0x4 + 0x7a4b60]
00412A81  2B C2                     SUB EAX,EDX
00412A83  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
00412A86  A1 38 4D 7F 00            MOV EAX,[0x007f4d38]
00412A8B  0F AF C6                  IMUL EAX,ESI
00412A8E  99                        CDQ
00412A8F  F7 F9                     IDIV ECX
00412A91  A3 38 4D 7F 00            MOV [0x007f4d38],EAX
00412A96  A1 28 4D 7F 00            MOV EAX,[0x007f4d28]
00412A9B  0F AF C6                  IMUL EAX,ESI
00412A9E  99                        CDQ
00412A9F  F7 F9                     IDIV ECX
00412AA1  A3 28 4D 7F 00            MOV [0x007f4d28],EAX
LAB_00412aa6:
00412AA6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00412AA9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00412AAC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00412AAF  5F                        POP EDI
00412AB0  5B                        POP EBX
00412AB1  85 C0                     TEST EAX,EAX
00412AB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00412AB6  51                        PUSH ECX
00412AB7  52                        PUSH EDX
00412AB8  50                        PUSH EAX
00412AB9  74 2E                     JZ 0x00412ae9
00412ABB  E8 C0 00 00 00            CALL 0x00412b80
00412AC0  8B F0                     MOV ESI,EAX
00412AC2  85 F6                     TEST ESI,ESI
00412AC4  74 33                     JZ 0x00412af9
LAB_00412ac6:
00412AC6  83 FE FC                  CMP ESI,-0x4
00412AC9  74 35                     JZ 0x00412b00
00412ACB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00412AD1  68 7A 0C 00 00            PUSH 0xc7a
00412AD6  68 A8 4C 7A 00            PUSH 0x7a4ca8
00412ADB  51                        PUSH ECX
00412ADC  56                        PUSH ESI
00412ADD  E8 5E 33 29 00            CALL 0x006a5e40
00412AE2  8B C6                     MOV EAX,ESI
00412AE4  5E                        POP ESI
00412AE5  5D                        POP EBP
00412AE6  C2 20 00                  RET 0x20
LAB_00412ae9:
00412AE9  E8 F2 02 00 00            CALL 0x00412de0
00412AEE  8B F0                     MOV ESI,EAX
00412AF0  85 F6                     TEST ESI,ESI
00412AF2  75 D2                     JNZ 0x00412ac6
00412AF4  E8 97 C0 FF FF            CALL 0x0040eb90
LAB_00412af9:
00412AF9  33 C0                     XOR EAX,EAX
00412AFB  5E                        POP ESI
00412AFC  5D                        POP EBP
00412AFD  C2 20 00                  RET 0x20
LAB_00412b00:
00412B00  B8 FC FF FF FF            MOV EAX,0xfffffffc
00412B05  5E                        POP ESI
00412B06  5D                        POP EBP
00412B07  C2 20 00                  RET 0x20
