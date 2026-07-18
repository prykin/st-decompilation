FUN_00571dc0:
00571DC0  55                        PUSH EBP
00571DC1  8B EC                     MOV EBP,ESP
00571DC3  83 EC 10                  SUB ESP,0x10
00571DC6  53                        PUSH EBX
00571DC7  56                        PUSH ESI
00571DC8  FF 15 48 BC 85 00         CALL dword ptr [0x0085bc48]
00571DCE  8B 0D 90 A6 7C 00         MOV ECX,dword ptr [0x007ca690]
00571DD4  8B 35 64 BC 85 00         MOV ESI,dword ptr [0x0085bc64]
00571DDA  33 D2                     XOR EDX,EDX
00571DDC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00571DDF  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00571DE2  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00571DE5  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00571DE9  33 DB                     XOR EBX,EBX
LAB_00571deb:
00571DEB  A8 01                     TEST AL,0x1
00571DED  74 12                     JZ 0x00571e01
00571DEF  8A C3                     MOV AL,BL
00571DF1  8D 4D F0                  LEA ECX,[EBP + -0x10]
00571DF4  04 41                     ADD AL,0x41
00571DF6  51                        PUSH ECX
00571DF7  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
00571DFA  FF D6                     CALL ESI
00571DFC  83 F8 05                  CMP EAX,0x5
00571DFF  74 0E                     JZ 0x00571e0f
LAB_00571e01:
00571E01  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00571E04  D1 E8                     SHR EAX,0x1
00571E06  43                        INC EBX
00571E07  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00571E0A  83 FB 20                  CMP EBX,0x20
00571E0D  7C DC                     JL 0x00571deb
LAB_00571e0f:
00571E0F  8A 45 F0                  MOV AL,byte ptr [EBP + -0x10]
00571E12  5E                        POP ESI
00571E13  5B                        POP EBX
00571E14  8B E5                     MOV ESP,EBP
00571E16  5D                        POP EBP
00571E17  C3                        RET
