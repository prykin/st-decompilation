FUN_00548c40:
00548C40  55                        PUSH EBP
00548C41  8B EC                     MOV EBP,ESP
00548C43  81 EC C4 02 00 00         SUB ESP,0x2c4
00548C49  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00548C4E  53                        PUSH EBX
00548C4F  56                        PUSH ESI
00548C50  89 8D E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ECX
00548C56  57                        PUSH EDI
00548C57  8D 95 40 FD FF FF         LEA EDX,[EBP + 0xfffffd40]
00548C5D  8D 8D 3C FD FF FF         LEA ECX,[EBP + 0xfffffd3c]
00548C63  6A 00                     PUSH 0x0
00548C65  52                        PUSH EDX
00548C66  89 85 3C FD FF FF         MOV dword ptr [EBP + 0xfffffd3c],EAX
00548C6C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00548C72  E8 79 4B 1E 00            CALL 0x0072d7f0
00548C77  8B F0                     MOV ESI,EAX
00548C79  83 C4 08                  ADD ESP,0x8
00548C7C  85 F6                     TEST ESI,ESI
00548C7E  0F 85 5D 15 00 00         JNZ 0x0054a1e1
00548C84  8B 15 98 75 80 00         MOV EDX,dword ptr [0x00807598]
00548C8A  8B 9D E0 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffee0]
00548C90  85 D2                     TEST EDX,EDX
00548C92  0F 84 8A 00 00 00         JZ 0x00548d22
00548C98  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00548C9E  8B 8B F3 00 00 00         MOV ECX,dword ptr [EBX + 0xf3]
00548CA4  56                        PUSH ESI
00548CA5  56                        PUSH ESI
00548CA6  56                        PUSH ESI
00548CA7  56                        PUSH ESI
00548CA8  89 85 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EAX
00548CAE  56                        PUSH ESI
00548CAF  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
00548CB5  56                        PUSH ESI
00548CB6  8D 85 BC FE FF FF         LEA EAX,[EBP + 0xfffffebc]
00548CBC  56                        PUSH ESI
00548CBD  8D 8D EC FD FF FF         LEA ECX,[EBP + 0xfffffdec]
00548CC3  50                        PUSH EAX
00548CC4  51                        PUSH ECX
00548CC5  8B CA                     MOV ECX,EDX
00548CC7  89 B5 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ESI
00548CCD  E8 FE 98 19 00            CALL 0x006e25d0
00548CD2  8B 85 EC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdec]
00548CD8  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00548CDE  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
00548CE4  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00548CEA  C1 F8 10                  SAR EAX,0x10
00548CED  2B D6                     SUB EDX,ESI
00548CEF  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00548CF5  89 83 DF 00 00 00         MOV dword ptr [EBX + 0xdf],EAX
00548CFB  2B D0                     SUB EDX,EAX
00548CFD  8B 85 F0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdf0]
00548D03  2B CE                     SUB ECX,ESI
00548D05  C1 F8 10                  SAR EAX,0x10
00548D08  2B C8                     SUB ECX,EAX
00548D0A  89 93 E7 00 00 00         MOV dword ptr [EBX + 0xe7],EDX
00548D10  89 83 E3 00 00 00         MOV dword ptr [EBX + 0xe3],EAX
00548D16  89 8B EB 00 00 00         MOV dword ptr [EBX + 0xeb],ECX
00548D1C  8B 15 98 75 80 00         MOV EDX,dword ptr [0x00807598]
LAB_00548d22:
00548D22  8B 35 38 2A 80 00         MOV ESI,dword ptr [0x00802a38]
00548D28  85 F6                     TEST ESI,ESI
00548D2A  0F 84 9C 14 00 00         JZ 0x0054a1cc
00548D30  8A 83 DE 04 00 00         MOV AL,byte ptr [EBX + 0x4de]
00548D36  84 C0                     TEST AL,AL
00548D38  74 63                     JZ 0x00548d9d
00548D3A  66 83 BB 94 04 00 00 48   CMP word ptr [EBX + 0x494],0x48
00548D42  0F 85 57 14 00 00         JNZ 0x0054a19f
00548D48  8B B3 9A 04 00 00         MOV ESI,dword ptr [EBX + 0x49a]
00548D4E  85 F6                     TEST ESI,ESI
00548D50  0F 84 49 14 00 00         JZ 0x0054a19f
00548D56  A1 90 16 80 00            MOV EAX,[0x00801690]
00548D5B  85 C0                     TEST EAX,EAX
00548D5D  0F 84 3C 14 00 00         JZ 0x0054a19f
00548D63  8B 16                     MOV EDX,dword ptr [ESI]
00548D65  8B CE                     MOV ECX,ESI
00548D67  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00548D6A  8B F8                     MOV EDI,EAX
00548D6C  83 FF 78                  CMP EDI,0x78
00548D6F  75 0C                     JNZ 0x00548d7d
00548D71  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
00548D77  8B B8 59 02 00 00         MOV EDI,dword ptr [EAX + 0x259]
LAB_00548d7d:
00548D7D  8B 16                     MOV EDX,dword ptr [ESI]
00548D7F  8B CE                     MOV ECX,ESI
00548D81  FF 52 0C                  CALL dword ptr [EDX + 0xc]
00548D84  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
00548D8A  50                        PUSH EAX
00548D8B  57                        PUSH EDI
00548D8C  E8 8C BF EB FF            CALL 0x00404d1d
00548D91  C6 83 DE 04 00 00 00      MOV byte ptr [EBX + 0x4de],0x0
00548D98  E9 02 14 00 00            JMP 0x0054a19f
LAB_00548d9d:
00548D9D  66 8B BB 94 04 00 00      MOV DI,word ptr [EBX + 0x494]
00548DA4  8B C7                     MOV EAX,EDI
00548DA6  25 FF FF 00 00            AND EAX,0xffff
00548DAB  48                        DEC EAX
00548DAC  83 F8 1E                  CMP EAX,0x1e
00548DAF  0F 87 EA 13 00 00         JA 0x0054a19f
switchD_00548db5::switchD:
00548DB5  FF 24 85 2C A2 54 00      JMP dword ptr [EAX*0x4 + 0x54a22c]
switchD_00548db5::caseD_5:
00548DBC  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00548DC2  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00548DC8  8D 4D FC                  LEA ECX,[EBP + -0x4]
00548DCB  8D 45 F8                  LEA EAX,[EBP + -0x8]
00548DCE  51                        PUSH ECX
00548DCF  8D 4D F4                  LEA ECX,[EBP + -0xc]
00548DD2  50                        PUSH EAX
00548DD3  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00548DD9  51                        PUSH ECX
00548DDA  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
00548DE0  2B C6                     SUB EAX,ESI
00548DE2  2B CF                     SUB ECX,EDI
00548DE4  50                        PUSH EAX
00548DE5  51                        PUSH ECX
00548DE6  8B CA                     MOV ECX,EDX
00548DE8  E8 E3 8F 19 00            CALL 0x006e1dd0
00548DED  85 C0                     TEST EAX,EAX
00548DEF  0F 84 AA 13 00 00         JZ 0x0054a19f
00548DF5  D9 45 F4                  FLD float ptr [EBP + -0xc]
00548DF8  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00548DFE  E8 85 54 1E 00            CALL 0x0072e288
00548E03  D9 45 F8                  FLD float ptr [EBP + -0x8]
00548E06  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00548E0C  89 85 D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],EAX
00548E12  E8 71 54 1E 00            CALL 0x0072e288
00548E17  D9 45 FC                  FLD float ptr [EBP + -0x4]
00548E1A  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00548E20  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
00548E26  E8 5D 54 1E 00            CALL 0x0072e288
00548E2B  85 C0                     TEST EAX,EAX
00548E2D  89 85 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EAX
00548E33  7D 08                     JGE 0x00548e3d
00548E35  33 C0                     XOR EAX,EAX
00548E37  89 85 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EAX
LAB_00548e3d:
00548E3D  83 F8 04                  CMP EAX,0x4
00548E40  7E 0A                     JLE 0x00548e4c
00548E42  C7 85 DC FE FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffffedc],0x4
LAB_00548e4c:
00548E4C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00548E52  6A FF                     PUSH -0x1
00548E54  8D 95 D4 FE FF FF         LEA EDX,[EBP + 0xfffffed4]
00548E5A  6A 00                     PUSH 0x0
00548E5C  52                        PUSH EDX
00548E5D  6A 14                     PUSH 0x14
00548E5F  E8 CF AD EB FF            CALL 0x00403c33
00548E64  D9 45 FC                  FLD float ptr [EBP + -0x4]
00548E67  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00548E6D  DF E0                     FNSTSW AX
00548E6F  F6 C4 01                  TEST AH,0x1
00548E72  74 1F                     JZ 0x00548e93
00548E74  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00548E77  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00548E7A  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00548E81  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00548E84  51                        PUSH ECX
00548E85  52                        PUSH EDX
00548E86  50                        PUSH EAX
00548E87  8B CB                     MOV ECX,EBX
00548E89  E8 F1 CF EB FF            CALL 0x00405e7f
00548E8E  E9 0C 13 00 00            JMP 0x0054a19f
LAB_00548e93:
00548E93  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00548E96  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00548E99  8B C8                     MOV ECX,EAX
00548E9B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00548E9E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00548EA1  51                        PUSH ECX
00548EA2  52                        PUSH EDX
00548EA3  50                        PUSH EAX
00548EA4  8B CB                     MOV ECX,EBX
00548EA6  E8 D4 CF EB FF            CALL 0x00405e7f
00548EAB  E9 EF 12 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_2:
00548EB0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00548EB3  85 C0                     TEST EAX,EAX
00548EB5  0F 84 BC 00 00 00         JZ 0x00548f77
00548EBB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00548EC1  33 C0                     XOR EAX,EAX
00548EC3  85 C9                     TEST ECX,ECX
00548EC5  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00548EC8  74 36                     JZ 0x00548f00
00548ECA  8B 83 EB 00 00 00         MOV EAX,dword ptr [EBX + 0xeb]
00548ED0  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
00548ED6  52                        PUSH EDX
00548ED7  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00548EDD  50                        PUSH EAX
00548EDE  8B 83 E3 00 00 00         MOV EAX,dword ptr [EBX + 0xe3]
00548EE4  52                        PUSH EDX
00548EE5  8B 93 DF 00 00 00         MOV EDX,dword ptr [EBX + 0xdf]
00548EEB  50                        PUSH EAX
00548EEC  33 C0                     XOR EAX,EAX
00548EEE  66 83 FF 0C               CMP DI,0xc
00548EF2  52                        PUSH EDX
00548EF3  0F 94 C0                  SETZ AL
00548EF6  40                        INC EAX
00548EF7  50                        PUSH EAX
00548EF8  E8 02 82 EB FF            CALL 0x004010ff
00548EFD  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_00548f00:
00548F00  85 C0                     TEST EAX,EAX
00548F02  0F 84 97 12 00 00         JZ 0x0054a19f
00548F08  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00548F0E  8D 41 01                  LEA EAX,[ECX + 0x1]
00548F11  50                        PUSH EAX
00548F12  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00548F15  E8 F6 1C 16 00            CALL 0x006aac10
00548F1A  85 C0                     TEST EAX,EAX
00548F1C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00548F1F  8B F8                     MOV EDI,EAX
00548F21  74 46                     JZ 0x00548f69
00548F23  66 83 BB 94 04 00 00 0C   CMP word ptr [EBX + 0x494],0xc
00548F2B  0F 94 C2                  SETZ DL
00548F2E  42                        INC EDX
00548F2F  47                        INC EDI
00548F30  88 10                     MOV byte ptr [EAX],DL
00548F32  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00548F38  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
00548F3B  8B C1                     MOV EAX,ECX
00548F3D  C1 E9 02                  SHR ECX,0x2
00548F40  F3 A5                     MOVSD.REP ES:EDI,ESI
00548F42  8B C8                     MOV ECX,EAX
00548F44  83 E1 03                  AND ECX,0x3
00548F47  F3 A4                     MOVSB.REP ES:EDI,ESI
00548F49  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00548F4C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00548F4F  51                        PUSH ECX
00548F50  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00548F56  6A 00                     PUSH 0x0
00548F58  52                        PUSH EDX
00548F59  6A 31                     PUSH 0x31
00548F5B  E8 D3 AC EB FF            CALL 0x00403c33
00548F60  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00548F63  50                        PUSH EAX
00548F64  E8 F7 20 16 00            CALL 0x006ab060
LAB_00548f69:
00548F69  8D 4D C8                  LEA ECX,[EBP + -0x38]
00548F6C  51                        PUSH ECX
00548F6D  E8 EE 20 16 00            CALL 0x006ab060
00548F72  E9 28 12 00 00            JMP 0x0054a19f
LAB_00548f77:
00548F77  B9 06 00 00 00            MOV ECX,0x6
00548F7C  33 C0                     XOR EAX,EAX
00548F7E  8D BD E4 FE FF FF         LEA EDI,[EBP + 0xfffffee4]
00548F84  F3 AB                     STOSD.REP ES:EDI
00548F86  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
00548F8C  85 C9                     TEST ECX,ECX
00548F8E  74 68                     JZ 0x00548ff8
00548F90  8D 55 D2                  LEA EDX,[EBP + -0x2e]
00548F93  8D 45 D4                  LEA EAX,[EBP + -0x2c]
00548F96  52                        PUSH EDX
00548F97  8D 55 A6                  LEA EDX,[EBP + -0x5a]
00548F9A  50                        PUSH EAX
00548F9B  52                        PUSH EDX
00548F9C  E8 24 89 EB FF            CALL 0x004018c5
00548FA1  8A 45 A6                  MOV AL,byte ptr [EBP + -0x5a]
00548FA4  66 83 BB 94 04 00 00 0C   CMP word ptr [EBX + 0x494],0xc
00548FAC  8A 4D D4                  MOV CL,byte ptr [EBP + -0x2c]
00548FAF  8A 55 D2                  MOV DL,byte ptr [EBP + -0x2e]
00548FB2  88 85 E9 FE FF FF         MOV byte ptr [EBP + 0xfffffee9],AL
00548FB8  88 8D EA FE FF FF         MOV byte ptr [EBP + 0xfffffeea],CL
00548FBE  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
00548FC4  88 95 EB FE FF FF         MOV byte ptr [EBP + 0xfffffeeb],DL
00548FCA  0F 95 C0                  SETNZ AL
00548FCD  48                        DEC EAX
00548FCE  6A FF                     PUSH -0x1
00548FD0  83 E0 05                  AND EAX,0x5
00548FD3  6A 00                     PUSH 0x0
00548FD5  88 85 E4 FE FF FF         MOV byte ptr [EBP + 0xfffffee4],AL
00548FDB  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00548FDE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00548FE4  8D 85 E4 FE FF FF         LEA EAX,[EBP + 0xfffffee4]
00548FEA  50                        PUSH EAX
00548FEB  89 95 E5 FE FF FF         MOV dword ptr [EBP + 0xfffffee5],EDX
00548FF1  6A 16                     PUSH 0x16
00548FF3  E9 A2 11 00 00            JMP 0x0054a19a
LAB_00548ff8:
00548FF8  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00548FFE  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00549004  8D 4D FC                  LEA ECX,[EBP + -0x4]
00549007  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054900A  51                        PUSH ECX
0054900B  8D 4D F4                  LEA ECX,[EBP + -0xc]
0054900E  50                        PUSH EAX
0054900F  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00549015  51                        PUSH ECX
00549016  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
0054901C  2B C6                     SUB EAX,ESI
0054901E  2B CF                     SUB ECX,EDI
00549020  50                        PUSH EAX
00549021  51                        PUSH ECX
00549022  8B CA                     MOV ECX,EDX
00549024  E8 A7 8D 19 00            CALL 0x006e1dd0
00549029  85 C0                     TEST EAX,EAX
0054902B  0F 84 6E 11 00 00         JZ 0x0054a19f
00549031  D9 45 F4                  FLD float ptr [EBP + -0xc]
00549034  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054903A  E8 49 52 1E 00            CALL 0x0072e288
0054903F  D9 45 F8                  FLD float ptr [EBP + -0x8]
00549042  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549048  88 85 E9 FE FF FF         MOV byte ptr [EBP + 0xfffffee9],AL
0054904E  E8 35 52 1E 00            CALL 0x0072e288
00549053  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549056  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
0054905C  88 85 EA FE FF FF         MOV byte ptr [EBP + 0xfffffeea],AL
00549062  E8 21 52 1E 00            CALL 0x0072e288
00549067  3C 04                     CMP AL,0x4
00549069  88 85 EB FE FF FF         MOV byte ptr [EBP + 0xfffffeeb],AL
0054906F  76 07                     JBE 0x00549078
00549071  C6 85 EB FE FF FF 04      MOV byte ptr [EBP + 0xfffffeeb],0x4
LAB_00549078:
00549078  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054907E  6A FF                     PUSH -0x1
00549080  8D 95 E4 FE FF FF         LEA EDX,[EBP + 0xfffffee4]
00549086  6A 00                     PUSH 0x0
00549088  52                        PUSH EDX
00549089  C6 85 E4 FE FF FF 03      MOV byte ptr [EBP + 0xfffffee4],0x3
00549090  6A 16                     PUSH 0x16
00549092  E9 03 11 00 00            JMP 0x0054a19a
switchD_00548db5::caseD_f:
00549097  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
0054909D  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
005490A3  8D 45 FC                  LEA EAX,[EBP + -0x4]
005490A6  8D 4D F8                  LEA ECX,[EBP + -0x8]
005490A9  50                        PUSH EAX
005490AA  8D 45 F4                  LEA EAX,[EBP + -0xc]
005490AD  51                        PUSH ECX
005490AE  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
005490B4  50                        PUSH EAX
005490B5  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
005490BB  2B CE                     SUB ECX,ESI
005490BD  2B C7                     SUB EAX,EDI
005490BF  51                        PUSH ECX
005490C0  50                        PUSH EAX
005490C1  8B CA                     MOV ECX,EDX
005490C3  E8 08 8D 19 00            CALL 0x006e1dd0
005490C8  85 C0                     TEST EAX,EAX
005490CA  0F 84 CF 10 00 00         JZ 0x0054a19f
005490D0  66 83 BB 94 04 00 00 0F   CMP word ptr [EBX + 0x494],0xf
005490D8  D9 45 F4                  FLD float ptr [EBP + -0xc]
005490DB  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
005490E1  0F 95 C1                  SETNZ CL
005490E4  49                        DEC ECX
005490E5  83 E1 F2                  AND ECX,0xfffffff2
005490E8  83 C1 10                  ADD ECX,0x10
005490EB  88 8D 68 FE FF FF         MOV byte ptr [EBP + 0xfffffe68],CL
005490F1  E8 92 51 1E 00            CALL 0x0072e288
005490F6  D9 45 F8                  FLD float ptr [EBP + -0x8]
005490F9  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
005490FF  89 85 69 FE FF FF         MOV dword ptr [EBP + 0xfffffe69],EAX
00549105  E8 7E 51 1E 00            CALL 0x0072e288
0054910A  D9 45 FC                  FLD float ptr [EBP + -0x4]
0054910D  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00549113  89 85 6D FE FF FF         MOV dword ptr [EBP + 0xfffffe6d],EAX
00549119  E8 6A 51 1E 00            CALL 0x0072e288
0054911E  85 C0                     TEST EAX,EAX
00549120  89 85 71 FE FF FF         MOV dword ptr [EBP + 0xfffffe71],EAX
00549126  7D 08                     JGE 0x00549130
00549128  33 C0                     XOR EAX,EAX
0054912A  89 85 71 FE FF FF         MOV dword ptr [EBP + 0xfffffe71],EAX
LAB_00549130:
00549130  83 F8 04                  CMP EAX,0x4
00549133  7E 0A                     JLE 0x0054913f
00549135  C7 85 71 FE FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffffe71],0x4
LAB_0054913f:
0054913F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549145  6A FF                     PUSH -0x1
00549147  8D 95 68 FE FF FF         LEA EDX,[EBP + 0xfffffe68]
0054914D  6A 00                     PUSH 0x0
0054914F  52                        PUSH EDX
00549150  6A 17                     PUSH 0x17
00549152  E8 DC AA EB FF            CALL 0x00403c33
00549157  D9 45 FC                  FLD float ptr [EBP + -0x4]
0054915A  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549160  DF E0                     FNSTSW AX
00549162  F6 C4 01                  TEST AH,0x1
00549165  74 1F                     JZ 0x00549186
00549167  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0054916A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054916D  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00549174  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00549177  51                        PUSH ECX
00549178  52                        PUSH EDX
00549179  50                        PUSH EAX
0054917A  8B CB                     MOV ECX,EBX
0054917C  E8 FE CC EB FF            CALL 0x00405e7f
00549181  E9 19 10 00 00            JMP 0x0054a19f
LAB_00549186:
00549186  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00549189  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0054918C  8B C8                     MOV ECX,EAX
0054918E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00549191  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00549194  51                        PUSH ECX
00549195  52                        PUSH EDX
00549196  50                        PUSH EAX
00549197  8B CB                     MOV ECX,EBX
00549199  E8 E1 CC EB FF            CALL 0x00405e7f
0054919E  E9 FC 0F 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_d:
005491A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005491A6  85 C0                     TEST EAX,EAX
005491A8  0F 84 B0 00 00 00         JZ 0x0054925e
005491AE  66 83 FF 0D               CMP DI,0xd
005491B2  0F 85 E7 0F 00 00         JNZ 0x0054a19f
005491B8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005491BE  33 C0                     XOR EAX,EAX
005491C0  85 C9                     TEST ECX,ECX
005491C2  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
005491C5  74 2D                     JZ 0x005491f4
005491C7  8B 83 EB 00 00 00         MOV EAX,dword ptr [EBX + 0xeb]
005491CD  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
005491D3  52                        PUSH EDX
005491D4  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
005491DA  50                        PUSH EAX
005491DB  8B 83 E3 00 00 00         MOV EAX,dword ptr [EBX + 0xe3]
005491E1  52                        PUSH EDX
005491E2  8B 93 DF 00 00 00         MOV EDX,dword ptr [EBX + 0xdf]
005491E8  50                        PUSH EAX
005491E9  52                        PUSH EDX
005491EA  6A 03                     PUSH 0x3
005491EC  E8 0E 7F EB FF            CALL 0x004010ff
005491F1  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_005491f4:
005491F4  85 C0                     TEST EAX,EAX
005491F6  0F 84 A3 0F 00 00         JZ 0x0054a19f
005491FC  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00549202  40                        INC EAX
00549203  50                        PUSH EAX
00549204  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00549207  E8 04 1A 16 00            CALL 0x006aac10
0054920C  85 C0                     TEST EAX,EAX
0054920E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00549211  74 3D                     JZ 0x00549250
00549213  C6 00 03                  MOV byte ptr [EAX],0x3
00549216  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0054921C  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
0054921F  8B D1                     MOV EDX,ECX
00549221  8D 78 01                  LEA EDI,[EAX + 0x1]
00549224  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00549227  C1 E9 02                  SHR ECX,0x2
0054922A  F3 A5                     MOVSD.REP ES:EDI,ESI
0054922C  8B CA                     MOV ECX,EDX
0054922E  50                        PUSH EAX
0054922F  83 E1 03                  AND ECX,0x3
00549232  6A 00                     PUSH 0x0
00549234  F3 A4                     MOVSB.REP ES:EDI,ESI
00549236  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00549239  51                        PUSH ECX
0054923A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549240  6A 31                     PUSH 0x31
00549242  E8 EC A9 EB FF            CALL 0x00403c33
00549247  8D 55 F0                  LEA EDX,[EBP + -0x10]
0054924A  52                        PUSH EDX
0054924B  E8 10 1E 16 00            CALL 0x006ab060
LAB_00549250:
00549250  8D 45 C0                  LEA EAX,[EBP + -0x40]
00549253  50                        PUSH EAX
00549254  E8 07 1E 16 00            CALL 0x006ab060
00549259  E9 41 0F 00 00            JMP 0x0054a19f
LAB_0054925e:
0054925E  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
00549264  85 D2                     TEST EDX,EDX
00549266  0F 84 33 0F 00 00         JZ 0x0054a19f
0054926C  B9 08 00 00 00            MOV ECX,0x8
00549271  33 C0                     XOR EAX,EAX
00549273  8D BD 44 FE FF FF         LEA EDI,[EBP + 0xfffffe44]
00549279  F3 AB                     STOSD.REP ES:EDI
0054927B  8D 4D A2                  LEA ECX,[EBP + -0x5e]
0054927E  AA                        STOSB ES:EDI
0054927F  51                        PUSH ECX
00549280  8D 45 AC                  LEA EAX,[EBP + -0x54]
00549283  8D 4D CE                  LEA ECX,[EBP + -0x32]
00549286  50                        PUSH EAX
00549287  51                        PUSH ECX
00549288  8B CA                     MOV ECX,EDX
0054928A  E8 36 86 EB FF            CALL 0x004018c5
0054928F  0F BF 55 CE               MOVSX EDX,word ptr [EBP + -0x32]
00549293  0F BF 4D A2               MOVSX ECX,word ptr [EBP + -0x5e]
00549297  0F BF 45 AC               MOVSX EAX,word ptr [EBP + -0x54]
0054929B  89 95 45 FE FF FF         MOV dword ptr [EBP + 0xfffffe45],EDX
005492A1  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
005492A7  89 8D 4D FE FF FF         MOV dword ptr [EBP + 0xfffffe4d],ECX
005492AD  89 85 49 FE FF FF         MOV dword ptr [EBP + 0xfffffe49],EAX
005492B3  C6 85 44 FE FF FF 01      MOV byte ptr [EBP + 0xfffffe44],0x1
005492BA  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
005492BD  6A FF                     PUSH -0x1
005492BF  8D 8D 44 FE FF FF         LEA ECX,[EBP + 0xfffffe44]
005492C5  6A 00                     PUSH 0x0
005492C7  51                        PUSH ECX
005492C8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005492CE  89 85 61 FE FF FF         MOV dword ptr [EBP + 0xfffffe61],EAX
005492D4  6A 17                     PUSH 0x17
005492D6  E9 BF 0E 00 00            JMP 0x0054a19a
switchD_00548db5::caseD_17:
005492DB  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
005492E1  85 C0                     TEST EAX,EAX
005492E3  0F 84 B6 0E 00 00         JZ 0x0054a19f
005492E9  33 D2                     XOR EDX,EDX
005492EB  6A FF                     PUSH -0x1
005492ED  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
005492F0  C6 45 8C 01               MOV byte ptr [EBP + -0x74],0x1
005492F4  88 55 90                  MOV byte ptr [EBP + -0x70],DL
005492F7  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
005492FA  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005492FD  52                        PUSH EDX
005492FE  51                        PUSH ECX
005492FF  89 45 8D                  MOV dword ptr [EBP + -0x73],EAX
00549302  6A 21                     PUSH 0x21
00549304  E9 8F 0E 00 00            JMP 0x0054a198
switchD_00548db5::caseD_16:
00549309  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
0054930F  85 D2                     TEST EDX,EDX
00549311  0F 84 88 0E 00 00         JZ 0x0054a19f
00549317  B9 08 00 00 00            MOV ECX,0x8
0054931C  33 C0                     XOR EAX,EAX
0054931E  8D BD A4 FD FF FF         LEA EDI,[EBP + 0xfffffda4]
00549324  F3 AB                     STOSD.REP ES:EDI
00549326  AA                        STOSB ES:EDI
00549327  8D 45 9A                  LEA EAX,[EBP + -0x66]
0054932A  8D 4D 9E                  LEA ECX,[EBP + -0x62]
0054932D  50                        PUSH EAX
0054932E  8D 45 96                  LEA EAX,[EBP + -0x6a]
00549331  51                        PUSH ECX
00549332  50                        PUSH EAX
00549333  8B CA                     MOV ECX,EDX
00549335  E8 8B 85 EB FF            CALL 0x004018c5
0054933A  0F BF 4D 96               MOVSX ECX,word ptr [EBP + -0x6a]
0054933E  66 83 BB 94 04 00 00 18   CMP word ptr [EBX + 0x494],0x18
00549346  89 8D A5 FD FF FF         MOV dword ptr [EBP + 0xfffffda5],ECX
0054934C  0F BF 55 9E               MOVSX EDX,word ptr [EBP + -0x62]
00549350  0F BF 45 9A               MOVSX EAX,word ptr [EBP + -0x66]
00549354  0F 95 C1                  SETNZ CL
00549357  49                        DEC ECX
00549358  89 95 A9 FD FF FF         MOV dword ptr [EBP + 0xfffffda9],EDX
0054935E  83 E1 EB                  AND ECX,0xffffffeb
00549361  6A FF                     PUSH -0x1
00549363  83 C1 18                  ADD ECX,0x18
00549366  8D 95 A4 FD FF FF         LEA EDX,[EBP + 0xfffffda4]
0054936C  6A 00                     PUSH 0x0
0054936E  88 8D A4 FD FF FF         MOV byte ptr [EBP + 0xfffffda4],CL
00549374  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054937A  52                        PUSH EDX
0054937B  89 85 AD FD FF FF         MOV dword ptr [EBP + 0xfffffdad],EAX
00549381  6A 17                     PUSH 0x17
00549383  E9 12 0E 00 00            JMP 0x0054a19a
switchD_00548db5::caseD_1e:
00549388  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
0054938E  85 C9                     TEST ECX,ECX
00549390  0F 84 09 0E 00 00         JZ 0x0054a19f
00549396  33 C0                     XOR EAX,EAX
00549398  8D 55 D0                  LEA EDX,[EBP + -0x30]
0054939B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0054939E  52                        PUSH EDX
0054939F  66 89 45 DC               MOV word ptr [EBP + -0x24],AX
005493A3  8D 55 A8                  LEA EDX,[EBP + -0x58]
005493A6  88 45 DE                  MOV byte ptr [EBP + -0x22],AL
005493A9  8D 45 AA                  LEA EAX,[EBP + -0x56]
005493AC  50                        PUSH EAX
005493AD  52                        PUSH EDX
005493AE  E8 12 85 EB FF            CALL 0x004018c5
005493B3  66 8B 45 A8               MOV AX,word ptr [EBP + -0x58]
005493B7  66 8B 4D AA               MOV CX,word ptr [EBP + -0x56]
005493BB  66 8B 55 D0               MOV DX,word ptr [EBP + -0x30]
005493BF  66 89 45 D9               MOV word ptr [EBP + -0x27],AX
005493C3  6A FF                     PUSH -0x1
005493C5  8D 45 D8                  LEA EAX,[EBP + -0x28]
005493C8  6A 00                     PUSH 0x0
005493CA  66 89 4D DB               MOV word ptr [EBP + -0x25],CX
005493CE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005493D4  50                        PUSH EAX
005493D5  66 89 55 DD               MOV word ptr [EBP + -0x23],DX
005493D9  C6 45 D8 03               MOV byte ptr [EBP + -0x28],0x3
005493DD  6A 1F                     PUSH 0x1f
005493DF  E9 B6 0D 00 00            JMP 0x0054a19a
switchD_00548db5::caseD_12:
005493E4  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
005493EA  85 C9                     TEST ECX,ECX
005493EC  0F 84 AD 0D 00 00         JZ 0x0054a19f
005493F2  66 83 FF 12               CMP DI,0x12
005493F6  8D 85 39 FF FF FF         LEA EAX,[EBP + 0xffffff39]
005493FC  0F 95 C2                  SETNZ DL
005493FF  42                        INC EDX
00549400  50                        PUSH EAX
00549401  88 95 34 FF FF FF         MOV byte ptr [EBP + 0xffffff34],DL
00549407  8D 95 37 FF FF FF         LEA EDX,[EBP + 0xffffff37]
0054940D  8D 85 35 FF FF FF         LEA EAX,[EBP + 0xffffff35]
00549413  52                        PUSH EDX
00549414  50                        PUSH EAX
00549415  E8 AB 84 EB FF            CALL 0x004018c5
0054941A  6A FF                     PUSH -0x1
0054941C  8D 8D 34 FF FF FF         LEA ECX,[EBP + 0xffffff34]
00549422  6A 00                     PUSH 0x0
00549424  51                        PUSH ECX
00549425  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054942B  6A 1F                     PUSH 0x1f
0054942D  E9 68 0D 00 00            JMP 0x0054a19a
switchD_00548db5::caseD_1b:
00549432  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
00549438  85 D2                     TEST EDX,EDX
0054943A  0F 84 5F 0D 00 00         JZ 0x0054a19f
00549440  B9 08 00 00 00            MOV ECX,0x8
00549445  33 C0                     XOR EAX,EAX
00549447  8D BD C8 FD FF FF         LEA EDI,[EBP + 0xfffffdc8]
0054944D  F3 AB                     STOSD.REP ES:EDI
0054944F  AA                        STOSB ES:EDI
00549450  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00549453  8D 4D CC                  LEA ECX,[EBP + -0x34]
00549456  50                        PUSH EAX
00549457  8D 45 94                  LEA EAX,[EBP + -0x6c]
0054945A  51                        PUSH ECX
0054945B  50                        PUSH EAX
0054945C  8B CA                     MOV ECX,EDX
0054945E  E8 62 84 EB FF            CALL 0x004018c5
00549463  0F BF 4D 94               MOVSX ECX,word ptr [EBP + -0x6c]
00549467  0F BF 55 CC               MOVSX EDX,word ptr [EBP + -0x34]
0054946B  0F BF 45 A4               MOVSX EAX,word ptr [EBP + -0x5c]
0054946F  89 8D C9 FD FF FF         MOV dword ptr [EBP + 0xfffffdc9],ECX
00549475  6A FF                     PUSH -0x1
00549477  8D 8D C8 FD FF FF         LEA ECX,[EBP + 0xfffffdc8]
0054947D  6A 00                     PUSH 0x0
0054947F  51                        PUSH ECX
00549480  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549486  89 95 CD FD FF FF         MOV dword ptr [EBP + 0xfffffdcd],EDX
0054948C  89 85 D1 FD FF FF         MOV dword ptr [EBP + 0xfffffdd1],EAX
00549492  C6 85 C8 FD FF FF 13      MOV byte ptr [EBP + 0xfffffdc8],0x13
00549499  6A 17                     PUSH 0x17
0054949B  E9 FA 0C 00 00            JMP 0x0054a19a
switchD_00548db5::caseD_19:
005494A0  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
005494A6  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
005494AC  8D 45 FC                  LEA EAX,[EBP + -0x4]
005494AF  8D 4D F8                  LEA ECX,[EBP + -0x8]
005494B2  50                        PUSH EAX
005494B3  8D 45 F4                  LEA EAX,[EBP + -0xc]
005494B6  51                        PUSH ECX
005494B7  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
005494BD  50                        PUSH EAX
005494BE  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
005494C4  2B CE                     SUB ECX,ESI
005494C6  2B C7                     SUB EAX,EDI
005494C8  51                        PUSH ECX
005494C9  50                        PUSH EAX
005494CA  8B CA                     MOV ECX,EDX
005494CC  E8 FF 88 19 00            CALL 0x006e1dd0
005494D1  85 C0                     TEST EAX,EAX
005494D3  0F 84 C6 0C 00 00         JZ 0x0054a19f
005494D9  D9 45 F4                  FLD float ptr [EBP + -0xc]
005494DC  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
005494E2  E8 A1 4D 1E 00            CALL 0x0072e288
005494E7  D9 45 F8                  FLD float ptr [EBP + -0x8]
005494EA  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
005494F0  89 85 FD FD FF FF         MOV dword ptr [EBP + 0xfffffdfd],EAX
005494F6  E8 8D 4D 1E 00            CALL 0x0072e288
005494FB  D9 45 FC                  FLD float ptr [EBP + -0x4]
005494FE  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00549504  89 85 01 FE FF FF         MOV dword ptr [EBP + 0xfffffe01],EAX
0054950A  E8 79 4D 1E 00            CALL 0x0072e288
0054950F  85 C0                     TEST EAX,EAX
00549511  89 85 05 FE FF FF         MOV dword ptr [EBP + 0xfffffe05],EAX
00549517  7D 08                     JGE 0x00549521
00549519  33 C0                     XOR EAX,EAX
0054951B  89 85 05 FE FF FF         MOV dword ptr [EBP + 0xfffffe05],EAX
LAB_00549521:
00549521  83 F8 04                  CMP EAX,0x4
00549524  7E 0A                     JLE 0x00549530
00549526  C7 85 05 FE FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffffe05],0x4
LAB_00549530:
00549530  6A FF                     PUSH -0x1
00549532  8D 8D FC FD FF FF         LEA ECX,[EBP + 0xfffffdfc]
00549538  6A 00                     PUSH 0x0
0054953A  51                        PUSH ECX
0054953B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549541  6A 17                     PUSH 0x17
00549543  C6 85 FC FD FF FF 0B      MOV byte ptr [EBP + 0xfffffdfc],0xb
0054954A  E8 E4 A6 EB FF            CALL 0x00403c33
0054954F  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549552  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549558  DF E0                     FNSTSW AX
0054955A  F6 C4 01                  TEST AH,0x1
0054955D  74 1F                     JZ 0x0054957e
0054955F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00549562  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00549565  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0054956C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0054956F  50                        PUSH EAX
00549570  51                        PUSH ECX
00549571  52                        PUSH EDX
00549572  8B CB                     MOV ECX,EBX
00549574  E8 06 C9 EB FF            CALL 0x00405e7f
00549579  E9 21 0C 00 00            JMP 0x0054a19f
LAB_0054957e:
0054957E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00549581  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00549584  8B C2                     MOV EAX,EDX
00549586  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00549589  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0054958C  50                        PUSH EAX
0054958D  51                        PUSH ECX
0054958E  52                        PUSH EDX
0054958F  8B CB                     MOV ECX,EBX
00549591  E8 E9 C8 EB FF            CALL 0x00405e7f
00549596  E9 04 0C 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_1a:
0054959B  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
005495A1  85 C0                     TEST EAX,EAX
005495A3  0F 84 F6 0B 00 00         JZ 0x0054a19f
005495A9  33 C9                     XOR ECX,ECX
005495AB  6A FF                     PUSH -0x1
005495AD  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
005495B0  C6 45 84 04               MOV byte ptr [EBP + -0x7c],0x4
005495B4  88 4D 88                  MOV byte ptr [EBP + -0x78],CL
005495B7  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
005495BA  8D 45 84                  LEA EAX,[EBP + -0x7c]
005495BD  51                        PUSH ECX
005495BE  50                        PUSH EAX
005495BF  89 55 85                  MOV dword ptr [EBP + -0x7b],EDX
005495C2  6A 21                     PUSH 0x21
005495C4  E9 CF 0B 00 00            JMP 0x0054a198
switchD_00548db5::caseD_14:
005495C9  A1 AC B2 7F 00            MOV EAX,[0x007fb2ac]
005495CE  85 C0                     TEST EAX,EAX
005495D0  0F 84 C9 0B 00 00         JZ 0x0054a19f
005495D6  8B 93 AA 04 00 00         MOV EDX,dword ptr [EBX + 0x4aa]
005495DC  33 C9                     XOR ECX,ECX
005495DE  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
005495E4  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
005495EA  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
005495F0  89 8D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ECX
005495F6  89 8D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ECX
005495FC  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
005495FF  85 C9                     TEST ECX,ECX
00549601  0F 84 98 0B 00 00         JZ 0x0054a19f
00549607  8D 8D 40 FF FF FF         LEA ECX,[EBP + 0xffffff40]
0054960D  85 C9                     TEST ECX,ECX
0054960F  74 09                     JZ 0x0054961a
00549611  8B 50 30                  MOV EDX,dword ptr [EAX + 0x30]
00549614  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
LAB_0054961a:
0054961A  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
00549620  85 C9                     TEST ECX,ECX
00549622  74 09                     JZ 0x0054962d
00549624  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
00549627  89 95 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDX
LAB_0054962d:
0054962D  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
00549633  85 C9                     TEST ECX,ECX
00549635  74 09                     JZ 0x00549640
00549637  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
0054963A  89 95 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDX
LAB_00549640:
00549640  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00549643  85 C9                     TEST ECX,ECX
00549645  0F 84 54 0B 00 00         JZ 0x0054a19f
0054964B  6A FF                     PUSH -0x1
0054964D  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
00549653  6A 00                     PUSH 0x0
00549655  50                        PUSH EAX
00549656  6A 23                     PUSH 0x23
00549658  8B CE                     MOV ECX,ESI
0054965A  E8 D4 A5 EB FF            CALL 0x00403c33
0054965F  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00549665  8D 4D FC                  LEA ECX,[EBP + -0x4]
00549668  8D 55 F8                  LEA EDX,[EBP + -0x8]
0054966B  51                        PUSH ECX
0054966C  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00549672  52                        PUSH EDX
00549673  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
00549679  8D 45 F4                  LEA EAX,[EBP + -0xc]
0054967C  2B CA                     SUB ECX,EDX
0054967E  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00549684  50                        PUSH EAX
00549685  2B D7                     SUB EDX,EDI
00549687  51                        PUSH ECX
00549688  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054968E  52                        PUSH EDX
0054968F  E8 3C 87 19 00            CALL 0x006e1dd0
00549694  85 C0                     TEST EAX,EAX
00549696  0F 84 03 0B 00 00         JZ 0x0054a19f
0054969C  D9 45 FC                  FLD float ptr [EBP + -0x4]
0054969F  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
005496A5  DF E0                     FNSTSW AX
005496A7  F6 C4 01                  TEST AH,0x1
005496AA  74 1F                     JZ 0x005496cb
005496AC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005496AF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005496B2  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005496B9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005496BC  51                        PUSH ECX
005496BD  52                        PUSH EDX
005496BE  50                        PUSH EAX
005496BF  8B CB                     MOV ECX,EBX
005496C1  E8 B9 C7 EB FF            CALL 0x00405e7f
005496C6  E9 D4 0A 00 00            JMP 0x0054a19f
LAB_005496cb:
005496CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005496CE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005496D1  8B C8                     MOV ECX,EAX
005496D3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005496D6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005496D9  51                        PUSH ECX
005496DA  52                        PUSH EDX
005496DB  50                        PUSH EAX
005496DC  8B CB                     MOV ECX,EBX
005496DE  E8 9C C7 EB FF            CALL 0x00405e7f
005496E3  E9 B7 0A 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_11:
005496E8  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
005496EE  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
005496F4  8D 4D FC                  LEA ECX,[EBP + -0x4]
005496F7  8D 45 F8                  LEA EAX,[EBP + -0x8]
005496FA  51                        PUSH ECX
005496FB  8D 4D F4                  LEA ECX,[EBP + -0xc]
005496FE  50                        PUSH EAX
005496FF  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00549705  51                        PUSH ECX
00549706  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
0054970C  2B C6                     SUB EAX,ESI
0054970E  2B CF                     SUB ECX,EDI
00549710  50                        PUSH EAX
00549711  51                        PUSH ECX
00549712  8B CA                     MOV ECX,EDX
00549714  E8 B7 86 19 00            CALL 0x006e1dd0
00549719  85 C0                     TEST EAX,EAX
0054971B  0F 84 7E 0A 00 00         JZ 0x0054a19f
00549721  D9 45 F4                  FLD float ptr [EBP + -0xc]
00549724  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054972A  E8 59 4B 1E 00            CALL 0x0072e288
0054972F  D9 45 F8                  FLD float ptr [EBP + -0x8]
00549732  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549738  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
0054973E  E8 45 4B 1E 00            CALL 0x0072e288
00549743  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549746  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
0054974C  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
00549752  E8 31 4B 1E 00            CALL 0x0072e288
00549757  85 C0                     TEST EAX,EAX
00549759  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
0054975F  7D 08                     JGE 0x00549769
00549761  33 C0                     XOR EAX,EAX
00549763  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
LAB_00549769:
00549769  83 F8 04                  CMP EAX,0x4
0054976C  7E 0A                     JLE 0x00549778
0054976E  C7 85 D0 FE FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffffed0],0x4
LAB_00549778:
00549778  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054977E  6A FF                     PUSH -0x1
00549780  8D 95 C8 FE FF FF         LEA EDX,[EBP + 0xfffffec8]
00549786  6A 00                     PUSH 0x0
00549788  52                        PUSH EDX
00549789  6A 19                     PUSH 0x19
0054978B  E8 A3 A4 EB FF            CALL 0x00403c33
00549790  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549793  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549799  DF E0                     FNSTSW AX
0054979B  F6 C4 01                  TEST AH,0x1
0054979E  74 1F                     JZ 0x005497bf
005497A0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005497A3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005497A6  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005497AD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005497B0  51                        PUSH ECX
005497B1  52                        PUSH EDX
005497B2  50                        PUSH EAX
005497B3  8B CB                     MOV ECX,EBX
005497B5  E8 C5 C6 EB FF            CALL 0x00405e7f
005497BA  E9 E0 09 00 00            JMP 0x0054a19f
LAB_005497bf:
005497BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005497C2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005497C5  8B C8                     MOV ECX,EAX
005497C7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005497CA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005497CD  51                        PUSH ECX
005497CE  52                        PUSH EDX
005497CF  50                        PUSH EAX
005497D0  8B CB                     MOV ECX,EBX
005497D2  E8 A8 C6 EB FF            CALL 0x00405e7f
005497D7  E9 C3 09 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_8:
005497DC  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
005497E2  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
005497E8  8D 4D FC                  LEA ECX,[EBP + -0x4]
005497EB  8D 45 F8                  LEA EAX,[EBP + -0x8]
005497EE  51                        PUSH ECX
005497EF  8D 4D F4                  LEA ECX,[EBP + -0xc]
005497F2  50                        PUSH EAX
005497F3  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
005497F9  51                        PUSH ECX
005497FA  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
00549800  2B C6                     SUB EAX,ESI
00549802  2B CF                     SUB ECX,EDI
00549804  50                        PUSH EAX
00549805  51                        PUSH ECX
00549806  8B CA                     MOV ECX,EDX
00549808  E8 C3 85 19 00            CALL 0x006e1dd0
0054980D  85 C0                     TEST EAX,EAX
0054980F  0F 84 8A 09 00 00         JZ 0x0054a19f
00549815  D9 45 F4                  FLD float ptr [EBP + -0xc]
00549818  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054981E  C6 85 8C FE FF FF 02      MOV byte ptr [EBP + 0xfffffe8c],0x2
00549825  E8 5E 4A 1E 00            CALL 0x0072e288
0054982A  D9 45 F8                  FLD float ptr [EBP + -0x8]
0054982D  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549833  88 85 91 FE FF FF         MOV byte ptr [EBP + 0xfffffe91],AL
00549839  E8 4A 4A 1E 00            CALL 0x0072e288
0054983E  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549841  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00549847  88 85 92 FE FF FF         MOV byte ptr [EBP + 0xfffffe92],AL
0054984D  E8 36 4A 1E 00            CALL 0x0072e288
00549852  3C 04                     CMP AL,0x4
00549854  88 85 93 FE FF FF         MOV byte ptr [EBP + 0xfffffe93],AL
0054985A  76 07                     JBE 0x00549863
0054985C  C6 85 93 FE FF FF 04      MOV byte ptr [EBP + 0xfffffe93],0x4
LAB_00549863:
00549863  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549869  6A FF                     PUSH -0x1
0054986B  8D 95 8C FE FF FF         LEA EDX,[EBP + 0xfffffe8c]
00549871  6A 00                     PUSH 0x0
00549873  52                        PUSH EDX
00549874  6A 16                     PUSH 0x16
00549876  E8 B8 A3 EB FF            CALL 0x00403c33
0054987B  D9 45 FC                  FLD float ptr [EBP + -0x4]
0054987E  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549884  DF E0                     FNSTSW AX
00549886  F6 C4 01                  TEST AH,0x1
00549889  74 1F                     JZ 0x005498aa
0054988B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0054988E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00549891  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00549898  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0054989B  51                        PUSH ECX
0054989C  52                        PUSH EDX
0054989D  50                        PUSH EAX
0054989E  8B CB                     MOV ECX,EBX
005498A0  E8 DA C5 EB FF            CALL 0x00405e7f
005498A5  E9 F5 08 00 00            JMP 0x0054a19f
LAB_005498aa:
005498AA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005498AD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005498B0  8B C8                     MOV ECX,EAX
005498B2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005498B5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005498B8  51                        PUSH ECX
005498B9  52                        PUSH EDX
005498BA  50                        PUSH EAX
005498BB  8B CB                     MOV ECX,EBX
005498BD  E8 BD C5 EB FF            CALL 0x00405e7f
005498C2  E9 D8 08 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_9:
005498C7  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
005498CD  85 D2                     TEST EDX,EDX
005498CF  0F 84 CA 08 00 00         JZ 0x0054a19f
005498D5  B9 06 00 00 00            MOV ECX,0x6
005498DA  33 C0                     XOR EAX,EAX
005498DC  8D BD A4 FE FF FF         LEA EDI,[EBP + 0xfffffea4]
005498E2  F3 AB                     STOSD.REP ES:EDI
005498E4  8D 4D BE                  LEA ECX,[EBP + -0x42]
005498E7  8D 45 98                  LEA EAX,[EBP + -0x68]
005498EA  51                        PUSH ECX
005498EB  8D 4D C6                  LEA ECX,[EBP + -0x3a]
005498EE  50                        PUSH EAX
005498EF  51                        PUSH ECX
005498F0  8B CA                     MOV ECX,EDX
005498F2  E8 CE 7F EB FF            CALL 0x004018c5
005498F7  8A 55 C6                  MOV DL,byte ptr [EBP + -0x3a]
005498FA  8A 4D BE                  MOV CL,byte ptr [EBP + -0x42]
005498FD  8A 45 98                  MOV AL,byte ptr [EBP + -0x68]
00549900  88 95 A9 FE FF FF         MOV byte ptr [EBP + 0xfffffea9],DL
00549906  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
0054990C  88 8D AB FE FF FF         MOV byte ptr [EBP + 0xfffffeab],CL
00549912  6A FF                     PUSH -0x1
00549914  8D 8D A4 FE FF FF         LEA ECX,[EBP + 0xfffffea4]
0054991A  88 85 AA FE FF FF         MOV byte ptr [EBP + 0xfffffeaa],AL
00549920  C6 85 A4 FE FF FF 01      MOV byte ptr [EBP + 0xfffffea4],0x1
00549927  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0054992A  6A 00                     PUSH 0x0
0054992C  51                        PUSH ECX
0054992D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549933  6A 16                     PUSH 0x16
00549935  89 85 A5 FE FF FF         MOV dword ptr [EBP + 0xfffffea5],EAX
0054993B  E8 F3 A2 EB FF            CALL 0x00403c33
00549940  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
00549946  8D 55 FC                  LEA EDX,[EBP + -0x4]
00549949  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054994C  52                        PUSH EDX
0054994D  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
00549953  50                        PUSH EAX
00549954  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
0054995A  8D 4D F4                  LEA ECX,[EBP + -0xc]
0054995D  2B D0                     SUB EDX,EAX
0054995F  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00549965  51                        PUSH ECX
00549966  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054996C  2B C6                     SUB EAX,ESI
0054996E  52                        PUSH EDX
0054996F  50                        PUSH EAX
00549970  E8 5B 84 19 00            CALL 0x006e1dd0
00549975  85 C0                     TEST EAX,EAX
00549977  0F 84 22 08 00 00         JZ 0x0054a19f
0054997D  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549980  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549986  DF E0                     FNSTSW AX
00549988  F6 C4 01                  TEST AH,0x1
0054998B  74 0F                     JZ 0x0054999c
0054998D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00549994  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00549997  E9 9A 01 00 00            JMP 0x00549b36
LAB_0054999c:
0054999C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054999F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005499A2  8B D1                     MOV EDX,ECX
005499A4  E9 8D 01 00 00            JMP 0x00549b36
switchD_00548db5::caseD_1f:
005499A9  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
005499AF  85 D2                     TEST EDX,EDX
005499B1  0F 84 E8 07 00 00         JZ 0x0054a19f
005499B7  B9 08 00 00 00            MOV ECX,0x8
005499BC  33 C0                     XOR EAX,EAX
005499BE  8D BD 80 FD FF FF         LEA EDI,[EBP + 0xfffffd80]
005499C4  6A FF                     PUSH -0x1
005499C6  F3 AB                     STOSD.REP ES:EDI
005499C8  AA                        STOSB ES:EDI
005499C9  8D 85 80 FD FF FF         LEA EAX,[EBP + 0xfffffd80]
005499CF  C6 85 80 FD FF FF 19      MOV byte ptr [EBP + 0xfffffd80],0x19
005499D6  8B 52 18                  MOV EDX,dword ptr [EDX + 0x18]
005499D9  6A 00                     PUSH 0x0
005499DB  50                        PUSH EAX
005499DC  6A 17                     PUSH 0x17
005499DE  8B CE                     MOV ECX,ESI
005499E0  89 95 9D FD FF FF         MOV dword ptr [EBP + 0xfffffd9d],EDX
005499E6  E8 48 A2 EB FF            CALL 0x00403c33
005499EB  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
005499F1  8D 4D FC                  LEA ECX,[EBP + -0x4]
005499F4  8D 55 F8                  LEA EDX,[EBP + -0x8]
005499F7  51                        PUSH ECX
005499F8  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
005499FE  52                        PUSH EDX
005499FF  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
00549A05  8D 45 F4                  LEA EAX,[EBP + -0xc]
00549A08  2B CA                     SUB ECX,EDX
00549A0A  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00549A10  50                        PUSH EAX
00549A11  2B D7                     SUB EDX,EDI
00549A13  51                        PUSH ECX
00549A14  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00549A1A  52                        PUSH EDX
00549A1B  E8 B0 83 19 00            CALL 0x006e1dd0
00549A20  85 C0                     TEST EAX,EAX
00549A22  0F 84 77 07 00 00         JZ 0x0054a19f
00549A28  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549A2B  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549A31  DF E0                     FNSTSW AX
00549A33  F6 C4 01                  TEST AH,0x1
00549A36  74 0F                     JZ 0x00549a47
00549A38  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00549A3F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00549A42  E9 EC 01 00 00            JMP 0x00549c33
LAB_00549a47:
00549A47  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00549A4A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00549A4D  8B C8                     MOV ECX,EAX
00549A4F  E9 DF 01 00 00            JMP 0x00549c33
switchD_00548db5::caseD_1d:
00549A54  83 BB A2 04 00 00 18      CMP dword ptr [EBX + 0x4a2],0x18
00549A5B  0F 84 EA 00 00 00         JZ 0x00549b4b
00549A61  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
00549A67  85 C9                     TEST ECX,ECX
00549A69  0F 84 30 07 00 00         JZ 0x0054a19f
00549A6F  33 D2                     XOR EDX,EDX
00549A71  8D 45 8A                  LEA EAX,[EBP + -0x76]
00549A74  89 95 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EDX
00549A7A  50                        PUSH EAX
00549A7B  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
00549A81  8D 45 A0                  LEA EAX,[EBP + -0x60]
00549A84  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
00549A8A  C6 85 24 FF FF FF 02      MOV byte ptr [EBP + 0xffffff24],0x2
00549A91  88 95 30 FF FF FF         MOV byte ptr [EBP + 0xffffff30],DL
00549A97  8D 55 B6                  LEA EDX,[EBP + -0x4a]
00549A9A  52                        PUSH EDX
00549A9B  50                        PUSH EAX
00549A9C  E8 24 7E EB FF            CALL 0x004018c5
00549AA1  0F BF 4D A0               MOVSX ECX,word ptr [EBP + -0x60]
00549AA5  0F BF 55 B6               MOVSX EDX,word ptr [EBP + -0x4a]
00549AA9  0F BF 45 8A               MOVSX EAX,word ptr [EBP + -0x76]
00549AAD  89 8D 25 FF FF FF         MOV dword ptr [EBP + 0xffffff25],ECX
00549AB3  6A FF                     PUSH -0x1
00549AB5  8D 8D 24 FF FF FF         LEA ECX,[EBP + 0xffffff24]
00549ABB  6A 00                     PUSH 0x0
00549ABD  51                        PUSH ECX
00549ABE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549AC4  6A 1A                     PUSH 0x1a
00549AC6  89 95 29 FF FF FF         MOV dword ptr [EBP + 0xffffff29],EDX
00549ACC  89 85 2D FF FF FF         MOV dword ptr [EBP + 0xffffff2d],EAX
00549AD2  E8 5C A1 EB FF            CALL 0x00403c33
00549AD7  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
00549ADD  8D 55 FC                  LEA EDX,[EBP + -0x4]
00549AE0  8D 45 F8                  LEA EAX,[EBP + -0x8]
00549AE3  52                        PUSH EDX
00549AE4  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
00549AEA  50                        PUSH EAX
00549AEB  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
00549AF1  8D 4D F4                  LEA ECX,[EBP + -0xc]
00549AF4  2B D0                     SUB EDX,EAX
00549AF6  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00549AFC  51                        PUSH ECX
00549AFD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00549B03  2B C6                     SUB EAX,ESI
00549B05  52                        PUSH EDX
00549B06  50                        PUSH EAX
00549B07  E8 C4 82 19 00            CALL 0x006e1dd0
00549B0C  85 C0                     TEST EAX,EAX
00549B0E  0F 84 8B 06 00 00         JZ 0x0054a19f
00549B14  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549B17  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549B1D  DF E0                     FNSTSW AX
00549B1F  F6 C4 01                  TEST AH,0x1
00549B22  74 09                     JZ 0x00549b2d
00549B24  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00549B2B  EB 06                     JMP 0x00549b33
LAB_00549b2d:
00549B2D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00549B30  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00549b33:
00549B33  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_00549b36:
00549B36  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00549B39  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00549B3C  52                        PUSH EDX
00549B3D  50                        PUSH EAX
00549B3E  51                        PUSH ECX
00549B3F  8B CB                     MOV ECX,EBX
00549B41  E8 39 C3 EB FF            CALL 0x00405e7f
00549B46  E9 54 06 00 00            JMP 0x0054a19f
LAB_00549b4b:
00549B4B  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00549B51  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00549B57  8D 45 FC                  LEA EAX,[EBP + -0x4]
00549B5A  8D 4D F8                  LEA ECX,[EBP + -0x8]
00549B5D  50                        PUSH EAX
00549B5E  8D 45 F4                  LEA EAX,[EBP + -0xc]
00549B61  51                        PUSH ECX
00549B62  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00549B68  50                        PUSH EAX
00549B69  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00549B6F  2B CE                     SUB ECX,ESI
00549B71  2B C7                     SUB EAX,EDI
00549B73  51                        PUSH ECX
00549B74  50                        PUSH EAX
00549B75  8B CA                     MOV ECX,EDX
00549B77  E8 54 82 19 00            CALL 0x006e1dd0
00549B7C  85 C0                     TEST EAX,EAX
00549B7E  0F 84 1B 06 00 00         JZ 0x0054a19f
00549B84  D9 45 F4                  FLD float ptr [EBP + -0xc]
00549B87  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549B8D  33 C9                     XOR ECX,ECX
00549B8F  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
00549B95  C6 85 74 FF FF FF 01      MOV byte ptr [EBP + 0xffffff74],0x1
00549B9C  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
00549BA2  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
00549BA8  88 4D 80                  MOV byte ptr [EBP + -0x80],CL
00549BAB  E8 D8 46 1E 00            CALL 0x0072e288
00549BB0  D9 45 F8                  FLD float ptr [EBP + -0x8]
00549BB3  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549BB9  89 85 75 FF FF FF         MOV dword ptr [EBP + 0xffffff75],EAX
00549BBF  E8 C4 46 1E 00            CALL 0x0072e288
00549BC4  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549BC7  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00549BCD  89 85 79 FF FF FF         MOV dword ptr [EBP + 0xffffff79],EAX
00549BD3  E8 B0 46 1E 00            CALL 0x0072e288
00549BD8  85 C0                     TEST EAX,EAX
00549BDA  89 85 7D FF FF FF         MOV dword ptr [EBP + 0xffffff7d],EAX
00549BE0  7D 08                     JGE 0x00549bea
00549BE2  33 C0                     XOR EAX,EAX
00549BE4  89 85 7D FF FF FF         MOV dword ptr [EBP + 0xffffff7d],EAX
LAB_00549bea:
00549BEA  83 F8 04                  CMP EAX,0x4
00549BED  7E 0A                     JLE 0x00549bf9
00549BEF  C7 85 7D FF FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffff7d],0x4
LAB_00549bf9:
00549BF9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549BFF  6A FF                     PUSH -0x1
00549C01  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
00549C07  6A 00                     PUSH 0x0
00549C09  52                        PUSH EDX
00549C0A  6A 1A                     PUSH 0x1a
00549C0C  E8 22 A0 EB FF            CALL 0x00403c33
00549C11  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549C14  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549C1A  DF E0                     FNSTSW AX
00549C1C  F6 C4 01                  TEST AH,0x1
00549C1F  74 09                     JZ 0x00549c2a
00549C21  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00549C28  EB 06                     JMP 0x00549c30
LAB_00549c2a:
00549C2A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00549C2D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00549c30:
00549C30  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00549c33:
00549C33  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00549C36  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00549C39  51                        PUSH ECX
00549C3A  52                        PUSH EDX
00549C3B  50                        PUSH EAX
00549C3C  8B CB                     MOV ECX,EBX
00549C3E  E8 3C C2 EB FF            CALL 0x00405e7f
00549C43  E9 57 05 00 00            JMP 0x0054a19f
switchD_00548db5::caseD_1c:
00549C48  D9 83 FF 00 00 00         FLD float ptr [EBX + 0xff]
00549C4E  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549C54  33 C9                     XOR ECX,ECX
00549C56  8A 93 AA 04 00 00         MOV DL,byte ptr [EBX + 0x4aa]
00549C5C  89 8D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],ECX
00549C62  88 95 FC FE FF FF         MOV byte ptr [EBP + 0xfffffefc],DL
00549C68  89 8D 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],ECX
00549C6E  89 8D 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],ECX
00549C74  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
00549C7A  66 89 8D 0C FF FF FF      MOV word ptr [EBP + 0xffffff0c],CX
00549C81  E8 02 46 1E 00            CALL 0x0072e288
00549C86  D9 83 03 01 00 00         FLD float ptr [EBX + 0x103]
00549C8C  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00549C92  89 85 FD FE FF FF         MOV dword ptr [EBP + 0xfffffefd],EAX
00549C98  E8 EB 45 1E 00            CALL 0x0072e288
00549C9D  D9 83 07 01 00 00         FLD float ptr [EBX + 0x107]
00549CA3  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549CA9  89 85 01 FF FF FF         MOV dword ptr [EBP + 0xffffff01],EAX
00549CAF  DF E0                     FNSTSW AX
00549CB1  F6 C4 01                  TEST AH,0x1
00549CB4  74 08                     JZ 0x00549cbe
00549CB6  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
00549CBC  EB 0C                     JMP 0x00549cca
LAB_00549cbe:
00549CBE  D9 83 07 01 00 00         FLD float ptr [EBX + 0x107]
00549CC4  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
LAB_00549cca:
00549CCA  E8 B9 45 1E 00            CALL 0x0072e288
00549CCF  8A 8B FB 00 00 00         MOV CL,byte ptr [EBX + 0xfb]
00549CD5  89 85 05 FF FF FF         MOV dword ptr [EBP + 0xffffff05],EAX
00549CDB  8B 83 F7 00 00 00         MOV EAX,dword ptr [EBX + 0xf7]
00549CE1  6A FF                     PUSH -0x1
00549CE3  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00549CE9  6A 00                     PUSH 0x0
00549CEB  89 85 09 FF FF FF         MOV dword ptr [EBP + 0xffffff09],EAX
00549CF1  88 8D 0D FF FF FF         MOV byte ptr [EBP + 0xffffff0d],CL
00549CF7  52                        PUSH EDX
00549CF8  E9 99 04 00 00            JMP 0x0054a196
switchD_00548db5::caseD_1:
00549CFD  8B BB A2 04 00 00         MOV EDI,dword ptr [EBX + 0x4a2]
00549D03  8D 47 FD                  LEA EAX,[EDI + -0x3]
00549D06  83 F8 4B                  CMP EAX,0x4b
00549D09  0F 87 90 04 00 00         JA 0x0054a19f
00549D0F  33 C9                     XOR ECX,ECX
00549D11  8A 88 C0 A2 54 00         MOV CL,byte ptr [EAX + 0x54a2c0]
switchD_00549d17::switchD:
00549D17  FF 24 8D A8 A2 54 00      JMP dword ptr [ECX*0x4 + 0x54a2a8]
switchD_00549d17::caseD_e:
00549D1E  A1 AC B2 7F 00            MOV EAX,[0x007fb2ac]
00549D23  85 C0                     TEST EAX,EAX
00549D25  0F 84 74 04 00 00         JZ 0x0054a19f
00549D2B  8B 8B AA 04 00 00         MOV ECX,dword ptr [EBX + 0x4aa]
00549D31  33 D2                     XOR EDX,EDX
00549D33  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
00549D39  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
00549D3F  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
00549D45  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
00549D4B  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
00549D51  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00549D54  85 C9                     TEST ECX,ECX
00549D56  0F 84 43 04 00 00         JZ 0x0054a19f
00549D5C  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
00549D62  85 D2                     TEST EDX,EDX
00549D64  74 09                     JZ 0x00549d6f
00549D66  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
00549D69  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
LAB_00549d6f:
00549D6F  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
00549D75  85 D2                     TEST EDX,EDX
00549D77  74 09                     JZ 0x00549d82
00549D79  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00549D7C  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
LAB_00549d82:
00549D82  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
00549D88  85 D2                     TEST EDX,EDX
00549D8A  74 09                     JZ 0x00549d95
00549D8C  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
00549D8F  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
LAB_00549d95:
00549D95  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00549D98  85 C9                     TEST ECX,ECX
00549D9A  0F 84 FF 03 00 00         JZ 0x0054a19f
00549DA0  6A FF                     PUSH -0x1
00549DA2  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
00549DA8  6A 00                     PUSH 0x0
00549DAA  52                        PUSH EDX
00549DAB  6A 23                     PUSH 0x23
00549DAD  8B CE                     MOV ECX,ESI
00549DAF  E8 7F 9E EB FF            CALL 0x00403c33
00549DB4  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
00549DBA  8D 45 FC                  LEA EAX,[EBP + -0x4]
00549DBD  8D 4D F8                  LEA ECX,[EBP + -0x8]
00549DC0  50                        PUSH EAX
00549DC1  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00549DC7  51                        PUSH ECX
00549DC8  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
00549DCE  8D 55 F4                  LEA EDX,[EBP + -0xc]
00549DD1  2B C1                     SUB EAX,ECX
00549DD3  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
00549DD9  52                        PUSH EDX
00549DDA  2B CE                     SUB ECX,ESI
00549DDC  50                        PUSH EAX
00549DDD  51                        PUSH ECX
00549DDE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00549DE4  E8 E7 7F 19 00            CALL 0x006e1dd0
00549DE9  85 C0                     TEST EAX,EAX
00549DEB  0F 84 AE 03 00 00         JZ 0x0054a19f
00549DF1  D9 45 FC                  FLD float ptr [EBP + -0x4]
00549DF4  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00549DFA  DF E0                     FNSTSW AX
00549DFC  F6 C4 01                  TEST AH,0x1
00549DFF  74 1F                     JZ 0x00549e20
00549E01  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00549E04  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00549E07  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00549E0E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00549E11  50                        PUSH EAX
00549E12  51                        PUSH ECX
00549E13  52                        PUSH EDX
00549E14  8B CB                     MOV ECX,EBX
00549E16  E8 64 C0 EB FF            CALL 0x00405e7f
00549E1B  E9 7F 03 00 00            JMP 0x0054a19f
LAB_00549e20:
00549E20  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00549E23  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00549E26  8B C2                     MOV EAX,EDX
00549E28  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00549E2B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00549E2E  50                        PUSH EAX
00549E2F  51                        PUSH ECX
00549E30  52                        PUSH EDX
00549E31  8B CB                     MOV ECX,EBX
00549E33  E8 47 C0 EB FF            CALL 0x00405e7f
00549E38  E9 62 03 00 00            JMP 0x0054a19f
switchD_00549d17::caseD_3:
00549E3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00549E40  85 C0                     TEST EAX,EAX
00549E42  0F 84 57 03 00 00         JZ 0x0054a19f
00549E48  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00549E4E  33 C0                     XOR EAX,EAX
00549E50  85 C9                     TEST ECX,ECX
00549E52  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00549E55  74 35                     JZ 0x00549e8c
00549E57  8B 93 EB 00 00 00         MOV EDX,dword ptr [EBX + 0xeb]
00549E5D  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00549E63  50                        PUSH EAX
00549E64  8B 83 E7 00 00 00         MOV EAX,dword ptr [EBX + 0xe7]
00549E6A  52                        PUSH EDX
00549E6B  8B 93 E3 00 00 00         MOV EDX,dword ptr [EBX + 0xe3]
00549E71  50                        PUSH EAX
00549E72  8B 83 DF 00 00 00         MOV EAX,dword ptr [EBX + 0xdf]
00549E78  52                        PUSH EDX
00549E79  33 D2                     XOR EDX,EDX
00549E7B  83 FF 0A                  CMP EDI,0xa
00549E7E  50                        PUSH EAX
00549E7F  0F 94 C2                  SETZ DL
00549E82  42                        INC EDX
00549E83  52                        PUSH EDX
00549E84  E8 76 72 EB FF            CALL 0x004010ff
00549E89  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_00549e8c:
00549E8C  85 C0                     TEST EAX,EAX
00549E8E  0F 84 0B 03 00 00         JZ 0x0054a19f
00549E94  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00549E9A  40                        INC EAX
00549E9B  50                        PUSH EAX
00549E9C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00549E9F  E8 6C 0D 16 00            CALL 0x006aac10
00549EA4  85 C0                     TEST EAX,EAX
00549EA6  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00549EAC  8B F8                     MOV EDI,EAX
00549EAE  74 4B                     JZ 0x00549efb
00549EB0  83 BB A2 04 00 00 0A      CMP dword ptr [EBX + 0x4a2],0xa
00549EB7  0F 94 C1                  SETZ CL
00549EBA  41                        INC ECX
00549EBB  47                        INC EDI
00549EBC  88 08                     MOV byte ptr [EAX],CL
00549EBE  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00549EC4  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
00549EC7  8B D1                     MOV EDX,ECX
00549EC9  C1 E9 02                  SHR ECX,0x2
00549ECC  F3 A5                     MOVSD.REP ES:EDI,ESI
00549ECE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00549ED1  8B CA                     MOV ECX,EDX
00549ED3  83 E1 03                  AND ECX,0x3
00549ED6  50                        PUSH EAX
00549ED7  F3 A4                     MOVSB.REP ES:EDI,ESI
00549ED9  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00549EDF  6A 00                     PUSH 0x0
00549EE1  51                        PUSH ECX
00549EE2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549EE8  6A 31                     PUSH 0x31
00549EEA  E8 44 9D EB FF            CALL 0x00403c33
00549EEF  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
00549EF5  52                        PUSH EDX
00549EF6  E8 65 11 16 00            CALL 0x006ab060
LAB_00549efb:
00549EFB  8D 45 B8                  LEA EAX,[EBP + -0x48]
00549EFE  50                        PUSH EAX
00549EFF  E8 5C 11 16 00            CALL 0x006ab060
00549F04  E9 96 02 00 00            JMP 0x0054a19f
switchD_00549d17::caseD_2c:
00549F09  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00549F0C  85 C0                     TEST EAX,EAX
00549F0E  0F 84 8B 02 00 00         JZ 0x0054a19f
00549F14  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00549F1A  33 C0                     XOR EAX,EAX
00549F1C  85 C9                     TEST ECX,ECX
00549F1E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00549F21  74 2B                     JZ 0x00549f4e
00549F23  8B 83 EB 00 00 00         MOV EAX,dword ptr [EBX + 0xeb]
00549F29  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
00549F2F  52                        PUSH EDX
00549F30  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00549F36  50                        PUSH EAX
00549F37  8B 83 E3 00 00 00         MOV EAX,dword ptr [EBX + 0xe3]
00549F3D  52                        PUSH EDX
00549F3E  8B 93 DF 00 00 00         MOV EDX,dword ptr [EBX + 0xdf]
00549F44  50                        PUSH EAX
00549F45  52                        PUSH EDX
00549F46  E8 D7 B2 EB FF            CALL 0x00405222
00549F4B  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_00549f4e:
00549F4E  85 C0                     TEST EAX,EAX
00549F50  0F 84 49 02 00 00         JZ 0x0054a19f
00549F56  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00549F5C  40                        INC EAX
00549F5D  50                        PUSH EAX
00549F5E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00549F61  E8 AA 0C 16 00            CALL 0x006aac10
00549F66  85 C0                     TEST EAX,EAX
00549F68  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00549F6B  74 3D                     JZ 0x00549faa
00549F6D  C6 00 04                  MOV byte ptr [EAX],0x4
00549F70  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00549F76  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
00549F79  8B D1                     MOV EDX,ECX
00549F7B  8D 78 01                  LEA EDI,[EAX + 0x1]
00549F7E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00549F81  C1 E9 02                  SHR ECX,0x2
00549F84  F3 A5                     MOVSD.REP ES:EDI,ESI
00549F86  8B CA                     MOV ECX,EDX
00549F88  50                        PUSH EAX
00549F89  83 E1 03                  AND ECX,0x3
00549F8C  6A 00                     PUSH 0x0
00549F8E  F3 A4                     MOVSB.REP ES:EDI,ESI
00549F90  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00549F93  51                        PUSH ECX
00549F94  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00549F9A  6A 31                     PUSH 0x31
00549F9C  E8 92 9C EB FF            CALL 0x00403c33
00549FA1  8D 55 E0                  LEA EDX,[EBP + -0x20]
00549FA4  52                        PUSH EDX
00549FA5  E8 B6 10 16 00            CALL 0x006ab060
LAB_00549faa:
00549FAA  8D 45 B0                  LEA EAX,[EBP + -0x50]
00549FAD  50                        PUSH EAX
00549FAE  E8 AD 10 16 00            CALL 0x006ab060
00549FB3  E9 E7 01 00 00            JMP 0x0054a19f
switchD_00549d17::caseD_5:
00549FB8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00549FBB  85 C0                     TEST EAX,EAX
00549FBD  0F 84 A6 00 00 00         JZ 0x0054a069
00549FC3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00549FC9  33 C0                     XOR EAX,EAX
00549FCB  85 C9                     TEST ECX,ECX
00549FCD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00549FD0  74 2D                     JZ 0x00549fff
00549FD2  8B 83 EB 00 00 00         MOV EAX,dword ptr [EBX + 0xeb]
00549FD8  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
00549FDE  52                        PUSH EDX
00549FDF  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00549FE5  50                        PUSH EAX
00549FE6  8B 83 E3 00 00 00         MOV EAX,dword ptr [EBX + 0xe3]
00549FEC  52                        PUSH EDX
00549FED  8B 93 DF 00 00 00         MOV EDX,dword ptr [EBX + 0xdf]
00549FF3  50                        PUSH EAX
00549FF4  52                        PUSH EDX
00549FF5  6A 03                     PUSH 0x3
00549FF7  E8 03 71 EB FF            CALL 0x004010ff
00549FFC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00549fff:
00549FFF  85 C0                     TEST EAX,EAX
0054A001  0F 84 98 01 00 00         JZ 0x0054a19f
0054A007  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
0054A00D  40                        INC EAX
0054A00E  50                        PUSH EAX
0054A00F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0054A012  E8 F9 0B 16 00            CALL 0x006aac10
0054A017  85 C0                     TEST EAX,EAX
0054A019  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0054A01C  74 3D                     JZ 0x0054a05b
0054A01E  C6 00 03                  MOV byte ptr [EAX],0x3
0054A021  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0054A027  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0054A02A  8B D1                     MOV EDX,ECX
0054A02C  8D 78 01                  LEA EDI,[EAX + 0x1]
0054A02F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0054A032  C1 E9 02                  SHR ECX,0x2
0054A035  F3 A5                     MOVSD.REP ES:EDI,ESI
0054A037  8B CA                     MOV ECX,EDX
0054A039  50                        PUSH EAX
0054A03A  83 E1 03                  AND ECX,0x3
0054A03D  6A 00                     PUSH 0x0
0054A03F  F3 A4                     MOVSB.REP ES:EDI,ESI
0054A041  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0054A044  51                        PUSH ECX
0054A045  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054A04B  6A 31                     PUSH 0x31
0054A04D  E8 E1 9B EB FF            CALL 0x00403c33
0054A052  8D 55 EC                  LEA EDX,[EBP + -0x14]
0054A055  52                        PUSH EDX
0054A056  E8 05 10 16 00            CALL 0x006ab060
LAB_0054a05b:
0054A05B  8D 45 E8                  LEA EAX,[EBP + -0x18]
0054A05E  50                        PUSH EAX
0054A05F  E8 FC 0F 16 00            CALL 0x006ab060
0054A064  E9 36 01 00 00            JMP 0x0054a19f
LAB_0054a069:
0054A069  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
0054A06F  85 D2                     TEST EDX,EDX
0054A071  0F 84 28 01 00 00         JZ 0x0054a19f
0054A077  B9 08 00 00 00            MOV ECX,0x8
0054A07C  33 C0                     XOR EAX,EAX
0054A07E  8D BD 20 FE FF FF         LEA EDI,[EBP + 0xfffffe20]
0054A084  F3 AB                     STOSD.REP ES:EDI
0054A086  8D 4D D6                  LEA ECX,[EBP + -0x2a]
0054A089  AA                        STOSB ES:EDI
0054A08A  51                        PUSH ECX
0054A08B  8D 45 9C                  LEA EAX,[EBP + -0x64]
0054A08E  8D 4D AE                  LEA ECX,[EBP + -0x52]
0054A091  50                        PUSH EAX
0054A092  51                        PUSH ECX
0054A093  8B CA                     MOV ECX,EDX
0054A095  E8 2B 78 EB FF            CALL 0x004018c5
0054A09A  0F BF 55 AE               MOVSX EDX,word ptr [EBP + -0x52]
0054A09E  0F BF 4D D6               MOVSX ECX,word ptr [EBP + -0x2a]
0054A0A2  0F BF 45 9C               MOVSX EAX,word ptr [EBP + -0x64]
0054A0A6  89 95 21 FE FF FF         MOV dword ptr [EBP + 0xfffffe21],EDX
0054A0AC  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
0054A0B2  89 8D 29 FE FF FF         MOV dword ptr [EBP + 0xfffffe29],ECX
0054A0B8  89 85 25 FE FF FF         MOV dword ptr [EBP + 0xfffffe25],EAX
0054A0BE  C6 85 20 FE FF FF 01      MOV byte ptr [EBP + 0xfffffe20],0x1
0054A0C5  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0054A0C8  6A FF                     PUSH -0x1
0054A0CA  8D 8D 20 FE FF FF         LEA ECX,[EBP + 0xfffffe20]
0054A0D0  6A 00                     PUSH 0x0
0054A0D2  51                        PUSH ECX
0054A0D3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054A0D9  89 85 3D FE FF FF         MOV dword ptr [EBP + 0xfffffe3d],EAX
0054A0DF  6A 17                     PUSH 0x17
0054A0E1  E9 B4 00 00 00            JMP 0x0054a19a
switchD_00549d17::caseD_4e:
0054A0E6  D9 83 FF 00 00 00         FLD float ptr [EBX + 0xff]
0054A0EC  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054A0F2  33 D2                     XOR EDX,EDX
0054A0F4  8A 83 AA 04 00 00         MOV AL,byte ptr [EBX + 0x4aa]
0054A0FA  89 95 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDX
0054A100  88 85 10 FF FF FF         MOV byte ptr [EBP + 0xffffff10],AL
0054A106  89 95 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EDX
0054A10C  89 95 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EDX
0054A112  89 95 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDX
0054A118  66 89 95 20 FF FF FF      MOV word ptr [EBP + 0xffffff20],DX
0054A11F  E8 64 41 1E 00            CALL 0x0072e288
0054A124  D9 83 03 01 00 00         FLD float ptr [EBX + 0x103]
0054A12A  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054A130  89 85 11 FF FF FF         MOV dword ptr [EBP + 0xffffff11],EAX
0054A136  E8 4D 41 1E 00            CALL 0x0072e288
0054A13B  D9 83 07 01 00 00         FLD float ptr [EBX + 0x107]
0054A141  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0054A147  89 85 15 FF FF FF         MOV dword ptr [EBP + 0xffffff15],EAX
0054A14D  DF E0                     FNSTSW AX
0054A14F  F6 C4 01                  TEST AH,0x1
0054A152  74 08                     JZ 0x0054a15c
0054A154  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
0054A15A  EB 0C                     JMP 0x0054a168
LAB_0054a15c:
0054A15C  D9 83 07 01 00 00         FLD float ptr [EBX + 0x107]
0054A162  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
LAB_0054a168:
0054A168  E8 1B 41 1E 00            CALL 0x0072e288
0054A16D  8B 8B F7 00 00 00         MOV ECX,dword ptr [EBX + 0xf7]
0054A173  8A 93 FB 00 00 00         MOV DL,byte ptr [EBX + 0xfb]
0054A179  89 85 19 FF FF FF         MOV dword ptr [EBP + 0xffffff19],EAX
0054A17F  6A FF                     PUSH -0x1
0054A181  8D 85 10 FF FF FF         LEA EAX,[EBP + 0xffffff10]
0054A187  6A 00                     PUSH 0x0
0054A189  89 8D 1D FF FF FF         MOV dword ptr [EBP + 0xffffff1d],ECX
0054A18F  88 95 21 FF FF FF         MOV byte ptr [EBP + 0xffffff21],DL
0054A195  50                        PUSH EAX
LAB_0054a196:
0054A196  6A 18                     PUSH 0x18
LAB_0054a198:
0054A198  8B CE                     MOV ECX,ESI
LAB_0054a19a:
0054A19A  E8 94 9A EB FF            CALL 0x00403c33
switchD_00548db5::caseD_3:
0054A19F  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
0054A1A5  85 C0                     TEST EAX,EAX
0054A1A7  74 23                     JZ 0x0054a1cc
0054A1A9  8A 83 D3 00 00 00         MOV AL,byte ptr [EBX + 0xd3]
0054A1AF  84 C0                     TEST AL,AL
0054A1B1  75 19                     JNZ 0x0054a1cc
0054A1B3  C7 83 A6 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4a6],0x1
0054A1BD  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0054A1C3  85 C9                     TEST ECX,ECX
0054A1C5  74 05                     JZ 0x0054a1cc
0054A1C7  E8 CC 85 EB FF            CALL 0x00402798
LAB_0054a1cc:
0054A1CC  8B 8D 3C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd3c]
0054A1D2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054A1D8  5F                        POP EDI
0054A1D9  5E                        POP ESI
0054A1DA  5B                        POP EBX
0054A1DB  8B E5                     MOV ESP,EBP
0054A1DD  5D                        POP EBP
0054A1DE  C2 04 00                  RET 0x4
LAB_0054a1e1:
0054A1E1  8B 95 3C FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd3c]
0054A1E7  68 90 7F 7C 00            PUSH 0x7c7f90
0054A1EC  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054A1F1  56                        PUSH ESI
0054A1F2  6A 00                     PUSH 0x0
0054A1F4  68 71 06 00 00            PUSH 0x671
0054A1F9  68 60 7D 7C 00            PUSH 0x7c7d60
0054A1FE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054A204  E8 C7 32 16 00            CALL 0x006ad4d0
0054A209  83 C4 18                  ADD ESP,0x18
0054A20C  85 C0                     TEST EAX,EAX
0054A20E  74 01                     JZ 0x0054a211
0054A210  CC                        INT3
LAB_0054a211:
0054A211  68 72 06 00 00            PUSH 0x672
0054A216  68 60 7D 7C 00            PUSH 0x7c7d60
0054A21B  6A 00                     PUSH 0x0
0054A21D  56                        PUSH ESI
0054A21E  E8 1D BC 15 00            CALL 0x006a5e40
0054A223  5F                        POP EDI
0054A224  5E                        POP ESI
0054A225  5B                        POP EBX
0054A226  8B E5                     MOV ESP,EBP
0054A228  5D                        POP EBP
0054A229  C2 04 00                  RET 0x4
