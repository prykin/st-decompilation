CampaignTy::PaintCampaign:
00591940  55                        PUSH EBP
00591941  8B EC                     MOV EBP,ESP
00591943  83 EC 48                  SUB ESP,0x48
00591946  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059194B  53                        PUSH EBX
0059194C  56                        PUSH ESI
0059194D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00591950  57                        PUSH EDI
00591951  8D 55 BC                  LEA EDX,[EBP + -0x44]
00591954  8D 4D B8                  LEA ECX,[EBP + -0x48]
00591957  6A 00                     PUSH 0x0
00591959  52                        PUSH EDX
0059195A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059195D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00591963  E8 88 BE 19 00            CALL 0x0072d7f0
00591968  8B F0                     MOV ESI,EAX
0059196A  83 C4 08                  ADD ESP,0x8
0059196D  85 F6                     TEST ESI,ESI
0059196F  0F 85 9F 01 00 00         JNZ 0x00591b14
00591975  A1 34 67 80 00            MOV EAX,[0x00806734]
0059197A  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
00591980  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00591986  50                        PUSH EAX
00591987  51                        PUSH ECX
00591988  56                        PUSH ESI
00591989  56                        PUSH ESI
0059198A  52                        PUSH EDX
0059198B  E8 F0 45 12 00            CALL 0x006b5f80
00591990  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00591995  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
00591998  51                        PUSH ECX
00591999  6A 01                     PUSH 0x1
0059199B  56                        PUSH ESI
0059199C  56                        PUSH ESI
0059199D  E8 96 1D E7 FF            CALL 0x00403738
005919A2  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005919A8  83 C4 10                  ADD ESP,0x10
005919AB  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005919B1  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
005919B4  56                        PUSH ESI
005919B5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005919B8  50                        PUSH EAX
005919B9  6A FF                     PUSH -0x1
005919BB  6A FE                     PUSH -0x2
005919BD  8B 96 FC 1F 00 00         MOV EDX,dword ptr [ESI + 0x1ffc]
005919C3  51                        PUSH ECX
005919C4  F7 DA                     NEG EDX
005919C6  1B D2                     SBB EDX,EDX
005919C8  81 E2 A8 FC FF FF         AND EDX,0xfffffca8
005919CE  81 C2 B1 26 00 00         ADD EDX,0x26b1
005919D4  52                        PUSH EDX
005919D5  E8 66 E7 11 00            CALL 0x006b0140
005919DA  50                        PUSH EAX
005919DB  6A 18                     PUSH 0x18
005919DD  68 4C 01 00 00            PUSH 0x14c
005919E2  6A 14                     PUSH 0x14
005919E4  68 E9 00 00 00            PUSH 0xe9
005919E9  6A 00                     PUSH 0x0
005919EB  E8 3D 32 E7 FF            CALL 0x00404c2d
005919F0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005919F5  83 C4 28                  ADD ESP,0x28
005919F8  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
005919FB  85 C9                     TEST ECX,ECX
005919FD  0F 84 C7 00 00 00         JZ 0x00591aca
00591A03  81 C6 13 1B 00 00         ADD ESI,0x1b13
00591A09  BB 03 00 00 00            MOV EBX,0x3
LAB_00591a0e:
00591A0E  BF 0F 00 00 00            MOV EDI,0xf
LAB_00591a13:
00591A13  8B 06                     MOV EAX,dword ptr [ESI]
00591A15  85 C0                     TEST EAX,EAX
00591A17  74 06                     JZ 0x00591a1f
00591A19  50                        PUSH EAX
00591A1A  E8 81 30 13 00            CALL 0x006c4aa0
LAB_00591a1f:
00591A1F  83 C6 04                  ADD ESI,0x4
00591A22  4F                        DEC EDI
00591A23  75 EE                     JNZ 0x00591a13
00591A25  4B                        DEC EBX
00591A26  75 E6                     JNZ 0x00591a0e
00591A28  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00591A2B  BF 04 00 00 00            MOV EDI,0x4
00591A30  8D B3 D7 1B 00 00         LEA ESI,[EBX + 0x1bd7]
LAB_00591a36:
00591A36  8B 06                     MOV EAX,dword ptr [ESI]
00591A38  85 C0                     TEST EAX,EAX
00591A3A  74 06                     JZ 0x00591a42
00591A3C  50                        PUSH EAX
00591A3D  E8 5E 30 13 00            CALL 0x006c4aa0
LAB_00591a42:
00591A42  83 C6 04                  ADD ESI,0x4
00591A45  4F                        DEC EDI
00591A46  75 EE                     JNZ 0x00591a36
00591A48  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
00591A4E  33 FF                     XOR EDI,EDI
00591A50  84 C0                     TEST AL,AL
00591A52  0F 86 AD 00 00 00         JBE 0x00591b05
00591A58  8D B3 FF 00 00 00         LEA ESI,[EBX + 0xff]
LAB_00591a5e:
00591A5E  8B 46 E8                  MOV EAX,dword ptr [ESI + -0x18]
00591A61  83 F8 FF                  CMP EAX,-0x1
00591A64  74 15                     JZ 0x00591a7b
00591A66  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00591A69  8B 16                     MOV EDX,dword ptr [ESI]
00591A6B  51                        PUSH ECX
00591A6C  8B 4E EC                  MOV ECX,dword ptr [ESI + -0x14]
00591A6F  52                        PUSH EDX
00591A70  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
00591A73  51                        PUSH ECX
00591A74  50                        PUSH EAX
00591A75  52                        PUSH EDX
00591A76  E8 B5 1C 12 00            CALL 0x006b3730
LAB_00591a7b:
00591A7B  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
00591A7F  75 27                     JNZ 0x00591aa8
00591A81  8B 46 79                  MOV EAX,dword ptr [ESI + 0x79]
00591A84  83 F8 FF                  CMP EAX,-0x1
00591A87  74 1F                     JZ 0x00591aa8
00591A89  8B 8E 95 00 00 00         MOV ECX,dword ptr [ESI + 0x95]
00591A8F  8B 96 91 00 00 00         MOV EDX,dword ptr [ESI + 0x91]
00591A95  51                        PUSH ECX
00591A96  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
00591A99  52                        PUSH EDX
00591A9A  8B 96 BD 00 00 00         MOV EDX,dword ptr [ESI + 0xbd]
00591AA0  51                        PUSH ECX
00591AA1  50                        PUSH EAX
00591AA2  52                        PUSH EDX
00591AA3  E8 88 1C 12 00            CALL 0x006b3730
LAB_00591aa8:
00591AA8  33 C0                     XOR EAX,EAX
00591AAA  47                        INC EDI
00591AAB  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
00591AB1  81 C6 FB 01 00 00         ADD ESI,0x1fb
00591AB7  3B F8                     CMP EDI,EAX
00591AB9  7C A3                     JL 0x00591a5e
00591ABB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00591ABE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00591AC3  5F                        POP EDI
00591AC4  5E                        POP ESI
00591AC5  5B                        POP EBX
00591AC6  8B E5                     MOV ESP,EBP
00591AC8  5D                        POP EBP
00591AC9  C3                        RET
LAB_00591aca:
00591ACA  33 C9                     XOR ECX,ECX
00591ACC  6A 00                     PUSH 0x0
00591ACE  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00591AD4  6A 00                     PUSH 0x0
00591AD6  51                        PUSH ECX
00591AD7  6A 01                     PUSH 0x1
00591AD9  68 10 BE 7C 00            PUSH 0x7cbe10
00591ADE  E8 1D 11 16 00            CALL 0x006f2c00
00591AE3  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
00591AE9  83 C4 0C                  ADD ESP,0xc
00591AEC  50                        PUSH EAX
00591AED  52                        PUSH EDX
00591AEE  E8 FD 8E 17 00            CALL 0x0070a9f0
00591AF3  50                        PUSH EAX
00591AF4  6A 01                     PUSH 0x1
00591AF6  6A 37                     PUSH 0x37
00591AF8  68 A5 00 00 00            PUSH 0xa5
00591AFD  E8 36 1C E7 FF            CALL 0x00403738
00591B02  83 C4 20                  ADD ESP,0x20
LAB_00591b05:
00591B05  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00591B08  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00591B0D  5F                        POP EDI
00591B0E  5E                        POP ESI
00591B0F  5B                        POP EBX
00591B10  8B E5                     MOV ESP,EBP
00591B12  5D                        POP EBP
00591B13  C3                        RET
LAB_00591b14:
00591B14  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00591B17  68 F0 BD 7C 00            PUSH 0x7cbdf0
00591B1C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00591B21  56                        PUSH ESI
00591B22  6A 00                     PUSH 0x0
00591B24  68 B5 00 00 00            PUSH 0xb5
00591B29  68 D4 BC 7C 00            PUSH 0x7cbcd4
00591B2E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00591B34  E8 97 B9 11 00            CALL 0x006ad4d0
00591B39  83 C4 18                  ADD ESP,0x18
00591B3C  85 C0                     TEST EAX,EAX
00591B3E  74 01                     JZ 0x00591b41
00591B40  CC                        INT3
LAB_00591b41:
00591B41  68 B5 00 00 00            PUSH 0xb5
00591B46  68 D4 BC 7C 00            PUSH 0x7cbcd4
00591B4B  6A 00                     PUSH 0x0
00591B4D  56                        PUSH ESI
00591B4E  E8 ED 42 11 00            CALL 0x006a5e40
00591B53  5F                        POP EDI
00591B54  5E                        POP ESI
00591B55  5B                        POP EBX
00591B56  8B E5                     MOV ESP,EBP
00591B58  5D                        POP EBP
00591B59  C3                        RET
