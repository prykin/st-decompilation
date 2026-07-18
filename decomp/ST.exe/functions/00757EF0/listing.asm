FUN_00757ef0:
00757EF0  55                        PUSH EBP
00757EF1  8B EC                     MOV EBP,ESP
00757EF3  83 EC 10                  SUB ESP,0x10
00757EF6  53                        PUSH EBX
00757EF7  56                        PUSH ESI
00757EF8  57                        PUSH EDI
00757EF9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757EFC  8B 77 10                  MOV ESI,dword ptr [EDI + 0x10]
00757EFF  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00757F02  8B 0E                     MOV ECX,dword ptr [ESI]
00757F04  85 C0                     TEST EAX,EAX
00757F06  75 11                     JNZ 0x00757f19
00757F08  57                        PUSH EDI
00757F09  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00757F0C  85 C0                     TEST EAX,EAX
00757F0E  0F 84 CD 00 00 00         JZ 0x00757fe1
00757F14  8B 0E                     MOV ECX,dword ptr [ESI]
00757F16  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757f19:
00757F19  33 DB                     XOR EBX,EBX
00757F1B  48                        DEC EAX
00757F1C  8A 39                     MOV BH,byte ptr [ECX]
00757F1E  41                        INC ECX
00757F1F  85 C0                     TEST EAX,EAX
00757F21  75 11                     JNZ 0x00757f34
00757F23  57                        PUSH EDI
00757F24  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00757F27  85 C0                     TEST EAX,EAX
00757F29  0F 84 B2 00 00 00         JZ 0x00757fe1
00757F2F  8B 0E                     MOV ECX,dword ptr [ESI]
00757F31  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757f34:
00757F34  33 D2                     XOR EDX,EDX
00757F36  48                        DEC EAX
00757F37  8A 11                     MOV DL,byte ptr [ECX]
00757F39  03 DA                     ADD EBX,EDX
00757F3B  41                        INC ECX
00757F3C  83 EB 02                  SUB EBX,0x2
00757F3F  83 FB 0E                  CMP EBX,0xe
00757F42  0F 8C A4 00 00 00         JL 0x00757fec
00757F48  33 FF                     XOR EDI,EDI
LAB_00757f4a:
00757F4A  85 C0                     TEST EAX,EAX
00757F4C  75 14                     JNZ 0x00757f62
00757F4E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00757F51  50                        PUSH EAX
00757F52  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00757F55  85 C0                     TEST EAX,EAX
00757F57  0F 84 84 00 00 00         JZ 0x00757fe1
00757F5D  8B 0E                     MOV ECX,dword ptr [ESI]
00757F5F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757f62:
00757F62  8A 11                     MOV DL,byte ptr [ECX]
00757F64  48                        DEC EAX
00757F65  88 54 3D F0               MOV byte ptr [EBP + EDI*0x1 + -0x10],DL
00757F69  41                        INC ECX
00757F6A  47                        INC EDI
00757F6B  83 FF 0E                  CMP EDI,0xe
00757F6E  7C DA                     JL 0x00757f4a
00757F70  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
00757F73  83 EB 0E                  SUB EBX,0xe
00757F76  80 FA 4A                  CMP DL,0x4a
00757F79  75 71                     JNZ 0x00757fec
00757F7B  B2 46                     MOV DL,0x46
00757F7D  38 55 F1                  CMP byte ptr [EBP + -0xf],DL
00757F80  75 6A                     JNZ 0x00757fec
00757F82  80 7D F2 49               CMP byte ptr [EBP + -0xe],0x49
00757F86  75 64                     JNZ 0x00757fec
00757F88  38 55 F3                  CMP byte ptr [EBP + -0xd],DL
00757F8B  75 5F                     JNZ 0x00757fec
00757F8D  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00757F90  84 D2                     TEST DL,DL
00757F92  75 58                     JNZ 0x00757fec
00757F94  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00757F97  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757F9A  C7 82 10 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x110],0x1
00757FA4  8A 55 F7                  MOV DL,byte ptr [EBP + -0x9]
00757FA7  88 97 14 01 00 00         MOV byte ptr [EDI + 0x114],DL
00757FAD  66 0F B6 55 F8            MOVZX DX,byte ptr [EBP + -0x8]
00757FB2  66 0F B6 7D F9            MOVZX DI,byte ptr [EBP + -0x7]
00757FB7  C1 E2 08                  SHL EDX,0x8
00757FBA  03 D7                     ADD EDX,EDI
00757FBC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757FBF  66 89 97 15 01 00 00      MOV word ptr [EDI + 0x115],DX
00757FC6  66 0F B6 7D FA            MOVZX DI,byte ptr [EBP + -0x6]
00757FCB  66 0F B6 55 FB            MOVZX DX,byte ptr [EBP + -0x5]
00757FD0  C1 E7 08                  SHL EDI,0x8
00757FD3  03 FA                     ADD EDI,EDX
00757FD5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00757FD8  66 89 BA 17 01 00 00      MOV word ptr [EDX + 0x117],DI
00757FDF  EB 0E                     JMP 0x00757fef
LAB_00757fe1:
00757FE1  5F                        POP EDI
00757FE2  5E                        POP ESI
00757FE3  33 C0                     XOR EAX,EAX
00757FE5  5B                        POP EBX
00757FE6  8B E5                     MOV ESP,EBP
00757FE8  5D                        POP EBP
00757FE9  C2 04 00                  RET 0x4
LAB_00757fec:
00757FEC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_00757fef:
00757FEF  85 DB                     TEST EBX,EBX
00757FF1  89 0E                     MOV dword ptr [ESI],ECX
00757FF3  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00757FF6  7E 08                     JLE 0x00758000
00757FF8  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
00757FFB  53                        PUSH EBX
00757FFC  52                        PUSH EDX
00757FFD  FF 50 10                  CALL dword ptr [EAX + 0x10]
LAB_00758000:
00758000  5F                        POP EDI
00758001  5E                        POP ESI
00758002  B8 01 00 00 00            MOV EAX,0x1
00758007  5B                        POP EBX
00758008  8B E5                     MOV ESP,EBP
0075800A  5D                        POP EBP
0075800B  C2 04 00                  RET 0x4
