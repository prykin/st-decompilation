FUN_00488d10:
00488D10  55                        PUSH EBP
00488D11  8B EC                     MOV EBP,ESP
00488D13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00488D16  53                        PUSH EBX
00488D17  56                        PUSH ESI
00488D18  8B F0                     MOV ESI,EAX
00488D1A  33 D2                     XOR EDX,EDX
00488D1C  89 16                     MOV dword ptr [ESI],EDX
00488D1E  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
00488D21  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
00488D24  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
00488D27  66 89 56 10               MOV word ptr [ESI + 0x10],DX
00488D2B  88 56 12                  MOV byte ptr [ESI + 0x12],DL
00488D2E  8B 91 F7 06 00 00         MOV EDX,dword ptr [ECX + 0x6f7]
00488D34  89 10                     MOV dword ptr [EAX],EDX
00488D36  C6 40 04 2B               MOV byte ptr [EAX + 0x4],0x2b
00488D3A  C6 40 05 2C               MOV byte ptr [EAX + 0x5],0x2c
00488D3E  C6 40 06 05               MOV byte ptr [EAX + 0x6],0x5
00488D42  C6 40 07 06               MOV byte ptr [EAX + 0x7],0x6
00488D46  C6 40 08 4D               MOV byte ptr [EAX + 0x8],0x4d
00488D4A  C6 40 09 2D               MOV byte ptr [EAX + 0x9],0x2d
00488D4E  8B 91 E6 07 00 00         MOV EDX,dword ptr [ECX + 0x7e6]
00488D54  85 D2                     TEST EDX,EDX
00488D56  74 0B                     JZ 0x00488d63
00488D58  B3 01                     MOV BL,0x1
00488D5A  C6 40 10 03               MOV byte ptr [EAX + 0x10],0x3
00488D5E  88 58 11                  MOV byte ptr [EAX + 0x11],BL
00488D61  EB 09                     JMP 0x00488d6c
LAB_00488d63:
00488D63  B3 01                     MOV BL,0x1
00488D65  C6 40 11 03               MOV byte ptr [EAX + 0x11],0x3
00488D69  88 58 10                  MOV byte ptr [EAX + 0x10],BL
LAB_00488d6c:
00488D6C  8B 91 EA 07 00 00         MOV EDX,dword ptr [ECX + 0x7ea]
00488D72  85 D2                     TEST EDX,EDX
00488D74  74 06                     JZ 0x00488d7c
00488D76  C6 40 12 03               MOV byte ptr [EAX + 0x12],0x3
00488D7A  EB 03                     JMP 0x00488d7f
LAB_00488d7c:
00488D7C  88 58 12                  MOV byte ptr [EAX + 0x12],BL
LAB_00488d7f:
00488D7F  8B 91 F7 06 00 00         MOV EDX,dword ptr [ECX + 0x6f7]
00488D85  8D 72 FF                  LEA ESI,[EDX + -0x1]
00488D88  83 FE 27                  CMP ESI,0x27
00488D8B  0F 87 AF 00 00 00         JA 0x00488e40
00488D91  33 D2                     XOR EDX,EDX
00488D93  8A 96 50 8E 48 00         MOV DL,byte ptr [ESI + 0x488e50]
switchD_00488d99::switchD:
00488D99  FF 24 95 48 8E 48 00      JMP dword ptr [EDX*0x4 + 0x488e48]
switchD_00488d99::caseD_1:
00488DA0  88 58 0A                  MOV byte ptr [EAX + 0xa],BL
00488DA3  88 58 0B                  MOV byte ptr [EAX + 0xb],BL
00488DA6  83 B9 5D 04 00 00 05      CMP dword ptr [ECX + 0x45d],0x5
00488DAD  75 06                     JNZ 0x00488db5
00488DAF  C6 40 0C 03               MOV byte ptr [EAX + 0xc],0x3
00488DB3  EB 03                     JMP 0x00488db8
LAB_00488db5:
00488DB5  88 58 0C                  MOV byte ptr [EAX + 0xc],BL
LAB_00488db8:
00488DB8  83 B9 5D 04 00 00 06      CMP dword ptr [ECX + 0x45d],0x6
00488DBF  75 06                     JNZ 0x00488dc7
00488DC1  C6 40 0D 03               MOV byte ptr [EAX + 0xd],0x3
00488DC5  EB 03                     JMP 0x00488dca
LAB_00488dc7:
00488DC7  88 58 0D                  MOV byte ptr [EAX + 0xd],BL
LAB_00488dca:
00488DCA  83 B9 5D 04 00 00 15      CMP dword ptr [ECX + 0x45d],0x15
00488DD1  75 0F                     JNZ 0x00488de2
00488DD3  83 B9 35 06 00 00 02      CMP dword ptr [ECX + 0x635],0x2
00488DDA  74 06                     JZ 0x00488de2
00488DDC  C6 40 0E 03               MOV byte ptr [EAX + 0xe],0x3
00488DE0  EB 03                     JMP 0x00488de5
LAB_00488de2:
00488DE2  88 58 0E                  MOV byte ptr [EAX + 0xe],BL
LAB_00488de5:
00488DE5  83 B9 5D 04 00 00 08      CMP dword ptr [ECX + 0x45d],0x8
00488DEC  75 4F                     JNZ 0x00488e3d
00488DEE  5E                        POP ESI
00488DEF  C6 40 0F 03               MOV byte ptr [EAX + 0xf],0x3
00488DF3  5B                        POP EBX
00488DF4  5D                        POP EBP
00488DF5  C2 04 00                  RET 0x4
switchD_00488d99::caseD_7:
00488DF8  C6 40 0A 00               MOV byte ptr [EAX + 0xa],0x0
00488DFC  C6 40 0B 00               MOV byte ptr [EAX + 0xb],0x0
00488E00  C6 40 0C 00               MOV byte ptr [EAX + 0xc],0x0
00488E04  8B 91 5D 04 00 00         MOV EDX,dword ptr [ECX + 0x45d]
00488E0A  83 FA 06                  CMP EDX,0x6
00488E0D  75 06                     JNZ 0x00488e15
00488E0F  C6 40 0D 03               MOV byte ptr [EAX + 0xd],0x3
00488E13  EB 03                     JMP 0x00488e18
LAB_00488e15:
00488E15  88 58 0D                  MOV byte ptr [EAX + 0xd],BL
LAB_00488e18:
00488E18  83 B9 5D 04 00 00 15      CMP dword ptr [ECX + 0x45d],0x15
00488E1F  75 06                     JNZ 0x00488e27
00488E21  C6 40 0E 03               MOV byte ptr [EAX + 0xe],0x3
00488E25  EB 03                     JMP 0x00488e2a
LAB_00488e27:
00488E27  88 58 0E                  MOV byte ptr [EAX + 0xe],BL
LAB_00488e2a:
00488E2A  83 B9 5D 04 00 00 08      CMP dword ptr [ECX + 0x45d],0x8
00488E31  75 0A                     JNZ 0x00488e3d
00488E33  5E                        POP ESI
00488E34  C6 40 0F 03               MOV byte ptr [EAX + 0xf],0x3
00488E38  5B                        POP EBX
00488E39  5D                        POP EBP
00488E3A  C2 04 00                  RET 0x4
LAB_00488e3d:
00488E3D  88 58 0F                  MOV byte ptr [EAX + 0xf],BL
switchD_00488d99::default:
00488E40  5E                        POP ESI
00488E41  5B                        POP EBX
00488E42  5D                        POP EBP
00488E43  C2 04 00                  RET 0x4
