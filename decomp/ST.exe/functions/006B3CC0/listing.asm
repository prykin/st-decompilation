FUN_006b3cc0:
006B3CC0  55                        PUSH EBP
006B3CC1  8B EC                     MOV EBP,ESP
006B3CC3  56                        PUSH ESI
006B3CC4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B3CC7  85 F6                     TEST ESI,ESI
006B3CC9  0F 84 FC 00 00 00         JZ 0x006b3dcb
006B3CCF  8B 06                     MOV EAX,dword ptr [ESI]
006B3CD1  57                        PUSH EDI
006B3CD2  85 C0                     TEST EAX,EAX
006B3CD4  74 5D                     JZ 0x006b3d33
006B3CD6  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006B3CD9  BF 00 00 00 04            MOV EDI,0x4000000
006B3CDE  85 CF                     TEST EDI,ECX
006B3CE0  74 0C                     JZ 0x006b3cee
006B3CE2  05 F0 04 00 00            ADD EAX,0x4f0
006B3CE7  50                        PUSH EAX
006B3CE8  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b3cee:
006B3CEE  8B 06                     MOV EAX,dword ptr [ESI]
006B3CF0  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
006B3CF6  85 C9                     TEST ECX,ECX
006B3CF8  74 0E                     JZ 0x006b3d08
006B3CFA  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
006B3CFD  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006B3D00  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
006B3D03  8B 06                     MOV EAX,dword ptr [ESI]
006B3D05  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
LAB_006b3d08:
006B3D08  8B 0E                     MOV ECX,dword ptr [ESI]
006B3D0A  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006B3D0D  85 C0                     TEST EAX,EAX
006B3D0F  74 0F                     JZ 0x006b3d20
006B3D11  8B 10                     MOV EDX,dword ptr [EAX]
006B3D13  50                        PUSH EAX
006B3D14  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B3D17  8B 06                     MOV EAX,dword ptr [ESI]
006B3D19  C7 40 44 00 00 00 00      MOV dword ptr [EAX + 0x44],0x0
LAB_006b3d20:
006B3D20  8B 06                     MOV EAX,dword ptr [ESI]
006B3D22  85 78 08                  TEST dword ptr [EAX + 0x8],EDI
006B3D25  74 0C                     JZ 0x006b3d33
006B3D27  05 F0 04 00 00            ADD EAX,0x4f0
006B3D2C  50                        PUSH EAX
006B3D2D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b3d33:
006B3D33  BF A4 E1 7E 00            MOV EDI,0x7ee1a4
LAB_006b3d38:
006B3D38  8B 07                     MOV EAX,dword ptr [EDI]
006B3D3A  85 C0                     TEST EAX,EAX
006B3D3C  7C 0D                     JL 0x006b3d4b
006B3D3E  50                        PUSH EAX
006B3D3F  56                        PUSH ESI
006B3D40  E8 8B C3 01 00            CALL 0x006d00d0
006B3D45  C7 07 FF FF FF FF         MOV dword ptr [EDI],0xffffffff
LAB_006b3d4b:
006B3D4B  83 C7 04                  ADD EDI,0x4
006B3D4E  81 FF B4 E1 7E 00         CMP EDI,0x7ee1b4
006B3D54  72 E2                     JC 0x006b3d38
006B3D56  8D 8E B0 01 00 00         LEA ECX,[ESI + 0x1b0]
006B3D5C  51                        PUSH ECX
006B3D5D  E8 FE 72 FF FF            CALL 0x006ab060
006B3D62  8D 96 AC 01 00 00         LEA EDX,[ESI + 0x1ac]
006B3D68  52                        PUSH EDX
006B3D69  E8 F2 72 FF FF            CALL 0x006ab060
006B3D6E  8D 86 A8 01 00 00         LEA EAX,[ESI + 0x1a8]
006B3D74  50                        PUSH EAX
006B3D75  E8 E6 72 FF FF            CALL 0x006ab060
006B3D7A  8D 8E 10 02 00 00         LEA ECX,[ESI + 0x210]
006B3D80  51                        PUSH ECX
006B3D81  E8 DA 72 FF FF            CALL 0x006ab060
006B3D86  8D 96 20 02 00 00         LEA EDX,[ESI + 0x220]
006B3D8C  52                        PUSH EDX
006B3D8D  E8 CE 72 FF FF            CALL 0x006ab060
006B3D92  8D 86 BC 01 00 00         LEA EAX,[ESI + 0x1bc]
006B3D98  50                        PUSH EAX
006B3D99  E8 C2 72 FF FF            CALL 0x006ab060
006B3D9E  8D 8E C0 01 00 00         LEA ECX,[ESI + 0x1c0]
006B3DA4  51                        PUSH ECX
006B3DA5  E8 B6 72 FF FF            CALL 0x006ab060
006B3DAA  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
006B3DB0  5F                        POP EDI
006B3DB1  85 C0                     TEST EAX,EAX
006B3DB3  74 10                     JZ 0x006b3dc5
006B3DB5  8B 10                     MOV EDX,dword ptr [EAX]
006B3DB7  50                        PUSH EAX
006B3DB8  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B3DBB  C7 86 CC 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1cc],0x0
LAB_006b3dc5:
006B3DC5  56                        PUSH ESI
006B3DC6  E8 C5 20 FF FF            CALL 0x006a5e90
LAB_006b3dcb:
006B3DCB  5E                        POP ESI
006B3DCC  5D                        POP EBP
006B3DCD  C2 04 00                  RET 0x4
