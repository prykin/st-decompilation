FUN_00649a60:
00649A60  55                        PUSH EBP
00649A61  8B EC                     MOV EBP,ESP
00649A63  83 EC 48                  SUB ESP,0x48
00649A66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00649A6B  56                        PUSH ESI
00649A6C  8D 55 BC                  LEA EDX,[EBP + -0x44]
00649A6F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00649A72  6A 00                     PUSH 0x0
00649A74  52                        PUSH EDX
00649A75  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00649A7C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00649A7F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649A85  E8 66 3D 0E 00            CALL 0x0072d7f0
00649A8A  8B F0                     MOV ESI,EAX
00649A8C  83 C4 08                  ADD ESP,0x8
00649A8F  85 F6                     TEST ESI,ESI
00649A91  75 75                     JNZ 0x00649b08
00649A93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00649A96  33 D2                     XOR EDX,EDX
00649A98  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00649A9B  8A 94 C9 E8 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087e8]
00649AA2  8B CA                     MOV ECX,EDX
00649AA4  49                        DEC ECX
00649AA5  74 46                     JZ 0x00649aed
00649AA7  49                        DEC ECX
00649AA8  74 28                     JZ 0x00649ad2
00649AAA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00649AAF  68 75 01 00 00            PUSH 0x175
00649AB4  68 80 28 7D 00            PUSH 0x7d2880
00649AB9  50                        PUSH EAX
00649ABA  6A FB                     PUSH -0x5
00649ABC  E8 7F C3 05 00            CALL 0x006a5e40
00649AC1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00649AC4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00649AC7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649ACD  5E                        POP ESI
00649ACE  8B E5                     MOV ESP,EBP
00649AD0  5D                        POP EBP
00649AD1  C3                        RET
LAB_00649ad2:
00649AD2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00649AD5  51                        PUSH ECX
00649AD6  50                        PUSH EAX
00649AD7  E8 52 A6 DB FF            CALL 0x0040412e
00649ADC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00649ADF  83 C4 08                  ADD ESP,0x8
00649AE2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649AE8  5E                        POP ESI
00649AE9  8B E5                     MOV ESP,EBP
00649AEB  5D                        POP EBP
00649AEC  C3                        RET
LAB_00649aed:
00649AED  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00649AF0  52                        PUSH EDX
00649AF1  50                        PUSH EAX
00649AF2  E8 18 9D DB FF            CALL 0x0040380f
00649AF7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00649AFA  83 C4 08                  ADD ESP,0x8
00649AFD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649B03  5E                        POP ESI
00649B04  8B E5                     MOV ESP,EBP
00649B06  5D                        POP EBP
00649B07  C3                        RET
LAB_00649b08:
00649B08  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00649B0B  68 30 29 7D 00            PUSH 0x7d2930
00649B10  68 CC 4C 7A 00            PUSH 0x7a4ccc
00649B15  56                        PUSH ESI
00649B16  6A 00                     PUSH 0x0
00649B18  68 78 01 00 00            PUSH 0x178
00649B1D  68 80 28 7D 00            PUSH 0x7d2880
00649B22  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00649B28  E8 A3 39 06 00            CALL 0x006ad4d0
00649B2D  83 C4 18                  ADD ESP,0x18
00649B30  85 C0                     TEST EAX,EAX
00649B32  74 01                     JZ 0x00649b35
00649B34  CC                        INT3
LAB_00649b35:
00649B35  68 79 01 00 00            PUSH 0x179
00649B3A  68 80 28 7D 00            PUSH 0x7d2880
00649B3F  6A 00                     PUSH 0x0
00649B41  56                        PUSH ESI
00649B42  E8 F9 C2 05 00            CALL 0x006a5e40
00649B47  33 C0                     XOR EAX,EAX
00649B49  5E                        POP ESI
00649B4A  8B E5                     MOV ESP,EBP
00649B4C  5D                        POP EBP
00649B4D  C3                        RET
