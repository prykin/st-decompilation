FSGSTy::SetInfo:
005A3AB0  55                        PUSH EBP
005A3AB1  8B EC                     MOV EBP,ESP
005A3AB3  81 EC 84 00 00 00         SUB ESP,0x84
005A3AB9  53                        PUSH EBX
005A3ABA  56                        PUSH ESI
005A3ABB  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A3AC1  57                        PUSH EDI
005A3AC2  8B F9                     MOV EDI,ECX
005A3AC4  85 F6                     TEST ESI,ESI
005A3AC6  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005A3AC9  74 4D                     JZ 0x005a3b18
005A3ACB  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A3AD2  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A3ADB  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A3AE1  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A3AE7  50                        PUSH EAX
005A3AE8  51                        PUSH ECX
005A3AE9  6A 00                     PUSH 0x0
005A3AEB  8B CE                     MOV ECX,ESI
005A3AED  E8 8C 15 E6 FF            CALL 0x0040507e
005A3AF2  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A3AF8  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A3AFE  52                        PUSH EDX
005A3AFF  50                        PUSH EAX
005A3B00  8B CE                     MOV ECX,ESI
005A3B02  E8 17 E9 E5 FF            CALL 0x0040241e
005A3B07  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A3B0E  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a3b18:
005A3B18  80 BF 5F 1A 00 00 0A      CMP byte ptr [EDI + 0x1a5f],0xa
005A3B1F  0F 85 7B 04 00 00         JNZ 0x005a3fa0
005A3B25  8B 87 0C 1B 00 00         MOV EAX,dword ptr [EDI + 0x1b0c]
005A3B2B  85 C0                     TEST EAX,EAX
005A3B2D  0F 84 6D 04 00 00         JZ 0x005a3fa0
005A3B33  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005a3b36:
005A3B36  8A 10                     MOV DL,byte ptr [EAX]
005A3B38  8A 1E                     MOV BL,byte ptr [ESI]
005A3B3A  8A CA                     MOV CL,DL
005A3B3C  3A D3                     CMP DL,BL
005A3B3E  75 1E                     JNZ 0x005a3b5e
005A3B40  84 C9                     TEST CL,CL
005A3B42  74 16                     JZ 0x005a3b5a
005A3B44  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
005A3B47  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
005A3B4A  8A CA                     MOV CL,DL
005A3B4C  3A D3                     CMP DL,BL
005A3B4E  75 0E                     JNZ 0x005a3b5e
005A3B50  83 C0 02                  ADD EAX,0x2
005A3B53  83 C6 02                  ADD ESI,0x2
005A3B56  84 C9                     TEST CL,CL
005A3B58  75 DC                     JNZ 0x005a3b36
LAB_005a3b5a:
005A3B5A  33 C0                     XOR EAX,EAX
005A3B5C  EB 05                     JMP 0x005a3b63
LAB_005a3b5e:
005A3B5E  1B C0                     SBB EAX,EAX
005A3B60  83 D8 FF                  SBB EAX,-0x1
LAB_005a3b63:
005A3B63  85 C0                     TEST EAX,EAX
005A3B65  0F 85 35 04 00 00         JNZ 0x005a3fa0
005A3B6B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A3B70  8D 55 A0                  LEA EDX,[EBP + -0x60]
005A3B73  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005A3B76  6A 00                     PUSH 0x0
005A3B78  52                        PUSH EDX
005A3B79  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005A3B7C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A3B82  E8 69 9C 18 00            CALL 0x0072d7f0
005A3B87  8B F0                     MOV ESI,EAX
005A3B89  83 C4 08                  ADD ESP,0x8
005A3B8C  85 F6                     TEST ESI,ESI
005A3B8E  0F 85 CE 03 00 00         JNZ 0x005a3f62
005A3B94  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005A3B97  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005A3B9A  53                        PUSH EBX
005A3B9B  57                        PUSH EDI
005A3B9C  68 A8 C1 7C 00            PUSH 0x7cc1a8
005A3BA1  B9 90 2A 80 00            MOV ECX,0x802a90
005A3BA6  E8 1C 03 E6 FF            CALL 0x00403ec7
005A3BAB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005A3BAE  85 C0                     TEST EAX,EAX
005A3BB0  74 33                     JZ 0x005a3be5
005A3BB2  50                        PUSH EAX
005A3BB3  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005A3BB9  6A 00                     PUSH 0x0
005A3BBB  50                        PUSH EAX
005A3BBC  E8 5F 24 11 00            CALL 0x006b6020
005A3BC1  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
005A3BC7  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
005A3BCD  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005A3BD0  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005A3BD3  52                        PUSH EDX
005A3BD4  50                        PUSH EAX
005A3BD5  6A 02                     PUSH 0x2
005A3BD7  8B CE                     MOV ECX,ESI
005A3BD9  C7 46 2D 33 00 00 00      MOV dword ptr [ESI + 0x2d],0x33
005A3BE0  E8 9B 24 14 00            CALL 0x006e6080
LAB_005a3be5:
005A3BE5  53                        PUSH EBX
005A3BE6  57                        PUSH EDI
005A3BE7  68 98 C1 7C 00            PUSH 0x7cc198
005A3BEC  B9 90 2A 80 00            MOV ECX,0x802a90
005A3BF1  E8 D1 02 E6 FF            CALL 0x00403ec7
005A3BF6  85 C0                     TEST EAX,EAX
005A3BF8  74 33                     JZ 0x005a3c2d
005A3BFA  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005A3C00  50                        PUSH EAX
005A3C01  6A 00                     PUSH 0x0
005A3C03  51                        PUSH ECX
005A3C04  E8 17 24 11 00            CALL 0x006b6020
005A3C09  8B 8E DC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1adc]
005A3C0F  8B 96 FC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1afc]
005A3C15  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005A3C18  C7 46 2D 33 00 00 00      MOV dword ptr [ESI + 0x2d],0x33
005A3C1F  50                        PUSH EAX
005A3C20  51                        PUSH ECX
005A3C21  6A 02                     PUSH 0x2
005A3C23  8B CE                     MOV ECX,ESI
005A3C25  89 56 31                  MOV dword ptr [ESI + 0x31],EDX
005A3C28  E8 53 24 14 00            CALL 0x006e6080
LAB_005a3c2d:
005A3C2D  53                        PUSH EBX
005A3C2E  57                        PUSH EDI
005A3C2F  68 84 C1 7C 00            PUSH 0x7cc184
005A3C34  B9 90 2A 80 00            MOV ECX,0x802a90
005A3C39  E8 89 02 E6 FF            CALL 0x00403ec7
005A3C3E  85 C0                     TEST EAX,EAX
005A3C40  74 33                     JZ 0x005a3c75
005A3C42  8B 96 00 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b00]
005A3C48  50                        PUSH EAX
005A3C49  6A 00                     PUSH 0x0
005A3C4B  52                        PUSH EDX
005A3C4C  E8 CF 23 11 00            CALL 0x006b6020
005A3C51  8B 96 E0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ae0]
005A3C57  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005A3C5D  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005A3C60  C7 46 2D 33 00 00 00      MOV dword ptr [ESI + 0x2d],0x33
005A3C67  51                        PUSH ECX
005A3C68  52                        PUSH EDX
005A3C69  6A 02                     PUSH 0x2
005A3C6B  8B CE                     MOV ECX,ESI
005A3C6D  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005A3C70  E8 0B 24 14 00            CALL 0x006e6080
LAB_005a3c75:
005A3C75  53                        PUSH EBX
005A3C76  57                        PUSH EDI
005A3C77  68 6C C1 7C 00            PUSH 0x7cc16c
005A3C7C  B9 90 2A 80 00            MOV ECX,0x802a90
005A3C81  E8 41 02 E6 FF            CALL 0x00403ec7
005A3C86  85 C0                     TEST EAX,EAX
005A3C88  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005A3C8B  74 68                     JZ 0x005a3cf5
005A3C8D  8B 8E 04 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b04]
005A3C93  85 C9                     TEST ECX,ECX
005A3C95  74 09                     JZ 0x005a3ca0
005A3C97  51                        PUSH ECX
005A3C98  E8 D3 18 11 00            CALL 0x006b5570
005A3C9D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005a3ca0:
005A3CA0  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A3CA6  50                        PUSH EAX
005A3CA7  E8 D4 F2 16 00            CALL 0x00712f80
005A3CAC  85 C0                     TEST EAX,EAX
005A3CAE  89 86 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EAX
005A3CB4  75 1B                     JNZ 0x005a3cd1
005A3CB6  6A 01                     PUSH 0x1
005A3CB8  6A 01                     PUSH 0x1
005A3CBA  50                        PUSH EAX
005A3CBB  E8 30 18 11 00            CALL 0x006b54f0
005A3CC0  68 A0 16 80 00            PUSH 0x8016a0
005A3CC5  50                        PUSH EAX
005A3CC6  89 86 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EAX
005A3CCC  E8 CF 1D 11 00            CALL 0x006b5aa0
LAB_005a3cd1:
005A3CD1  8B 96 E4 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ae4]
005A3CD7  8B 86 04 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b04]
005A3CDD  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005A3CE0  C7 46 2D 33 00 00 00      MOV dword ptr [ESI + 0x2d],0x33
005A3CE7  51                        PUSH ECX
005A3CE8  52                        PUSH EDX
005A3CE9  6A 02                     PUSH 0x2
005A3CEB  8B CE                     MOV ECX,ESI
005A3CED  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005A3CF0  E8 8B 23 14 00            CALL 0x006e6080
LAB_005a3cf5:
005A3CF5  8B 86 7F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7f]
005A3CFB  6A 12                     PUSH 0x12
005A3CFD  6A 4E                     PUSH 0x4e
005A3CFF  68 F3 00 00 00            PUSH 0xf3
005A3D04  6A 1A                     PUSH 0x1a
005A3D06  53                        PUSH EBX
005A3D07  57                        PUSH EDI
005A3D08  68 34 C1 7C 00            PUSH 0x7cc134
005A3D0D  50                        PUSH EAX
005A3D0E  8B CE                     MOV ECX,ESI
005A3D10  E8 CA 0C E6 FF            CALL 0x004049df
005A3D15  8B 8E 7F 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a7f]
005A3D1B  6A 12                     PUSH 0x12
005A3D1D  6A 4E                     PUSH 0x4e
005A3D1F  68 F3 00 00 00            PUSH 0xf3
005A3D24  6A 7E                     PUSH 0x7e
005A3D26  53                        PUSH EBX
005A3D27  57                        PUSH EDI
005A3D28  68 28 C1 7C 00            PUSH 0x7cc128
005A3D2D  51                        PUSH ECX
005A3D2E  8B CE                     MOV ECX,ESI
005A3D30  E8 AA 0C E6 FF            CALL 0x004049df
005A3D35  8B 96 7F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a7f]
005A3D3B  6A 12                     PUSH 0x12
005A3D3D  6A 4E                     PUSH 0x4e
005A3D3F  68 F3 00 00 00            PUSH 0xf3
005A3D44  68 E2 00 00 00            PUSH 0xe2
005A3D49  53                        PUSH EBX
005A3D4A  57                        PUSH EDI
005A3D4B  68 1C C1 7C 00            PUSH 0x7cc11c
005A3D50  52                        PUSH EDX
005A3D51  8B CE                     MOV ECX,ESI
005A3D53  E8 87 0C E6 FF            CALL 0x004049df
005A3D58  8B 86 7F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7f]
005A3D5E  6A 12                     PUSH 0x12
005A3D60  6A 4E                     PUSH 0x4e
005A3D62  68 F3 00 00 00            PUSH 0xf3
005A3D67  68 46 01 00 00            PUSH 0x146
005A3D6C  53                        PUSH EBX
005A3D6D  57                        PUSH EDI
005A3D6E  68 0C C1 7C 00            PUSH 0x7cc10c
005A3D73  50                        PUSH EAX
005A3D74  8B CE                     MOV ECX,ESI
005A3D76  E8 64 0C E6 FF            CALL 0x004049df
005A3D7B  8B 8E 7B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a7b]
005A3D81  6A 17                     PUSH 0x17
005A3D83  6A 4E                     PUSH 0x4e
005A3D85  68 1B 01 00 00            PUSH 0x11b
005A3D8A  6A 1A                     PUSH 0x1a
005A3D8C  53                        PUSH EBX
005A3D8D  57                        PUSH EDI
005A3D8E  68 F8 C0 7C 00            PUSH 0x7cc0f8
005A3D93  51                        PUSH ECX
005A3D94  8B CE                     MOV ECX,ESI
005A3D96  E8 44 0C E6 FF            CALL 0x004049df
005A3D9B  8B 96 7B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a7b]
005A3DA1  6A 17                     PUSH 0x17
005A3DA3  6A 4E                     PUSH 0x4e
005A3DA5  68 1B 01 00 00            PUSH 0x11b
005A3DAA  6A 7E                     PUSH 0x7e
005A3DAC  53                        PUSH EBX
005A3DAD  57                        PUSH EDI
005A3DAE  68 04 C1 7C 00            PUSH 0x7cc104
005A3DB3  52                        PUSH EDX
005A3DB4  8B CE                     MOV ECX,ESI
005A3DB6  E8 24 0C E6 FF            CALL 0x004049df
005A3DBB  53                        PUSH EBX
005A3DBC  57                        PUSH EDI
005A3DBD  68 E8 C0 7C 00            PUSH 0x7cc0e8
005A3DC2  B9 90 2A 80 00            MOV ECX,0x802a90
005A3DC7  E8 FB 00 E6 FF            CALL 0x00403ec7
005A3DCC  8B D0                     MOV EDX,EAX
005A3DCE  85 D2                     TEST EDX,EDX
005A3DD0  0F 84 E1 00 00 00         JZ 0x005a3eb7
005A3DD6  8B FA                     MOV EDI,EDX
005A3DD8  83 C9 FF                  OR ECX,0xffffffff
005A3DDB  33 C0                     XOR EAX,EAX
005A3DDD  F2 AE                     SCASB.REPNE ES:EDI
005A3DDF  F7 D1                     NOT ECX
005A3DE1  49                        DEC ECX
005A3DE2  0F 84 CC 00 00 00         JZ 0x005a3eb4
005A3DE8  8D 45 F8                  LEA EAX,[EBP + -0x8]
005A3DEB  8D 4D FC                  LEA ECX,[EBP + -0x4]
005A3DEE  50                        PUSH EAX
005A3DEF  51                        PUSH ECX
005A3DF0  68 B8 C5 7C 00            PUSH 0x7cc5b8
005A3DF5  52                        PUSH EDX
005A3DF6  E8 85 B0 18 00            CALL 0x0072ee80
005A3DFB  83 C4 10                  ADD ESP,0x10
005A3DFE  83 F8 02                  CMP EAX,0x2
005A3E01  74 08                     JZ 0x005a3e0b
005A3E03  33 C0                     XOR EAX,EAX
005A3E05  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005A3E08  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005a3e0b:
005A3E0B  8D 55 E0                  LEA EDX,[EBP + -0x20]
005A3E0E  8D 45 F8                  LEA EAX,[EBP + -0x8]
005A3E11  52                        PUSH EDX
005A3E12  50                        PUSH EAX
005A3E13  FF 15 B4 BB 85 00         CALL dword ptr [0x0085bbb4]
005A3E19  85 C0                     TEST EAX,EAX
005A3E1B  0F 84 93 00 00 00         JZ 0x005a3eb4
005A3E21  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005A3E24  8B 55 E2                  MOV EDX,dword ptr [EBP + -0x1e]
005A3E27  8B 45 E6                  MOV EAX,dword ptr [EBP + -0x1a]
005A3E2A  81 E1 FF FF 00 00         AND ECX,0xffff
005A3E30  81 E2 FF FF 00 00         AND EDX,0xffff
005A3E36  51                        PUSH ECX
005A3E37  25 FF FF 00 00            AND EAX,0xffff
005A3E3C  52                        PUSH EDX
005A3E3D  50                        PUSH EAX
005A3E3E  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
005A3E44  68 A8 C5 7C 00            PUSH 0x7cc5a8
005A3E49  51                        PUSH ECX
005A3E4A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A3E50  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
005A3E56  83 C4 14                  ADD ESP,0x14
005A3E59  68 FF 00 00 00            PUSH 0xff
005A3E5E  6A 17                     PUSH 0x17
005A3E60  68 B2 00 00 00            PUSH 0xb2
005A3E65  68 1B 01 00 00            PUSH 0x11b
005A3E6A  68 E2 00 00 00            PUSH 0xe2
005A3E6F  6A 00                     PUSH 0x0
005A3E71  52                        PUSH EDX
005A3E72  E8 F9 02 11 00            CALL 0x006b4170
005A3E77  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A3E7D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A3E83  6A 17                     PUSH 0x17
005A3E85  68 B2 00 00 00            PUSH 0xb2
005A3E8A  68 1B 01 00 00            PUSH 0x11b
005A3E8F  68 E2 00 00 00            PUSH 0xe2
005A3E94  6A 00                     PUSH 0x0
005A3E96  50                        PUSH EAX
005A3E97  E8 F4 CB 16 00            CALL 0x00710a90
005A3E9C  6A 00                     PUSH 0x0
005A3E9E  6A FF                     PUSH -0x1
005A3EA0  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
005A3EA6  6A FF                     PUSH -0x1
005A3EA8  51                        PUSH ECX
005A3EA9  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A3EAF  E8 0C DB 16 00            CALL 0x007119c0
LAB_005a3eb4:
005A3EB4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_005a3eb7:
005A3EB7  8B 96 7F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a7f]
005A3EBD  6A 12                     PUSH 0x12
005A3EBF  6A 4E                     PUSH 0x4e
005A3EC1  68 61 01 00 00            PUSH 0x161
005A3EC6  6A 1A                     PUSH 0x1a
005A3EC8  53                        PUSH EBX
005A3EC9  57                        PUSH EDI
005A3ECA  68 64 C1 7C 00            PUSH 0x7cc164
005A3ECF  52                        PUSH EDX
005A3ED0  8B CE                     MOV ECX,ESI
005A3ED2  E8 08 0B E6 FF            CALL 0x004049df
005A3ED7  8B 86 7F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7f]
005A3EDD  6A 12                     PUSH 0x12
005A3EDF  6A 4E                     PUSH 0x4e
005A3EE1  68 61 01 00 00            PUSH 0x161
005A3EE6  6A 7E                     PUSH 0x7e
005A3EE8  53                        PUSH EBX
005A3EE9  57                        PUSH EDI
005A3EEA  68 58 C1 7C 00            PUSH 0x7cc158
005A3EEF  50                        PUSH EAX
005A3EF0  8B CE                     MOV ECX,ESI
005A3EF2  E8 E8 0A E6 FF            CALL 0x004049df
005A3EF7  8B 8E 7F 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a7f]
005A3EFD  6A 12                     PUSH 0x12
005A3EFF  6A 4E                     PUSH 0x4e
005A3F01  68 61 01 00 00            PUSH 0x161
005A3F06  68 E2 00 00 00            PUSH 0xe2
005A3F0B  53                        PUSH EBX
005A3F0C  57                        PUSH EDI
005A3F0D  68 4C C1 7C 00            PUSH 0x7cc14c
005A3F12  51                        PUSH ECX
005A3F13  8B CE                     MOV ECX,ESI
005A3F15  E8 C5 0A E6 FF            CALL 0x004049df
005A3F1A  8B 96 7F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a7f]
005A3F20  6A 12                     PUSH 0x12
005A3F22  6A 4E                     PUSH 0x4e
005A3F24  68 61 01 00 00            PUSH 0x161
005A3F29  68 46 01 00 00            PUSH 0x146
005A3F2E  53                        PUSH EBX
005A3F2F  57                        PUSH EDI
005A3F30  68 3C C1 7C 00            PUSH 0x7cc13c
005A3F35  52                        PUSH EDX
005A3F36  8B CE                     MOV ECX,ESI
005A3F38  E8 A2 0A E6 FF            CALL 0x004049df
005A3F3D  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
005A3F43  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A3F49  50                        PUSH EAX
005A3F4A  51                        PUSH ECX
005A3F4B  E8 80 F6 10 00            CALL 0x006b35d0
005A3F50  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005A3F53  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A3F59  5F                        POP EDI
005A3F5A  5E                        POP ESI
005A3F5B  5B                        POP EBX
005A3F5C  8B E5                     MOV ESP,EBP
005A3F5E  5D                        POP EBP
005A3F5F  C2 0C 00                  RET 0xc
LAB_005a3f62:
005A3F62  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
005A3F65  68 94 C5 7C 00            PUSH 0x7cc594
005A3F6A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A3F6F  56                        PUSH ESI
005A3F70  6A 00                     PUSH 0x0
005A3F72  68 4E 0B 00 00            PUSH 0xb4e
005A3F77  68 70 BF 7C 00            PUSH 0x7cbf70
005A3F7C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A3F81  E8 4A 95 10 00            CALL 0x006ad4d0
005A3F86  83 C4 18                  ADD ESP,0x18
005A3F89  85 C0                     TEST EAX,EAX
005A3F8B  74 01                     JZ 0x005a3f8e
005A3F8D  CC                        INT3
LAB_005a3f8e:
005A3F8E  68 4E 0B 00 00            PUSH 0xb4e
005A3F93  68 70 BF 7C 00            PUSH 0x7cbf70
005A3F98  6A 00                     PUSH 0x0
005A3F9A  56                        PUSH ESI
005A3F9B  E8 A0 1E 10 00            CALL 0x006a5e40
LAB_005a3fa0:
005A3FA0  5F                        POP EDI
005A3FA1  5E                        POP ESI
005A3FA2  5B                        POP EBX
005A3FA3  8B E5                     MOV ESP,EBP
005A3FA5  5D                        POP EBP
005A3FA6  C2 0C 00                  RET 0xc
