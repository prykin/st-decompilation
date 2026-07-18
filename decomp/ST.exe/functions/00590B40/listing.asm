FUN_00590b40:
00590B40  55                        PUSH EBP
00590B41  8B EC                     MOV EBP,ESP
00590B43  81 EC 68 02 00 00         SUB ESP,0x268
00590B49  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00590B4E  53                        PUSH EBX
00590B4F  56                        PUSH ESI
00590B50  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00590B53  57                        PUSH EDI
00590B54  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00590B57  8D 4D B0                  LEA ECX,[EBP + -0x50]
00590B5A  6A 00                     PUSH 0x0
00590B5C  52                        PUSH EDX
00590B5D  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00590B60  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00590B66  E8 85 CC 19 00            CALL 0x0072d7f0
00590B6B  8B F0                     MOV ESI,EAX
00590B6D  83 C4 08                  ADD ESP,0x8
00590B70  85 F6                     TEST ESI,ESI
00590B72  0F 85 50 08 00 00         JNZ 0x005913c8
00590B78  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00590B7B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00590B7E  89 86 FC 1F 00 00         MOV dword ptr [ESI + 0x1ffc],EAX
00590B84  A1 30 2A 80 00            MOV EAX,[0x00802a30]
00590B89  85 C0                     TEST EAX,EAX
00590B8B  74 2A                     JZ 0x00590bb7
00590B8D  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
00590B93  85 C9                     TEST ECX,ECX
00590B95  74 14                     JZ 0x00590bab
00590B97  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00590B9A  83 F9 FF                  CMP ECX,-0x1
00590B9D  74 18                     JZ 0x00590bb7
00590B9F  51                        PUSH ECX
00590BA0  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
00590BA3  51                        PUSH ECX
00590BA4  E8 47 2F 12 00            CALL 0x006b3af0
00590BA9  EB 0C                     JMP 0x00590bb7
LAB_00590bab:
00590BAB  8B 90 AD 00 00 00         MOV EDX,dword ptr [EAX + 0xad]
00590BB1  52                        PUSH EDX
00590BB2  E8 59 7F 12 00            CALL 0x006b8b10
LAB_00590bb7:
00590BB7  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00590BBC  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00590BBF  85 C9                     TEST ECX,ECX
00590BC1  0F 84 91 00 00 00         JZ 0x00590c58
00590BC7  C7 45 FC 64 00 00 00      MOV dword ptr [EBP + -0x4],0x64
00590BCE  8D BE 5F 1A 00 00         LEA EDI,[ESI + 0x1a5f]
LAB_00590bd4:
00590BD4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00590BD7  C7 45 F8 0F 00 00 00      MOV dword ptr [EBP + -0x8],0xf
LAB_00590bde:
00590BDE  6A 00                     PUSH 0x0
00590BE0  6A 00                     PUSH 0x0
00590BE2  53                        PUSH EBX
00590BE3  6A 03                     PUSH 0x3
00590BE5  68 C4 BD 7C 00            PUSH 0x7cbdc4
00590BEA  E8 11 20 16 00            CALL 0x006f2c00
00590BEF  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00590BF5  83 C4 0C                  ADD ESP,0xc
00590BF8  50                        PUSH EAX
00590BF9  51                        PUSH ECX
00590BFA  E8 01 A1 18 00            CALL 0x0071ad00
00590BFF  89 07                     MOV dword ptr [EDI],EAX
00590C01  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00590C04  83 C4 10                  ADD ESP,0x10
00590C07  83 C7 04                  ADD EDI,0x4
00590C0A  43                        INC EBX
00590C0B  48                        DEC EAX
00590C0C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00590C0F  75 CD                     JNZ 0x00590bde
00590C11  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00590C14  83 C0 64                  ADD EAX,0x64
00590C17  3D 90 01 00 00            CMP EAX,0x190
00590C1C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00590C1F  7C B3                     JL 0x00590bd4
00590C21  33 FF                     XOR EDI,EDI
00590C23  8D 9E C7 1B 00 00         LEA EBX,[ESI + 0x1bc7]
LAB_00590c29:
00590C29  6A 00                     PUSH 0x0
00590C2B  6A 00                     PUSH 0x0
00590C2D  57                        PUSH EDI
00590C2E  6A 02                     PUSH 0x2
00590C30  68 B4 BD 7C 00            PUSH 0x7cbdb4
00590C35  E8 C6 1F 16 00            CALL 0x006f2c00
00590C3A  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
00590C40  83 C4 0C                  ADD ESP,0xc
00590C43  50                        PUSH EAX
00590C44  52                        PUSH EDX
00590C45  E8 B6 A0 18 00            CALL 0x0071ad00
00590C4A  83 C4 10                  ADD ESP,0x10
00590C4D  89 03                     MOV dword ptr [EBX],EAX
00590C4F  47                        INC EDI
00590C50  83 C3 04                  ADD EBX,0x4
00590C53  83 FF 04                  CMP EDI,0x4
00590C56  7C D1                     JL 0x00590c29
LAB_00590c58:
00590C58  33 FF                     XOR EDI,EDI
LAB_00590c5a:
00590C5A  8B 84 BE C7 1B 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1bc7]
00590C61  85 C0                     TEST EAX,EAX
00590C63  74 5A                     JZ 0x00590cbf
00590C65  50                        PUSH EAX
00590C66  E8 B5 3D 13 00            CALL 0x006c4a20
00590C6B  85 C0                     TEST EAX,EAX
00590C6D  89 84 BE D7 1B 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x1bd7],EAX
00590C74  74 49                     JZ 0x00590cbf
00590C76  83 FF 03                  CMP EDI,0x3
00590C79  77 44                     JA 0x00590cbf
switchD_00590c7b::switchD:
00590C7B  FF 24 BD 0C 14 59 00      JMP dword ptr [EDI*0x4 + 0x59140c]
switchD_00590c7b::caseD_0:
00590C82  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00590C88  6A 07                     PUSH 0x7
00590C8A  6A 00                     PUSH 0x0
00590C8C  51                        PUSH ECX
00590C8D  EB 2A                     JMP 0x00590cb9
switchD_00590c7b::caseD_1:
00590C8F  68 B5 00 00 00            PUSH 0xb5
00590C94  6A 54                     PUSH 0x54
00590C96  EB 1A                     JMP 0x00590cb2
switchD_00590c7b::caseD_2:
00590C98  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00590C9E  68 B5 00 00 00            PUSH 0xb5
00590CA3  68 79 02 00 00            PUSH 0x279
00590CA8  51                        PUSH ECX
00590CA9  EB 0E                     JMP 0x00590cb9
switchD_00590c7b::caseD_3:
00590CAB  6A 07                     PUSH 0x7
00590CAD  68 CB 02 00 00            PUSH 0x2cb
LAB_00590cb2:
00590CB2  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00590CB8  52                        PUSH EDX
LAB_00590cb9:
00590CB9  50                        PUSH EAX
00590CBA  E8 41 3D 13 00            CALL 0x006c4a00
switchD_00590c7b::default:
00590CBF  47                        INC EDI
00590CC0  83 FF 04                  CMP EDI,0x4
00590CC3  7C 95                     JL 0x00590c5a
00590CC5  33 C9                     XOR ECX,ECX
00590CC7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00590cca:
00590CCA  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00590CCD  33 FF                     XOR EDI,EDI
00590CCF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00590CD2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00590cd5:
00590CD5  8B C1                     MOV EAX,ECX
00590CD7  83 E8 00                  SUB EAX,0x0
00590CDA  74 51                     JZ 0x00590d2d
00590CDC  48                        DEC EAX
00590CDD  74 05                     JZ 0x00590ce4
00590CDF  48                        DEC EAX
00590CE0  74 4B                     JZ 0x00590d2d
00590CE2  EB 68                     JMP 0x00590d4c
LAB_00590ce4:
00590CE4  85 FF                     TEST EDI,EDI
00590CE6  7C 3C                     JL 0x00590d24
00590CE8  83 FF 01                  CMP EDI,0x1
00590CEB  7E 1D                     JLE 0x00590d0a
00590CED  83 FF 06                  CMP EDI,0x6
00590CF0  75 32                     JNZ 0x00590d24
00590CF2  8B 86 A7 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aa7]
00590CF8  85 C0                     TEST EAX,EAX
00590CFA  74 50                     JZ 0x00590d4c
00590CFC  50                        PUSH EAX
00590CFD  E8 1E 3D 13 00            CALL 0x006c4a20
00590D02  89 86 67 1B 00 00         MOV dword ptr [ESI + 0x1b67],EAX
00590D08  EB 42                     JMP 0x00590d4c
LAB_00590d0a:
00590D0A  8B 84 BE 5F 1A 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1a5f]
LAB_00590d11:
00590D11  85 C0                     TEST EAX,EAX
00590D13  74 37                     JZ 0x00590d4c
00590D15  50                        PUSH EAX
00590D16  E8 05 3D 13 00            CALL 0x006c4a20
00590D1B  89 84 BE 4F 1B 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x1b4f],EAX
00590D22  EB 28                     JMP 0x00590d4c
LAB_00590d24:
00590D24  8B 84 BE 9B 1A 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1a9b]
00590D2B  EB E4                     JMP 0x00590d11
LAB_00590d2d:
00590D2D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00590D30  03 CF                     ADD ECX,EDI
00590D32  8B 84 8E 5F 1A 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1a5f]
00590D39  8D 1C 8E                  LEA EBX,[ESI + ECX*0x4]
00590D3C  85 C0                     TEST EAX,EAX
00590D3E  74 0C                     JZ 0x00590d4c
00590D40  50                        PUSH EAX
00590D41  E8 DA 3C 13 00            CALL 0x006c4a20
00590D46  89 83 13 1B 00 00         MOV dword ptr [EBX + 0x1b13],EAX
LAB_00590d4c:
00590D4C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00590D4F  03 D7                     ADD EDX,EDI
00590D51  8B 84 96 13 1B 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x1b13]
00590D58  85 C0                     TEST EAX,EAX
00590D5A  0F 84 E0 00 00 00         JZ 0x00590e40
00590D60  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
00590D64  0F 85 87 00 00 00         JNZ 0x00590df1
00590D6A  83 FF 0E                  CMP EDI,0xe
00590D6D  0F 87 CD 00 00 00         JA 0x00590e40
switchD_00590d73::switchD:
00590D73  FF 24 BD 1C 14 59 00      JMP dword ptr [EDI*0x4 + 0x59141c]
switchD_00590d73::caseD_0:
00590D7A  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00590D7F  8B 8C BE 8B 1B 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1b8b]
00590D86  6A 07                     PUSH 0x7
00590D88  6A 54                     PUSH 0x54
00590D8A  50                        PUSH EAX
00590D8B  51                        PUSH ECX
00590D8C  E9 AA 00 00 00            JMP 0x00590e3b
switchD_00590d73::caseD_1:
00590D91  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00590D97  8B 84 BE 8B 1B 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1b8b]
00590D9E  6A 07                     PUSH 0x7
00590DA0  68 79 02 00 00            PUSH 0x279
00590DA5  52                        PUSH EDX
00590DA6  E9 8F 00 00 00            JMP 0x00590e3a
switchD_00590d73::caseD_2:
00590DAB  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00590DB1  8B 94 BE 8B 1B 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x1b8b]
00590DB8  6A 25                     PUSH 0x25
00590DBA  68 A5 00 00 00            PUSH 0xa5
00590DBF  51                        PUSH ECX
00590DC0  52                        PUSH EDX
00590DC1  EB 78                     JMP 0x00590e3b
switchD_00590d73::caseD_3:
00590DC3  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00590DC8  8B 8C BE 8B 1B 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1b8b]
00590DCF  6A 25                     PUSH 0x25
00590DD1  68 40 02 00 00            PUSH 0x240
00590DD6  50                        PUSH EAX
00590DD7  51                        PUSH ECX
00590DD8  EB 61                     JMP 0x00590e3b
switchD_00590d73::caseD_4:
00590DDA  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00590DE0  8B 84 BE 8B 1B 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1b8b]
00590DE7  6A 37                     PUSH 0x37
00590DE9  68 E0 00 00 00            PUSH 0xe0
00590DEE  52                        PUSH EDX
00590DEF  EB 49                     JMP 0x00590e3a
LAB_00590df1:
00590DF1  83 FF 0C                  CMP EDI,0xc
00590DF4  77 4A                     JA 0x00590e40
switchD_00590df6::switchD:
00590DF6  FF 24 BD 58 14 59 00      JMP dword ptr [EDI*0x4 + 0x591458]
switchD_00590df6::caseD_0:
00590DFD  6A 07                     PUSH 0x7
00590DFF  6A 54                     PUSH 0x54
00590E01  EB 30                     JMP 0x00590e33
switchD_00590df6::caseD_1:
00590E03  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00590E09  6A 07                     PUSH 0x7
00590E0B  68 79 02 00 00            PUSH 0x279
00590E10  52                        PUSH EDX
00590E11  EB 27                     JMP 0x00590e3a
switchD_00590df6::caseD_2:
00590E13  6A 25                     PUSH 0x25
00590E15  68 A5 00 00 00            PUSH 0xa5
00590E1A  EB 17                     JMP 0x00590e33
switchD_00590df6::caseD_3:
00590E1C  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00590E22  6A 25                     PUSH 0x25
00590E24  68 40 02 00 00            PUSH 0x240
00590E29  52                        PUSH EDX
00590E2A  EB 0E                     JMP 0x00590e3a
switchD_00590df6::caseD_4:
00590E2C  6A 37                     PUSH 0x37
00590E2E  68 E0 00 00 00            PUSH 0xe0
LAB_00590e33:
00590E33  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00590E39  51                        PUSH ECX
LAB_00590e3a:
00590E3A  50                        PUSH EAX
LAB_00590e3b:
00590E3B  E8 C0 3B 13 00            CALL 0x006c4a00
switchD_00590d73::default:
00590E40  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00590E43  47                        INC EDI
00590E44  83 FF 0F                  CMP EDI,0xf
00590E47  0F 8C 88 FE FF FF         JL 0x00590cd5
00590E4D  41                        INC ECX
00590E4E  83 F9 03                  CMP ECX,0x3
00590E51  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00590E54  0F 8C 70 FE FF FF         JL 0x00590cca
00590E5A  6A FF                     PUSH -0x1
00590E5C  6A FF                     PUSH -0x1
00590E5E  6A 00                     PUSH 0x0
00590E60  6A 00                     PUSH 0x0
00590E62  6A 00                     PUSH 0x0
00590E64  6A 00                     PUSH 0x0
00590E66  6A 00                     PUSH 0x0
00590E68  6A 28                     PUSH 0x28
00590E6A  6A 06                     PUSH 0x6
00590E6C  6A 09                     PUSH 0x9
00590E6E  6A 08                     PUSH 0x8
00590E70  6A 06                     PUSH 0x6
00590E72  68 A4 BD 7C 00            PUSH 0x7cbda4
00590E77  6A 0A                     PUSH 0xa
00590E79  6A 38                     PUSH 0x38
00590E7B  68 9D 00 00 00            PUSH 0x9d
00590E80  6A 00                     PUSH 0x0
00590E82  6A 00                     PUSH 0x0
00590E84  6A 08                     PUSH 0x8
00590E86  6A 07                     PUSH 0x7
00590E88  68 3A 01 00 00            PUSH 0x13a
00590E8D  68 F2 00 00 00            PUSH 0xf2
00590E92  8D 96 9B 00 00 00         LEA EDX,[ESI + 0x9b]
00590E98  68 98 BD 7C 00            PUSH 0x7cbd98
00590E9D  52                        PUSH EDX
00590E9E  8B CE                     MOV ECX,ESI
00590EA0  E8 ED 0A E7 FF            CALL 0x00401992
00590EA5  6A FF                     PUSH -0x1
00590EA7  6A FF                     PUSH -0x1
00590EA9  6A 00                     PUSH 0x0
00590EAB  6A 00                     PUSH 0x0
00590EAD  6A 00                     PUSH 0x0
00590EAF  6A 00                     PUSH 0x0
00590EB1  6A 00                     PUSH 0x0
00590EB3  6A 32                     PUSH 0x32
00590EB5  6A 06                     PUSH 0x6
00590EB7  6A 08                     PUSH 0x8
00590EB9  6A 08                     PUSH 0x8
00590EBB  6A 08                     PUSH 0x8
00590EBD  68 88 BD 7C 00            PUSH 0x7cbd88
00590EC2  6A 0A                     PUSH 0xa
00590EC4  6A 38                     PUSH 0x38
00590EC6  68 9D 00 00 00            PUSH 0x9d
00590ECB  6A 00                     PUSH 0x0
00590ECD  6A 00                     PUSH 0x0
00590ECF  6A 08                     PUSH 0x8
00590ED1  6A 09                     PUSH 0x9
00590ED3  68 3A 01 00 00            PUSH 0x13a
00590ED8  68 91 01 00 00            PUSH 0x191
00590EDD  8D 86 96 02 00 00         LEA EAX,[ESI + 0x296]
00590EE3  68 7C BD 7C 00            PUSH 0x7cbd7c
00590EE8  50                        PUSH EAX
00590EE9  8B CE                     MOV ECX,ESI
00590EEB  E8 A2 0A E7 FF            CALL 0x00401992
00590EF0  6A FF                     PUSH -0x1
00590EF2  6A FF                     PUSH -0x1
00590EF4  6A 00                     PUSH 0x0
00590EF6  6A 00                     PUSH 0x0
00590EF8  6A 00                     PUSH 0x0
00590EFA  6A 00                     PUSH 0x0
00590EFC  6A 00                     PUSH 0x0
00590EFE  6A 28                     PUSH 0x28
00590F00  6A 05                     PUSH 0x5
00590F02  6A 0A                     PUSH 0xa
00590F04  6A 07                     PUSH 0x7
00590F06  6A 08                     PUSH 0x8
00590F08  68 6C BD 7C 00            PUSH 0x7cbd6c
00590F0D  6A 0A                     PUSH 0xa
00590F0F  6A 38                     PUSH 0x38
00590F11  68 9D 00 00 00            PUSH 0x9d
00590F16  6A 00                     PUSH 0x0
00590F18  6A 00                     PUSH 0x0
00590F1A  6A 06                     PUSH 0x6
00590F1C  6A 08                     PUSH 0x8
00590F1E  68 73 01 00 00            PUSH 0x173
00590F23  68 F2 00 00 00            PUSH 0xf2
00590F28  8D 8E 91 04 00 00         LEA ECX,[ESI + 0x491]
00590F2E  68 60 BD 7C 00            PUSH 0x7cbd60
00590F33  51                        PUSH ECX
00590F34  8B CE                     MOV ECX,ESI
00590F36  E8 57 0A E7 FF            CALL 0x00401992
00590F3B  6A FF                     PUSH -0x1
00590F3D  6A FF                     PUSH -0x1
00590F3F  6A 00                     PUSH 0x0
00590F41  6A 00                     PUSH 0x0
00590F43  6A 00                     PUSH 0x0
00590F45  6A 00                     PUSH 0x0
00590F47  6A 00                     PUSH 0x0
00590F49  6A 32                     PUSH 0x32
00590F4B  6A 05                     PUSH 0x5
00590F4D  6A 08                     PUSH 0x8
00590F4F  6A 07                     PUSH 0x7
00590F51  6A 08                     PUSH 0x8
00590F53  68 50 BD 7C 00            PUSH 0x7cbd50
00590F58  6A 0A                     PUSH 0xa
00590F5A  6A 38                     PUSH 0x38
00590F5C  68 9D 00 00 00            PUSH 0x9d
00590F61  6A 00                     PUSH 0x0
00590F63  6A 00                     PUSH 0x0
00590F65  6A 06                     PUSH 0x6
00590F67  6A 08                     PUSH 0x8
00590F69  68 73 01 00 00            PUSH 0x173
00590F6E  68 91 01 00 00            PUSH 0x191
00590F73  8D 96 8C 06 00 00         LEA EDX,[ESI + 0x68c]
00590F79  68 44 BD 7C 00            PUSH 0x7cbd44
00590F7E  52                        PUSH EDX
00590F7F  8B CE                     MOV ECX,ESI
00590F81  E8 0C 0A E7 FF            CALL 0x00401992
00590F86  6A FF                     PUSH -0x1
00590F88  6A FF                     PUSH -0x1
00590F8A  6A 00                     PUSH 0x0
00590F8C  6A 00                     PUSH 0x0
00590F8E  6A 00                     PUSH 0x0
00590F90  6A 00                     PUSH 0x0
00590F92  6A 00                     PUSH 0x0
00590F94  6A 32                     PUSH 0x32
00590F96  6A 06                     PUSH 0x6
00590F98  6A 09                     PUSH 0x9
00590F9A  6A 09                     PUSH 0x9
00590F9C  6A 08                     PUSH 0x8
00590F9E  68 34 BD 7C 00            PUSH 0x7cbd34
00590FA3  6A 0A                     PUSH 0xa
00590FA5  6A 38                     PUSH 0x38
00590FA7  68 9D 00 00 00            PUSH 0x9d
00590FAC  6A 00                     PUSH 0x0
00590FAE  6A 00                     PUSH 0x0
00590FB0  6A 08                     PUSH 0x8
00590FB2  6A 07                     PUSH 0x7
00590FB4  68 AC 01 00 00            PUSH 0x1ac
00590FB9  68 43 01 00 00            PUSH 0x143
00590FBE  8D 86 87 08 00 00         LEA EAX,[ESI + 0x887]
00590FC4  68 28 BD 7C 00            PUSH 0x7cbd28
00590FC9  50                        PUSH EAX
00590FCA  8B CE                     MOV ECX,ESI
00590FCC  E8 C1 09 E7 FF            CALL 0x00401992
00590FD1  A0 4E 87 80 00            MOV AL,[0x0080874e]
00590FD6  84 C0                     TEST AL,AL
00590FD8  75 07                     JNZ 0x00590fe1
00590FDA  B0 01                     MOV AL,0x1
00590FDC  A2 4E 87 80 00            MOV [0x0080874e],AL
LAB_00590fe1:
00590FE1  33 C9                     XOR ECX,ECX
00590FE3  6A 01                     PUSH 0x1
00590FE5  8A C8                     MOV CL,AL
00590FE7  6A 00                     PUSH 0x0
00590FE9  8B C1                     MOV EAX,ECX
00590FEB  68 1C BD 7C 00            PUSH 0x7cbd1c
00590FF0  8D 54 40 FD               LEA EDX,[EAX + EAX*0x2 + -0x3]
00590FF4  89 96 E8 1B 00 00         MOV dword ptr [ESI + 0x1be8],EDX
00590FFA  A1 80 67 80 00            MOV EAX,[0x00806780]
00590FFF  50                        PUSH EAX
00591000  E8 EB 99 17 00            CALL 0x0070a9f0
00591005  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0059100B  6A 00                     PUSH 0x0
0059100D  6A 01                     PUSH 0x1
0059100F  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
00591012  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00591018  52                        PUSH EDX
00591019  E8 25 0D E7 FF            CALL 0x00401d43
0059101E  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00591024  83 C4 1C                  ADD ESP,0x1c
00591027  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
0059102D  85 C9                     TEST ECX,ECX
0059102F  74 31                     JZ 0x00591062
00591031  6A 01                     PUSH 0x1
00591033  6A 00                     PUSH 0x0
00591035  6A 00                     PUSH 0x0
00591037  E8 69 0F E7 FF            CALL 0x00401fa5
0059103C  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
00591042  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
00591048  E8 44 41 E7 FF            CALL 0x00405191
0059104D  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00591053  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00591056  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
0059105C  89 88 AB 1C 00 00         MOV dword ptr [EAX + 0x1cab],ECX
LAB_00591062:
00591062  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00591067  8D 96 F8 1B 00 00         LEA EDX,[ESI + 0x1bf8]
0059106D  6A 00                     PUSH 0x0
0059106F  52                        PUSH EDX
00591070  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
00591073  51                        PUSH ECX
00591074  E8 E7 B2 12 00            CALL 0x006bc360
00591079  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
0059107F  85 FF                     TEST EDI,EDI
00591081  74 4D                     JZ 0x005910d0
00591083  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
00591089  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
0059108F  52                        PUSH EDX
00591090  50                        PUSH EAX
00591091  6A 00                     PUSH 0x0
00591093  8B CF                     MOV ECX,EDI
00591095  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
0059109C  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005910A5  E8 D4 3F E7 FF            CALL 0x0040507e
005910AA  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005910B0  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005910B6  51                        PUSH ECX
005910B7  52                        PUSH EDX
005910B8  8B CF                     MOV ECX,EDI
005910BA  E8 5F 13 E7 FF            CALL 0x0040241e
005910BF  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005910C6  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005910d0:
005910D0  6A FF                     PUSH -0x1
005910D2  6A 07                     PUSH 0x7
005910D4  6A FF                     PUSH -0x1
005910D6  8B 9E 6A 05 00 00         MOV EBX,dword ptr [ESI + 0x56a]
005910DC  6A FF                     PUSH -0x1
005910DE  6A 01                     PUSH 0x1
005910E0  6A FF                     PUSH -0x1
005910E2  C6 86 9A 00 00 00 05      MOV byte ptr [ESI + 0x9a],0x5
005910E9  C7 86 B2 04 00 00 F1 23 00 00  MOV dword ptr [ESI + 0x4b2],0x23f1
005910F3  A1 18 76 80 00            MOV EAX,[0x00807618]
005910F8  6A FE                     PUSH -0x2
005910FA  6A 28                     PUSH 0x28
005910FC  8D BE 6A 05 00 00         LEA EDI,[ESI + 0x56a]
00591102  68 8C 00 00 00            PUSH 0x8c
00591107  50                        PUSH EAX
00591108  68 F1 23 00 00            PUSH 0x23f1
0059110D  E8 2E F0 11 00            CALL 0x006b0140
00591112  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00591118  50                        PUSH EAX
00591119  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
0059111C  E8 5F 23 18 00            CALL 0x00713480
00591121  50                        PUSH EAX
00591122  8B CF                     MOV ECX,EDI
00591124  FF 53 08                  CALL dword ptr [EBX + 0x8]
00591127  6A FF                     PUSH -0x1
00591129  6A 07                     PUSH 0x7
0059112B  6A FF                     PUSH -0x1
0059112D  8B 9E 65 07 00 00         MOV EBX,dword ptr [ESI + 0x765]
00591133  6A FF                     PUSH -0x1
00591135  6A 01                     PUSH 0x1
00591137  6A FF                     PUSH -0x1
00591139  C7 86 AD 06 00 00 F0 23 00 00  MOV dword ptr [ESI + 0x6ad],0x23f0
00591143  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00591149  6A FE                     PUSH -0x2
0059114B  6A 28                     PUSH 0x28
0059114D  8D BE 65 07 00 00         LEA EDI,[ESI + 0x765]
00591153  68 8C 00 00 00            PUSH 0x8c
00591158  52                        PUSH EDX
00591159  68 F0 23 00 00            PUSH 0x23f0
0059115E  E8 DD EF 11 00            CALL 0x006b0140
00591163  50                        PUSH EAX
00591164  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00591169  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
0059116C  E8 0F 23 18 00            CALL 0x00713480
00591171  50                        PUSH EAX
00591172  8B CF                     MOV ECX,EDI
00591174  FF 53 08                  CALL dword ptr [EBX + 0x8]
00591177  6A FF                     PUSH -0x1
00591179  6A 07                     PUSH 0x7
0059117B  6A FF                     PUSH -0x1
0059117D  8B 9E 60 09 00 00         MOV EBX,dword ptr [ESI + 0x960]
00591183  6A FF                     PUSH -0x1
00591185  6A 01                     PUSH 0x1
00591187  6A FF                     PUSH -0x1
00591189  C7 86 A8 08 00 00 F2 23 00 00  MOV dword ptr [ESI + 0x8a8],0x23f2
00591193  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00591199  6A FE                     PUSH -0x2
0059119B  6A 28                     PUSH 0x28
0059119D  8D BE 60 09 00 00         LEA EDI,[ESI + 0x960]
005911A3  68 8C 00 00 00            PUSH 0x8c
005911A8  51                        PUSH ECX
005911A9  68 F2 23 00 00            PUSH 0x23f2
005911AE  E8 8D EF 11 00            CALL 0x006b0140
005911B3  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005911B9  50                        PUSH EAX
005911BA  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005911BD  E8 BE 22 18 00            CALL 0x00713480
005911C2  50                        PUSH EAX
005911C3  8B CF                     MOV ECX,EDI
005911C5  FF 53 08                  CALL dword ptr [EBX + 0x8]
005911C8  8B CE                     MOV ECX,ESI
005911CA  E8 90 08 E7 FF            CALL 0x00401a5f
005911CF  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005911D5  33 DB                     XOR EBX,EBX
005911D7  84 C0                     TEST AL,AL
005911D9  76 32                     JBE 0x0059120d
005911DB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005911DE  8D BE 23 01 00 00         LEA EDI,[ESI + 0x123]
LAB_005911e4:
005911E4  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005911EA  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
005911ED  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005911F0  89 07                     MOV dword ptr [EDI],EAX
005911F2  05 96 00 00 00            ADD EAX,0x96
005911F7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005911FA  33 C0                     XOR EAX,EAX
005911FC  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
00591202  43                        INC EBX
00591203  81 C7 FB 01 00 00         ADD EDI,0x1fb
00591209  3B D8                     CMP EBX,EAX
0059120B  7C D7                     JL 0x005911e4
LAB_0059120d:
0059120D  6A FF                     PUSH -0x1
0059120F  6A 00                     PUSH 0x0
00591211  6A 01                     PUSH 0x1
00591213  8B CE                     MOV ECX,ESI
00591215  C6 46 65 03               MOV byte ptr [ESI + 0x65],0x3
00591219  E8 D3 39 E7 FF            CALL 0x00404bf1
0059121E  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
00591221  33 C0                     XOR EAX,EAX
00591223  89 8E F0 1B 00 00         MOV dword ptr [ESI + 0x1bf0],ECX
00591229  B9 7E 00 00 00            MOV ECX,0x7e
0059122E  8D BD 98 FD FF FF         LEA EDI,[EBP + 0xfffffd98]
00591234  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
0059123A  F3 AB                     STOSD.REP ES:EDI
0059123C  66 AB                     STOSW ES:EDI
0059123E  AA                        STOSB ES:EDI
0059123F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00591242  BB 02 00 00 00            MOV EBX,0x2
00591247  B9 43 69 00 00            MOV ECX,0x6943
0059124C  C7 86 EC 1B 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1bec],0x1
00591256  C7 86 F4 1B 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1bf4],0x0
00591260  C7 85 5B FE FF FF 40 23 00 00  MOV dword ptr [EBP + 0xfffffe5b],0x2340
0059126A  89 85 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],EAX
00591270  89 9D 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],EBX
00591276  89 8D 70 FE FF FF         MOV dword ptr [EBP + 0xfffffe70],ECX
0059127C  C7 85 82 FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffe82],0x24bc
00591286  89 85 8F FE FF FF         MOV dword ptr [EBP + 0xfffffe8f],EAX
0059128C  89 9D 93 FE FF FF         MOV dword ptr [EBP + 0xfffffe93],EBX
00591292  89 8D 97 FE FF FF         MOV dword ptr [EBP + 0xfffffe97],ECX
00591298  C7 85 9B FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffe9b],0x1
005912A2  C7 85 BF FD FF FF 43 23 00 00  MOV dword ptr [EBP + 0xfffffdbf],0x2343
005912AC  89 85 CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],EAX
005912B2  89 9D D0 FD FF FF         MOV dword ptr [EBP + 0xfffffdd0],EBX
005912B8  C7 85 D4 FD FF FF 4A 69 00 00  MOV dword ptr [EBP + 0xfffffdd4],0x694a
005912C2  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005912C8  85 C0                     TEST EAX,EAX
005912CA  74 3C                     JZ 0x00591308
005912CC  B9 06 00 00 00            MOV ECX,0x6
005912D1  83 C8 FF                  OR EAX,0xffffffff
005912D4  8D 7D 94                  LEA EDI,[EBP + -0x6c]
005912D7  6A 00                     PUSH 0x0
005912D9  F3 AB                     STOSD.REP ES:EDI
005912DB  66 AB                     STOSW ES:EDI
005912DD  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005912E3  8D 85 98 FD FF FF         LEA EAX,[EBP + 0xfffffd98]
005912E9  6A 00                     PUSH 0x0
005912EB  50                        PUSH EAX
005912EC  6A 00                     PUSH 0x0
005912EE  E8 24 04 E7 FF            CALL 0x00401717
005912F3  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005912F9  8D 4D 94                  LEA ECX,[EBP + -0x6c]
005912FC  51                        PUSH ECX
005912FD  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
00591303  E8 49 38 E7 FF            CALL 0x00404b51
LAB_00591308:
00591308  6A 00                     PUSH 0x0
0059130A  B9 58 76 80 00            MOV ECX,0x807658
0059130F  E8 88 1F E7 FF            CALL 0x0040329c
00591314  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
0059131B  74 11                     JZ 0x0059132e
0059131D  6A 00                     PUSH 0x0
0059131F  6A 00                     PUSH 0x0
00591321  53                        PUSH EBX
00591322  6A 12                     PUSH 0x12
00591324  B9 58 76 80 00            MOV ECX,0x807658
00591329  E8 A3 1C E7 FF            CALL 0x00402fd1
LAB_0059132e:
0059132E  6A 01                     PUSH 0x1
00591330  B9 58 76 80 00            MOV ECX,0x807658
00591335  E8 62 1F E7 FF            CALL 0x0040329c
0059133A  33 C0                     XOR EAX,EAX
0059133C  A0 4E 87 80 00            MOV AL,[0x0080874e]
00591341  48                        DEC EAX
00591342  74 5A                     JZ 0x0059139e
00591344  48                        DEC EAX
00591345  74 2D                     JZ 0x00591374
00591347  48                        DEC EAX
00591348  75 6D                     JNZ 0x005913b7
0059134A  6A 01                     PUSH 0x1
0059134C  6A 00                     PUSH 0x0
0059134E  6A 17                     PUSH 0x17
00591350  8B CE                     MOV ECX,ESI
00591352  E8 9A 38 E7 FF            CALL 0x00404bf1
00591357  6A 01                     PUSH 0x1
00591359  53                        PUSH EBX
0059135A  6A 1A                     PUSH 0x1a
0059135C  8B CE                     MOV ECX,ESI
0059135E  E8 8E 38 E7 FF            CALL 0x00404bf1
00591363  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00591366  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059136B  5F                        POP EDI
0059136C  5E                        POP ESI
0059136D  5B                        POP EBX
0059136E  8B E5                     MOV ESP,EBP
00591370  5D                        POP EBP
00591371  C2 04 00                  RET 0x4
LAB_00591374:
00591374  6A 01                     PUSH 0x1
00591376  6A 00                     PUSH 0x0
00591378  6A 16                     PUSH 0x16
0059137A  8B CE                     MOV ECX,ESI
0059137C  E8 70 38 E7 FF            CALL 0x00404bf1
00591381  6A 01                     PUSH 0x1
00591383  53                        PUSH EBX
00591384  6A 19                     PUSH 0x19
00591386  8B CE                     MOV ECX,ESI
00591388  E8 64 38 E7 FF            CALL 0x00404bf1
0059138D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00591390  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00591395  5F                        POP EDI
00591396  5E                        POP ESI
00591397  5B                        POP EBX
00591398  8B E5                     MOV ESP,EBP
0059139A  5D                        POP EBP
0059139B  C2 04 00                  RET 0x4
LAB_0059139e:
0059139E  6A 01                     PUSH 0x1
005913A0  6A 00                     PUSH 0x0
005913A2  6A 15                     PUSH 0x15
005913A4  8B CE                     MOV ECX,ESI
005913A6  E8 46 38 E7 FF            CALL 0x00404bf1
005913AB  6A 01                     PUSH 0x1
005913AD  53                        PUSH EBX
005913AE  6A 18                     PUSH 0x18
005913B0  8B CE                     MOV ECX,ESI
005913B2  E8 3A 38 E7 FF            CALL 0x00404bf1
LAB_005913b7:
005913B7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005913BA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005913BF  5F                        POP EDI
005913C0  5E                        POP ESI
005913C1  5B                        POP EBX
005913C2  8B E5                     MOV ESP,EBP
005913C4  5D                        POP EBP
005913C5  C2 04 00                  RET 0x4
LAB_005913c8:
005913C8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005913CB  68 FC BC 7C 00            PUSH 0x7cbcfc
005913D0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005913D5  56                        PUSH ESI
005913D6  6A 00                     PUSH 0x0
005913D8  6A 7D                     PUSH 0x7d
005913DA  68 D4 BC 7C 00            PUSH 0x7cbcd4
005913DF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005913E5  E8 E6 C0 11 00            CALL 0x006ad4d0
005913EA  83 C4 18                  ADD ESP,0x18
005913ED  85 C0                     TEST EAX,EAX
005913EF  74 01                     JZ 0x005913f2
005913F1  CC                        INT3
LAB_005913f2:
005913F2  6A 7D                     PUSH 0x7d
005913F4  68 D4 BC 7C 00            PUSH 0x7cbcd4
005913F9  6A 00                     PUSH 0x0
005913FB  56                        PUSH ESI
005913FC  E8 3F 4A 11 00            CALL 0x006a5e40
00591401  5F                        POP EDI
00591402  5E                        POP ESI
00591403  5B                        POP EBX
00591404  8B E5                     MOV ESP,EBP
00591406  5D                        POP EBP
00591407  C2 04 00                  RET 0x4
