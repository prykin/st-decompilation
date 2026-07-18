STGroupBoatC::RestoreGrpBData:
004A67A0  55                        PUSH EBP
004A67A1  8B EC                     MOV EBP,ESP
004A67A3  83 EC 4C                  SUB ESP,0x4c
004A67A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A67A9  53                        PUSH EBX
004A67AA  56                        PUSH ESI
004A67AB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004A67AE  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004A67B4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A67B7  57                        PUSH EDI
004A67B8  8D 45 B8                  LEA EAX,[EBP + -0x48]
004A67BB  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004A67BE  6A 00                     PUSH 0x0
004A67C0  50                        PUSH EAX
004A67C1  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
004A67C4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A67CA  E8 21 70 28 00            CALL 0x0072d7f0
004A67CF  8B F0                     MOV ESI,EAX
004A67D1  83 C4 08                  ADD ESP,0x8
004A67D4  85 F6                     TEST ESI,ESI
004A67D6  0F 85 C7 09 00 00         JNZ 0x004a71a3
004A67DC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004A67DF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A67E2  8B 0B                     MOV ECX,dword ptr [EBX]
004A67E4  8D 73 30                  LEA ESI,[EBX + 0x30]
004A67E7  89 48 3D                  MOV dword ptr [EAX + 0x3d],ECX
004A67EA  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
004A67ED  89 50 41                  MOV dword ptr [EAX + 0x41],EDX
004A67F0  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
004A67F3  89 48 45                  MOV dword ptr [EAX + 0x45],ECX
004A67F6  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
004A67F9  89 50 49                  MOV dword ptr [EAX + 0x49],EDX
004A67FC  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
004A67FF  89 48 4D                  MOV dword ptr [EAX + 0x4d],ECX
004A6802  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
004A6805  89 50 51                  MOV dword ptr [EAX + 0x51],EDX
004A6808  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004A680B  89 48 55                  MOV dword ptr [EAX + 0x55],ECX
004A680E  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004A6811  89 50 5D                  MOV dword ptr [EAX + 0x5d],EDX
004A6814  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
004A6817  89 48 61                  MOV dword ptr [EAX + 0x61],ECX
004A681A  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
004A681D  B9 08 00 00 00            MOV ECX,0x8
004A6822  8D 78 69                  LEA EDI,[EAX + 0x69]
004A6825  89 50 65                  MOV dword ptr [EAX + 0x65],EDX
004A6828  8D 90 DD 00 00 00         LEA EDX,[EAX + 0xdd]
004A682E  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6830  B9 15 00 00 00            MOV ECX,0x15
004A6835  8D 73 50                  LEA ESI,[EBX + 0x50]
004A6838  8D B8 89 00 00 00         LEA EDI,[EAX + 0x89]
004A683E  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6840  8D 8B A4 00 00 00         LEA ECX,[EBX + 0xa4]
004A6846  8B B3 A4 00 00 00         MOV ESI,dword ptr [EBX + 0xa4]
004A684C  89 32                     MOV dword ptr [EDX],ESI
004A684E  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A6851  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A6854  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004A6858  66 89 4A 08               MOV word ptr [EDX + 0x8],CX
004A685C  8B 93 AE 00 00 00         MOV EDX,dword ptr [EBX + 0xae]
004A6862  89 90 E7 00 00 00         MOV dword ptr [EAX + 0xe7],EDX
004A6868  66 8B 8B BA 00 00 00      MOV CX,word ptr [EBX + 0xba]
004A686F  66 89 88 F3 00 00 00      MOV word ptr [EAX + 0xf3],CX
004A6876  66 8B 93 BC 00 00 00      MOV DX,word ptr [EBX + 0xbc]
004A687D  66 89 90 F5 00 00 00      MOV word ptr [EAX + 0xf5],DX
004A6884  66 8B 8B BE 00 00 00      MOV CX,word ptr [EBX + 0xbe]
004A688B  66 89 88 F7 00 00 00      MOV word ptr [EAX + 0xf7],CX
004A6892  66 8B 93 C0 00 00 00      MOV DX,word ptr [EBX + 0xc0]
004A6899  66 89 90 F9 00 00 00      MOV word ptr [EAX + 0xf9],DX
004A68A0  66 8B 8B C2 00 00 00      MOV CX,word ptr [EBX + 0xc2]
004A68A7  66 89 88 FB 00 00 00      MOV word ptr [EAX + 0xfb],CX
004A68AE  66 8B 93 C4 00 00 00      MOV DX,word ptr [EBX + 0xc4]
004A68B5  66 89 90 FD 00 00 00      MOV word ptr [EAX + 0xfd],DX
004A68BC  8B 8B C6 00 00 00         MOV ECX,dword ptr [EBX + 0xc6]
004A68C2  89 88 FF 00 00 00         MOV dword ptr [EAX + 0xff],ECX
004A68C8  8B 93 D2 00 00 00         MOV EDX,dword ptr [EBX + 0xd2]
004A68CE  89 90 07 01 00 00         MOV dword ptr [EAX + 0x107],EDX
004A68D4  8B 8B D6 00 00 00         MOV ECX,dword ptr [EBX + 0xd6]
004A68DA  89 88 0B 01 00 00         MOV dword ptr [EAX + 0x10b],ECX
004A68E0  66 8B 93 E2 00 00 00      MOV DX,word ptr [EBX + 0xe2]
004A68E7  66 89 90 13 01 00 00      MOV word ptr [EAX + 0x113],DX
004A68EE  66 8B 8B E4 00 00 00      MOV CX,word ptr [EBX + 0xe4]
004A68F5  66 89 88 15 01 00 00      MOV word ptr [EAX + 0x115],CX
004A68FC  66 8B 93 E6 00 00 00      MOV DX,word ptr [EBX + 0xe6]
004A6903  66 89 90 17 01 00 00      MOV word ptr [EAX + 0x117],DX
004A690A  66 8B 8B E8 00 00 00      MOV CX,word ptr [EBX + 0xe8]
004A6911  66 89 88 19 01 00 00      MOV word ptr [EAX + 0x119],CX
004A6918  66 8B 93 EA 00 00 00      MOV DX,word ptr [EBX + 0xea]
004A691F  66 89 90 1B 01 00 00      MOV word ptr [EAX + 0x11b],DX
004A6926  66 8B 8B EC 00 00 00      MOV CX,word ptr [EBX + 0xec]
004A692D  66 89 88 1D 01 00 00      MOV word ptr [EAX + 0x11d],CX
004A6934  8B 93 EE 00 00 00         MOV EDX,dword ptr [EBX + 0xee]
004A693A  89 90 1F 01 00 00         MOV dword ptr [EAX + 0x11f],EDX
004A6940  8B 8B F2 00 00 00         MOV ECX,dword ptr [EBX + 0xf2]
004A6946  89 88 23 01 00 00         MOV dword ptr [EAX + 0x123],ECX
004A694C  66 8B 93 FE 00 00 00      MOV DX,word ptr [EBX + 0xfe]
004A6953  66 89 90 2B 01 00 00      MOV word ptr [EAX + 0x12b],DX
004A695A  66 8B 8B 00 01 00 00      MOV CX,word ptr [EBX + 0x100]
004A6961  66 89 88 2D 01 00 00      MOV word ptr [EAX + 0x12d],CX
004A6968  66 8B 93 02 01 00 00      MOV DX,word ptr [EBX + 0x102]
004A696F  66 89 90 2F 01 00 00      MOV word ptr [EAX + 0x12f],DX
004A6976  66 8B 8B 04 01 00 00      MOV CX,word ptr [EBX + 0x104]
004A697D  66 89 88 31 01 00 00      MOV word ptr [EAX + 0x131],CX
004A6984  66 8B 93 06 01 00 00      MOV DX,word ptr [EBX + 0x106]
004A698B  66 89 90 33 01 00 00      MOV word ptr [EAX + 0x133],DX
004A6992  66 8B 8B 08 01 00 00      MOV CX,word ptr [EBX + 0x108]
004A6999  66 89 88 35 01 00 00      MOV word ptr [EAX + 0x135],CX
004A69A0  8D B3 0A 01 00 00         LEA ESI,[EBX + 0x10a]
004A69A6  8D B8 37 01 00 00         LEA EDI,[EAX + 0x137]
004A69AC  B9 07 00 00 00            MOV ECX,0x7
004A69B1  F3 A5                     MOVSD.REP ES:EDI,ESI
004A69B3  66 A5                     MOVSW ES:EDI,ESI
004A69B5  8D 93 29 01 00 00         LEA EDX,[EBX + 0x129]
004A69BB  8D 88 56 01 00 00         LEA ECX,[EAX + 0x156]
004A69C1  A4                        MOVSB ES:EDI,ESI
004A69C2  8B 32                     MOV ESI,dword ptr [EDX]
004A69C4  89 31                     MOV dword ptr [ECX],ESI
004A69C6  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004A69CA  66 89 51 04               MOV word ptr [ECX + 0x4],DX
004A69CE  8A 8B A4 01 00 00         MOV CL,byte ptr [EBX + 0x1a4]
004A69D4  88 88 C9 01 00 00         MOV byte ptr [EAX + 0x1c9],CL
004A69DA  8B 93 2F 01 00 00         MOV EDX,dword ptr [EBX + 0x12f]
004A69E0  89 90 5C 01 00 00         MOV dword ptr [EAX + 0x15c],EDX
004A69E6  8B 8B 3B 01 00 00         MOV ECX,dword ptr [EBX + 0x13b]
004A69EC  89 88 64 01 00 00         MOV dword ptr [EAX + 0x164],ECX
004A69F2  66 8B 93 47 01 00 00      MOV DX,word ptr [EBX + 0x147]
004A69F9  66 89 90 6C 01 00 00      MOV word ptr [EAX + 0x16c],DX
004A6A00  66 8B 8B 49 01 00 00      MOV CX,word ptr [EBX + 0x149]
004A6A07  66 89 88 6E 01 00 00      MOV word ptr [EAX + 0x16e],CX
004A6A0E  66 8B 93 4B 01 00 00      MOV DX,word ptr [EBX + 0x14b]
004A6A15  66 89 90 70 01 00 00      MOV word ptr [EAX + 0x170],DX
004A6A1C  66 8B 8B 4D 01 00 00      MOV CX,word ptr [EBX + 0x14d]
004A6A23  66 89 88 72 01 00 00      MOV word ptr [EAX + 0x172],CX
004A6A2A  66 8B 93 4F 01 00 00      MOV DX,word ptr [EBX + 0x14f]
004A6A31  66 89 90 74 01 00 00      MOV word ptr [EAX + 0x174],DX
004A6A38  66 8B 8B 51 01 00 00      MOV CX,word ptr [EBX + 0x151]
004A6A3F  66 89 88 76 01 00 00      MOV word ptr [EAX + 0x176],CX
004A6A46  8B 93 53 01 00 00         MOV EDX,dword ptr [EBX + 0x153]
004A6A4C  89 90 78 01 00 00         MOV dword ptr [EAX + 0x178],EDX
004A6A52  66 8B 8B 57 01 00 00      MOV CX,word ptr [EBX + 0x157]
004A6A59  66 89 88 7C 01 00 00      MOV word ptr [EAX + 0x17c],CX
004A6A60  66 8B 93 59 01 00 00      MOV DX,word ptr [EBX + 0x159]
004A6A67  66 89 90 7E 01 00 00      MOV word ptr [EAX + 0x17e],DX
004A6A6E  66 8B 8B 5B 01 00 00      MOV CX,word ptr [EBX + 0x15b]
004A6A75  8D 93 5D 01 00 00         LEA EDX,[EBX + 0x15d]
004A6A7B  66 89 88 80 01 00 00      MOV word ptr [EAX + 0x180],CX
004A6A82  8D 88 82 01 00 00         LEA ECX,[EAX + 0x182]
004A6A88  8B 32                     MOV ESI,dword ptr [EDX]
004A6A8A  89 31                     MOV dword ptr [ECX],ESI
004A6A8C  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6A8F  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6A92  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A6A96  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A6A9A  8D 8B 67 01 00 00         LEA ECX,[EBX + 0x167]
004A6AA0  8D 90 8C 01 00 00         LEA EDX,[EAX + 0x18c]
004A6AA6  8B 31                     MOV ESI,dword ptr [ECX]
004A6AA8  89 32                     MOV dword ptr [EDX],ESI
004A6AAA  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A6AAE  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A6AB2  8D 93 6D 01 00 00         LEA EDX,[EBX + 0x16d]
004A6AB8  8D 88 92 01 00 00         LEA ECX,[EAX + 0x192]
004A6ABE  8B 32                     MOV ESI,dword ptr [EDX]
004A6AC0  89 31                     MOV dword ptr [ECX],ESI
004A6AC2  66 8B 72 04               MOV SI,word ptr [EDX + 0x4]
004A6AC6  66 89 71 04               MOV word ptr [ECX + 0x4],SI
004A6ACA  8A 52 06                  MOV DL,byte ptr [EDX + 0x6]
004A6ACD  88 51 06                  MOV byte ptr [ECX + 0x6],DL
004A6AD0  8D 8B 74 01 00 00         LEA ECX,[EBX + 0x174]
004A6AD6  8D 90 99 01 00 00         LEA EDX,[EAX + 0x199]
004A6ADC  8B 31                     MOV ESI,dword ptr [ECX]
004A6ADE  89 32                     MOV dword ptr [EDX],ESI
004A6AE0  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A6AE3  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A6AE6  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004A6AEA  66 89 4A 08               MOV word ptr [EDX + 0x8],CX
004A6AEE  8D 93 7E 01 00 00         LEA EDX,[EBX + 0x17e]
004A6AF4  8D 88 A3 01 00 00         LEA ECX,[EAX + 0x1a3]
004A6AFA  8B 32                     MOV ESI,dword ptr [EDX]
004A6AFC  89 31                     MOV dword ptr [ECX],ESI
004A6AFE  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6B01  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6B04  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004A6B07  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
004A6B0A  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
004A6B0D  8D B8 E2 01 00 00         LEA EDI,[EAX + 0x1e2]
004A6B13  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
004A6B16  8D 8B 8E 01 00 00         LEA ECX,[EBX + 0x18e]
004A6B1C  8D 90 B3 01 00 00         LEA EDX,[EAX + 0x1b3]
004A6B22  8B 31                     MOV ESI,dword ptr [ECX]
004A6B24  89 32                     MOV dword ptr [EDX],ESI
004A6B26  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A6B2A  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A6B2E  8D 93 94 01 00 00         LEA EDX,[EBX + 0x194]
004A6B34  8D 88 B9 01 00 00         LEA ECX,[EAX + 0x1b9]
004A6B3A  8B 32                     MOV ESI,dword ptr [EDX]
004A6B3C  89 31                     MOV dword ptr [ECX],ESI
004A6B3E  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004A6B42  66 89 51 04               MOV word ptr [ECX + 0x4],DX
004A6B46  8D 8B 9A 01 00 00         LEA ECX,[EBX + 0x19a]
004A6B4C  8D 90 BF 01 00 00         LEA EDX,[EAX + 0x1bf]
004A6B52  8B 31                     MOV ESI,dword ptr [ECX]
004A6B54  89 32                     MOV dword ptr [EDX],ESI
004A6B56  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004A6B5C  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A6B60  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A6B64  8B 93 A0 01 00 00         MOV EDX,dword ptr [EBX + 0x1a0]
004A6B6A  B9 0A 00 00 00            MOV ECX,0xa
004A6B6F  89 90 C5 01 00 00         MOV dword ptr [EAX + 0x1c5],EDX
004A6B75  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6B77  8B 8B 05 02 00 00         MOV ECX,dword ptr [EBX + 0x205]
004A6B7D  8D B3 81 02 00 00         LEA ESI,[EBX + 0x281]
004A6B83  89 88 12 02 00 00         MOV dword ptr [EAX + 0x212],ECX
004A6B89  8B 93 09 02 00 00         MOV EDX,dword ptr [EBX + 0x209]
004A6B8F  89 90 16 02 00 00         MOV dword ptr [EAX + 0x216],EDX
004A6B95  8B 8B 0D 02 00 00         MOV ECX,dword ptr [EBX + 0x20d]
004A6B9B  89 88 1A 02 00 00         MOV dword ptr [EAX + 0x21a],ECX
004A6BA1  8B 93 19 02 00 00         MOV EDX,dword ptr [EBX + 0x219]
004A6BA7  89 90 22 02 00 00         MOV dword ptr [EAX + 0x222],EDX
004A6BAD  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004A6BB3  89 88 32 02 00 00         MOV dword ptr [EAX + 0x232],ECX
004A6BB9  8B 93 39 02 00 00         MOV EDX,dword ptr [EBX + 0x239]
004A6BBF  89 90 36 02 00 00         MOV dword ptr [EAX + 0x236],EDX
004A6BC5  8B 8B 3D 02 00 00         MOV ECX,dword ptr [EBX + 0x23d]
004A6BCB  89 88 3A 02 00 00         MOV dword ptr [EAX + 0x23a],ECX
004A6BD1  8B 93 41 02 00 00         MOV EDX,dword ptr [EBX + 0x241]
004A6BD7  89 90 3E 02 00 00         MOV dword ptr [EAX + 0x23e],EDX
004A6BDD  8B 8B 45 02 00 00         MOV ECX,dword ptr [EBX + 0x245]
004A6BE3  89 88 42 02 00 00         MOV dword ptr [EAX + 0x242],ECX
004A6BE9  8B 93 49 02 00 00         MOV EDX,dword ptr [EBX + 0x249]
004A6BEF  89 90 46 02 00 00         MOV dword ptr [EAX + 0x246],EDX
004A6BF5  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
004A6BFB  89 88 4A 02 00 00         MOV dword ptr [EAX + 0x24a],ECX
004A6C01  66 8B 93 59 02 00 00      MOV DX,word ptr [EBX + 0x259]
004A6C08  66 89 90 52 02 00 00      MOV word ptr [EAX + 0x252],DX
004A6C0F  66 8B 8B 5B 02 00 00      MOV CX,word ptr [EBX + 0x25b]
004A6C16  66 89 88 54 02 00 00      MOV word ptr [EAX + 0x254],CX
004A6C1D  66 8B 93 5D 02 00 00      MOV DX,word ptr [EBX + 0x25d]
004A6C24  66 89 90 56 02 00 00      MOV word ptr [EAX + 0x256],DX
004A6C2B  66 8B 8B 5F 02 00 00      MOV CX,word ptr [EBX + 0x25f]
004A6C32  66 89 88 58 02 00 00      MOV word ptr [EAX + 0x258],CX
004A6C39  66 8B 93 61 02 00 00      MOV DX,word ptr [EBX + 0x261]
004A6C40  66 89 90 5A 02 00 00      MOV word ptr [EAX + 0x25a],DX
004A6C47  66 8B 8B 63 02 00 00      MOV CX,word ptr [EBX + 0x263]
004A6C4E  66 89 88 5C 02 00 00      MOV word ptr [EAX + 0x25c],CX
004A6C55  8B 93 65 02 00 00         MOV EDX,dword ptr [EBX + 0x265]
004A6C5B  89 90 5E 02 00 00         MOV dword ptr [EAX + 0x25e],EDX
004A6C61  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
004A6C67  89 88 62 02 00 00         MOV dword ptr [EAX + 0x262],ECX
004A6C6D  66 8B 93 75 02 00 00      MOV DX,word ptr [EBX + 0x275]
004A6C74  66 89 90 6A 02 00 00      MOV word ptr [EAX + 0x26a],DX
004A6C7B  66 8B 8B 77 02 00 00      MOV CX,word ptr [EBX + 0x277]
004A6C82  66 89 88 6C 02 00 00      MOV word ptr [EAX + 0x26c],CX
004A6C89  66 8B 93 79 02 00 00      MOV DX,word ptr [EBX + 0x279]
004A6C90  66 89 90 6E 02 00 00      MOV word ptr [EAX + 0x26e],DX
004A6C97  66 8B 8B 7B 02 00 00      MOV CX,word ptr [EBX + 0x27b]
004A6C9E  66 89 88 70 02 00 00      MOV word ptr [EAX + 0x270],CX
004A6CA5  66 8B 93 7D 02 00 00      MOV DX,word ptr [EBX + 0x27d]
004A6CAC  66 89 90 72 02 00 00      MOV word ptr [EAX + 0x272],DX
004A6CB3  66 8B 8B 7F 02 00 00      MOV CX,word ptr [EBX + 0x27f]
004A6CBA  66 89 88 74 02 00 00      MOV word ptr [EAX + 0x274],CX
004A6CC1  8D B8 76 02 00 00         LEA EDI,[EAX + 0x276]
004A6CC7  B9 07 00 00 00            MOV ECX,0x7
004A6CCC  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6CCE  66 A5                     MOVSW ES:EDI,ESI
004A6CD0  8D 93 A0 02 00 00         LEA EDX,[EBX + 0x2a0]
004A6CD6  8D 88 95 02 00 00         LEA ECX,[EAX + 0x295]
004A6CDC  A4                        MOVSB ES:EDI,ESI
004A6CDD  8B 32                     MOV ESI,dword ptr [EDX]
004A6CDF  89 31                     MOV dword ptr [ECX],ESI
004A6CE1  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004A6CE5  66 89 51 04               MOV word ptr [ECX + 0x4],DX
004A6CE9  8B 8B A6 02 00 00         MOV ECX,dword ptr [EBX + 0x2a6]
004A6CEF  8D 93 B2 02 00 00         LEA EDX,[EBX + 0x2b2]
004A6CF5  89 88 9B 02 00 00         MOV dword ptr [EAX + 0x29b],ECX
004A6CFB  8D 88 A3 02 00 00         LEA ECX,[EAX + 0x2a3]
004A6D01  8B 32                     MOV ESI,dword ptr [EDX]
004A6D03  89 31                     MOV dword ptr [ECX],ESI
004A6D05  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6D08  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6D0B  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A6D0F  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A6D13  8D 8B BC 02 00 00         LEA ECX,[EBX + 0x2bc]
004A6D19  8D 90 AD 02 00 00         LEA EDX,[EAX + 0x2ad]
004A6D1F  8B 31                     MOV ESI,dword ptr [ECX]
004A6D21  89 32                     MOV dword ptr [EDX],ESI
004A6D23  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A6D27  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A6D2B  8D 93 C2 02 00 00         LEA EDX,[EBX + 0x2c2]
004A6D31  8D 88 B3 02 00 00         LEA ECX,[EAX + 0x2b3]
004A6D37  8B 32                     MOV ESI,dword ptr [EDX]
004A6D39  89 31                     MOV dword ptr [ECX],ESI
004A6D3B  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6D3E  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6D41  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A6D45  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A6D49  8D 8B CC 02 00 00         LEA ECX,[EBX + 0x2cc]
004A6D4F  8D 90 BD 02 00 00         LEA EDX,[EAX + 0x2bd]
004A6D55  8B 31                     MOV ESI,dword ptr [ECX]
004A6D57  89 32                     MOV dword ptr [EDX],ESI
004A6D59  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A6D5D  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A6D61  8D 93 D2 02 00 00         LEA EDX,[EBX + 0x2d2]
004A6D67  8D 88 C3 02 00 00         LEA ECX,[EAX + 0x2c3]
004A6D6D  8B 32                     MOV ESI,dword ptr [EDX]
004A6D6F  89 31                     MOV dword ptr [ECX],ESI
004A6D71  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6D74  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6D77  66 8B 72 08               MOV SI,word ptr [EDX + 0x8]
004A6D7B  66 89 71 08               MOV word ptr [ECX + 0x8],SI
004A6D7F  8A 52 0A                  MOV DL,byte ptr [EDX + 0xa]
004A6D82  88 51 0A                  MOV byte ptr [ECX + 0xa],DL
004A6D85  8D 8B DD 02 00 00         LEA ECX,[EBX + 0x2dd]
004A6D8B  8D 90 CE 02 00 00         LEA EDX,[EAX + 0x2ce]
004A6D91  8B 31                     MOV ESI,dword ptr [ECX]
004A6D93  89 32                     MOV dword ptr [EDX],ESI
004A6D95  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A6D98  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A6D9B  66 8B 49 08               MOV CX,word ptr [ECX + 0x8]
004A6D9F  66 89 4A 08               MOV word ptr [EDX + 0x8],CX
004A6DA3  8D 93 E7 02 00 00         LEA EDX,[EBX + 0x2e7]
004A6DA9  8D 88 D8 02 00 00         LEA ECX,[EAX + 0x2d8]
004A6DAF  8B 32                     MOV ESI,dword ptr [EDX]
004A6DB1  89 31                     MOV dword ptr [ECX],ESI
004A6DB3  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6DB6  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6DB9  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004A6DBC  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
004A6DBF  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
004A6DC2  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
004A6DC5  8D 8B F7 02 00 00         LEA ECX,[EBX + 0x2f7]
004A6DCB  8D 90 E8 02 00 00         LEA EDX,[EAX + 0x2e8]
004A6DD1  8B 31                     MOV ESI,dword ptr [ECX]
004A6DD3  89 32                     MOV dword ptr [EDX],ESI
004A6DD5  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
004A6DD9  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004A6DDD  8D 93 FD 02 00 00         LEA EDX,[EBX + 0x2fd]
004A6DE3  8D 88 EE 02 00 00         LEA ECX,[EAX + 0x2ee]
004A6DE9  8B 32                     MOV ESI,dword ptr [EDX]
004A6DEB  89 31                     MOV dword ptr [ECX],ESI
004A6DED  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6DF0  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6DF3  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A6DF7  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A6DFB  8D 8B 07 03 00 00         LEA ECX,[EBX + 0x307]
004A6E01  8D 90 F8 02 00 00         LEA EDX,[EAX + 0x2f8]
004A6E07  8B 31                     MOV ESI,dword ptr [ECX]
004A6E09  89 32                     MOV dword ptr [EDX],ESI
004A6E0B  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004A6E0E  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004A6E11  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
004A6E14  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004A6E17  8D 93 13 03 00 00         LEA EDX,[EBX + 0x313]
004A6E1D  8D 88 04 03 00 00         LEA ECX,[EAX + 0x304]
004A6E23  8B 32                     MOV ESI,dword ptr [EDX]
004A6E25  89 31                     MOV dword ptr [ECX],ESI
004A6E27  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004A6E2A  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004A6E2D  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
004A6E31  66 89 51 08               MOV word ptr [ECX + 0x8],DX
004A6E35  8B 8B 1D 03 00 00         MOV ECX,dword ptr [EBX + 0x31d]
004A6E3B  89 88 0E 03 00 00         MOV dword ptr [EAX + 0x30e],ECX
004A6E41  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
004A6E44  83 F9 FF                  CMP ECX,-0x1
004A6E47  74 2E                     JZ 0x004a6e77
004A6E49  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004A6E4C  52                        PUSH EDX
004A6E4D  E8 1E 3E 20 00            CALL 0x006aac70
004A6E52  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6E55  8B F8                     MOV EDI,EAX
004A6E57  89 41 59                  MOV dword ptr [ECX + 0x59],EAX
004A6E5A  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004A6E5D  8B 73 1C                  MOV ESI,dword ptr [EBX + 0x1c]
004A6E60  8B D1                     MOV EDX,ECX
004A6E62  03 F3                     ADD ESI,EBX
004A6E64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A6E67  C1 E9 02                  SHR ECX,0x2
004A6E6A  F3 A5                     MOVSD.REP ES:EDI,ESI
004A6E6C  8B CA                     MOV ECX,EDX
004A6E6E  83 E1 03                  AND ECX,0x3
004A6E71  F3 A4                     MOVSB.REP ES:EDI,ESI
004A6E73  33 FF                     XOR EDI,EDI
004A6E75  EB 05                     JMP 0x004a6e7c
LAB_004a6e77:
004A6E77  33 FF                     XOR EDI,EDI
004A6E79  89 78 59                  MOV dword ptr [EAX + 0x59],EDI
LAB_004a6e7c:
004A6E7C  8B 8B B2 00 00 00         MOV ECX,dword ptr [EBX + 0xb2]
004A6E82  83 F9 FF                  CMP ECX,-0x1
004A6E85  74 16                     JZ 0x004a6e9d
004A6E87  03 CB                     ADD ECX,EBX
004A6E89  51                        PUSH ECX
004A6E8A  57                        PUSH EDI
004A6E8B  E8 D0 91 20 00            CALL 0x006b0060
004A6E90  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6E93  89 81 EF 00 00 00         MOV dword ptr [ECX + 0xef],EAX
004A6E99  8B C1                     MOV EAX,ECX
004A6E9B  EB 06                     JMP 0x004a6ea3
LAB_004a6e9d:
004A6E9D  89 B8 EF 00 00 00         MOV dword ptr [EAX + 0xef],EDI
LAB_004a6ea3:
004A6EA3  8B 8B CA 00 00 00         MOV ECX,dword ptr [EBX + 0xca]
004A6EA9  83 F9 FF                  CMP ECX,-0x1
004A6EAC  74 16                     JZ 0x004a6ec4
004A6EAE  03 CB                     ADD ECX,EBX
004A6EB0  51                        PUSH ECX
004A6EB1  57                        PUSH EDI
004A6EB2  E8 A9 91 20 00            CALL 0x006b0060
004A6EB7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6EBA  89 82 03 01 00 00         MOV dword ptr [EDX + 0x103],EAX
004A6EC0  8B C2                     MOV EAX,EDX
004A6EC2  EB 06                     JMP 0x004a6eca
LAB_004a6ec4:
004A6EC4  89 B8 03 01 00 00         MOV dword ptr [EAX + 0x103],EDI
LAB_004a6eca:
004A6ECA  8B 8B DA 00 00 00         MOV ECX,dword ptr [EBX + 0xda]
004A6ED0  83 F9 FF                  CMP ECX,-0x1
004A6ED3  74 16                     JZ 0x004a6eeb
004A6ED5  03 CB                     ADD ECX,EBX
004A6ED7  51                        PUSH ECX
004A6ED8  57                        PUSH EDI
004A6ED9  E8 82 91 20 00            CALL 0x006b0060
004A6EDE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6EE1  89 81 0F 01 00 00         MOV dword ptr [ECX + 0x10f],EAX
004A6EE7  8B C1                     MOV EAX,ECX
004A6EE9  EB 06                     JMP 0x004a6ef1
LAB_004a6eeb:
004A6EEB  89 B8 0F 01 00 00         MOV dword ptr [EAX + 0x10f],EDI
LAB_004a6ef1:
004A6EF1  8B 8B F6 00 00 00         MOV ECX,dword ptr [EBX + 0xf6]
004A6EF7  83 F9 FF                  CMP ECX,-0x1
004A6EFA  74 16                     JZ 0x004a6f12
004A6EFC  03 CB                     ADD ECX,EBX
004A6EFE  51                        PUSH ECX
004A6EFF  57                        PUSH EDI
004A6F00  E8 5B 91 20 00            CALL 0x006b0060
004A6F05  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6F08  89 82 27 01 00 00         MOV dword ptr [EDX + 0x127],EAX
004A6F0E  8B C2                     MOV EAX,EDX
004A6F10  EB 06                     JMP 0x004a6f18
LAB_004a6f12:
004A6F12  89 B8 27 01 00 00         MOV dword ptr [EAX + 0x127],EDI
LAB_004a6f18:
004A6F18  8B 8B 33 01 00 00         MOV ECX,dword ptr [EBX + 0x133]
004A6F1E  83 F9 FF                  CMP ECX,-0x1
004A6F21  74 16                     JZ 0x004a6f39
004A6F23  03 CB                     ADD ECX,EBX
004A6F25  51                        PUSH ECX
004A6F26  57                        PUSH EDI
004A6F27  E8 34 91 20 00            CALL 0x006b0060
004A6F2C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6F2F  89 81 60 01 00 00         MOV dword ptr [ECX + 0x160],EAX
004A6F35  8B C1                     MOV EAX,ECX
004A6F37  EB 06                     JMP 0x004a6f3f
LAB_004a6f39:
004A6F39  89 B8 60 01 00 00         MOV dword ptr [EAX + 0x160],EDI
LAB_004a6f3f:
004A6F3F  8B 8B A5 01 00 00         MOV ECX,dword ptr [EBX + 0x1a5]
004A6F45  83 F9 FF                  CMP ECX,-0x1
004A6F48  74 16                     JZ 0x004a6f60
004A6F4A  03 CB                     ADD ECX,EBX
004A6F4C  51                        PUSH ECX
004A6F4D  57                        PUSH EDI
004A6F4E  E8 0D 91 20 00            CALL 0x006b0060
004A6F53  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6F56  89 82 CA 01 00 00         MOV dword ptr [EDX + 0x1ca],EAX
004A6F5C  8B C2                     MOV EAX,EDX
004A6F5E  EB 06                     JMP 0x004a6f66
LAB_004a6f60:
004A6F60  89 B8 CA 01 00 00         MOV dword ptr [EAX + 0x1ca],EDI
LAB_004a6f66:
004A6F66  8B 8B AD 01 00 00         MOV ECX,dword ptr [EBX + 0x1ad]
004A6F6C  83 F9 FF                  CMP ECX,-0x1
004A6F6F  74 16                     JZ 0x004a6f87
004A6F71  03 CB                     ADD ECX,EBX
004A6F73  51                        PUSH ECX
004A6F74  57                        PUSH EDI
004A6F75  E8 E6 90 20 00            CALL 0x006b0060
004A6F7A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6F7D  89 81 CE 01 00 00         MOV dword ptr [ECX + 0x1ce],EAX
004A6F83  8B C1                     MOV EAX,ECX
004A6F85  EB 06                     JMP 0x004a6f8d
LAB_004a6f87:
004A6F87  89 B8 CE 01 00 00         MOV dword ptr [EAX + 0x1ce],EDI
LAB_004a6f8d:
004A6F8D  8B 8B B5 01 00 00         MOV ECX,dword ptr [EBX + 0x1b5]
004A6F93  83 F9 FF                  CMP ECX,-0x1
004A6F96  74 16                     JZ 0x004a6fae
004A6F98  03 CB                     ADD ECX,EBX
004A6F9A  51                        PUSH ECX
004A6F9B  57                        PUSH EDI
004A6F9C  E8 BF 90 20 00            CALL 0x006b0060
004A6FA1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6FA4  89 82 D2 01 00 00         MOV dword ptr [EDX + 0x1d2],EAX
004A6FAA  8B C2                     MOV EAX,EDX
004A6FAC  EB 06                     JMP 0x004a6fb4
LAB_004a6fae:
004A6FAE  89 B8 D2 01 00 00         MOV dword ptr [EAX + 0x1d2],EDI
LAB_004a6fb4:
004A6FB4  8B 8B BD 01 00 00         MOV ECX,dword ptr [EBX + 0x1bd]
004A6FBA  83 F9 FF                  CMP ECX,-0x1
004A6FBD  74 16                     JZ 0x004a6fd5
004A6FBF  03 CB                     ADD ECX,EBX
004A6FC1  51                        PUSH ECX
004A6FC2  57                        PUSH EDI
004A6FC3  E8 98 90 20 00            CALL 0x006b0060
004A6FC8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A6FCB  89 81 D6 01 00 00         MOV dword ptr [ECX + 0x1d6],EAX
004A6FD1  8B C1                     MOV EAX,ECX
004A6FD3  EB 06                     JMP 0x004a6fdb
LAB_004a6fd5:
004A6FD5  89 B8 D6 01 00 00         MOV dword ptr [EAX + 0x1d6],EDI
LAB_004a6fdb:
004A6FDB  8B 8B C5 01 00 00         MOV ECX,dword ptr [EBX + 0x1c5]
004A6FE1  83 F9 FF                  CMP ECX,-0x1
004A6FE4  74 16                     JZ 0x004a6ffc
004A6FE6  03 CB                     ADD ECX,EBX
004A6FE8  51                        PUSH ECX
004A6FE9  57                        PUSH EDI
004A6FEA  E8 71 90 20 00            CALL 0x006b0060
004A6FEF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A6FF2  89 82 DA 01 00 00         MOV dword ptr [EDX + 0x1da],EAX
004A6FF8  8B C2                     MOV EAX,EDX
004A6FFA  EB 06                     JMP 0x004a7002
LAB_004a6ffc:
004A6FFC  89 B8 DA 01 00 00         MOV dword ptr [EAX + 0x1da],EDI
LAB_004a7002:
004A7002  8B 8B CD 01 00 00         MOV ECX,dword ptr [EBX + 0x1cd]
004A7008  83 F9 FF                  CMP ECX,-0x1
004A700B  74 16                     JZ 0x004a7023
004A700D  03 CB                     ADD ECX,EBX
004A700F  51                        PUSH ECX
004A7010  57                        PUSH EDI
004A7011  E8 4A 90 20 00            CALL 0x006b0060
004A7016  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A7019  89 81 DE 01 00 00         MOV dword ptr [ECX + 0x1de],EAX
004A701F  8B C1                     MOV EAX,ECX
004A7021  EB 06                     JMP 0x004a7029
LAB_004a7023:
004A7023  89 B8 DE 01 00 00         MOV dword ptr [EAX + 0x1de],EDI
LAB_004a7029:
004A7029  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
004A702F  83 F9 FF                  CMP ECX,-0x1
004A7032  74 16                     JZ 0x004a704a
004A7034  03 CB                     ADD ECX,EBX
004A7036  51                        PUSH ECX
004A7037  57                        PUSH EDI
004A7038  E8 23 90 20 00            CALL 0x006b0060
004A703D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A7040  89 82 0E 02 00 00         MOV dword ptr [EDX + 0x20e],EAX
004A7046  8B C2                     MOV EAX,EDX
004A7048  EB 06                     JMP 0x004a7050
LAB_004a704a:
004A704A  89 B8 0E 02 00 00         MOV dword ptr [EAX + 0x20e],EDI
LAB_004a7050:
004A7050  83 BB 11 02 00 00 FF      CMP dword ptr [EBX + 0x211],-0x1
004A7057  74 3C                     JZ 0x004a7095
004A7059  8B B3 15 02 00 00         MOV ESI,dword ptr [EBX + 0x215]
004A705F  3B F7                     CMP ESI,EDI
004A7061  7E 32                     JLE 0x004a7095
004A7063  56                        PUSH ESI
004A7064  E8 07 3C 20 00            CALL 0x006aac70
004A7069  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A706C  8B F8                     MOV EDI,EAX
004A706E  89 81 1E 02 00 00         MOV dword ptr [ECX + 0x21e],EAX
004A7074  8B 93 11 02 00 00         MOV EDX,dword ptr [EBX + 0x211]
004A707A  8B CE                     MOV ECX,ESI
004A707C  8B F3                     MOV ESI,EBX
004A707E  03 F2                     ADD ESI,EDX
004A7080  8B D1                     MOV EDX,ECX
004A7082  C1 E9 02                  SHR ECX,0x2
004A7085  F3 A5                     MOVSD.REP ES:EDI,ESI
004A7087  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A708A  8B CA                     MOV ECX,EDX
004A708C  83 E1 03                  AND ECX,0x3
004A708F  F3 A4                     MOVSB.REP ES:EDI,ESI
004A7091  33 FF                     XOR EDI,EDI
004A7093  EB 06                     JMP 0x004a709b
LAB_004a7095:
004A7095  89 B8 1E 02 00 00         MOV dword ptr [EAX + 0x21e],EDI
LAB_004a709b:
004A709B  8B 8B 1D 02 00 00         MOV ECX,dword ptr [EBX + 0x21d]
004A70A1  83 F9 FF                  CMP ECX,-0x1
004A70A4  74 16                     JZ 0x004a70bc
004A70A6  03 CB                     ADD ECX,EBX
004A70A8  51                        PUSH ECX
004A70A9  57                        PUSH EDI
004A70AA  E8 B1 8F 20 00            CALL 0x006b0060
004A70AF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A70B2  89 81 26 02 00 00         MOV dword ptr [ECX + 0x226],EAX
004A70B8  8B C1                     MOV EAX,ECX
004A70BA  EB 06                     JMP 0x004a70c2
LAB_004a70bc:
004A70BC  89 B8 26 02 00 00         MOV dword ptr [EAX + 0x226],EDI
LAB_004a70c2:
004A70C2  8B 8B 25 02 00 00         MOV ECX,dword ptr [EBX + 0x225]
004A70C8  83 F9 FF                  CMP ECX,-0x1
004A70CB  74 16                     JZ 0x004a70e3
004A70CD  03 CB                     ADD ECX,EBX
004A70CF  51                        PUSH ECX
004A70D0  57                        PUSH EDI
004A70D1  E8 8A 8F 20 00            CALL 0x006b0060
004A70D6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A70D9  89 82 2A 02 00 00         MOV dword ptr [EDX + 0x22a],EAX
004A70DF  8B C2                     MOV EAX,EDX
004A70E1  EB 06                     JMP 0x004a70e9
LAB_004a70e3:
004A70E3  89 B8 2A 02 00 00         MOV dword ptr [EAX + 0x22a],EDI
LAB_004a70e9:
004A70E9  8B 8B 2D 02 00 00         MOV ECX,dword ptr [EBX + 0x22d]
004A70EF  83 F9 FF                  CMP ECX,-0x1
004A70F2  74 16                     JZ 0x004a710a
004A70F4  03 CB                     ADD ECX,EBX
004A70F6  51                        PUSH ECX
004A70F7  57                        PUSH EDI
004A70F8  E8 63 8F 20 00            CALL 0x006b0060
004A70FD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A7100  89 81 2E 02 00 00         MOV dword ptr [ECX + 0x22e],EAX
004A7106  8B C1                     MOV EAX,ECX
004A7108  EB 06                     JMP 0x004a7110
LAB_004a710a:
004A710A  89 B8 2E 02 00 00         MOV dword ptr [EAX + 0x22e],EDI
LAB_004a7110:
004A7110  8B 8B 51 02 00 00         MOV ECX,dword ptr [EBX + 0x251]
004A7116  83 F9 FF                  CMP ECX,-0x1
004A7119  74 16                     JZ 0x004a7131
004A711B  03 CB                     ADD ECX,EBX
004A711D  51                        PUSH ECX
004A711E  57                        PUSH EDI
004A711F  E8 3C 8F 20 00            CALL 0x006b0060
004A7124  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A7127  89 82 4E 02 00 00         MOV dword ptr [EDX + 0x24e],EAX
004A712D  8B C2                     MOV EAX,EDX
004A712F  EB 06                     JMP 0x004a7137
LAB_004a7131:
004A7131  89 B8 4E 02 00 00         MOV dword ptr [EAX + 0x24e],EDI
LAB_004a7137:
004A7137  8B 8B 6D 02 00 00         MOV ECX,dword ptr [EBX + 0x26d]
004A713D  83 F9 FF                  CMP ECX,-0x1
004A7140  74 16                     JZ 0x004a7158
004A7142  03 CB                     ADD ECX,EBX
004A7144  51                        PUSH ECX
004A7145  57                        PUSH EDI
004A7146  E8 15 8F 20 00            CALL 0x006b0060
004A714B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A714E  89 81 66 02 00 00         MOV dword ptr [ECX + 0x266],EAX
004A7154  8B C1                     MOV EAX,ECX
004A7156  EB 06                     JMP 0x004a715e
LAB_004a7158:
004A7158  89 B8 66 02 00 00         MOV dword ptr [EAX + 0x266],EDI
LAB_004a715e:
004A715E  8B 8B AA 02 00 00         MOV ECX,dword ptr [EBX + 0x2aa]
004A7164  83 F9 FF                  CMP ECX,-0x1
004A7167  74 23                     JZ 0x004a718c
004A7169  03 CB                     ADD ECX,EBX
004A716B  51                        PUSH ECX
004A716C  57                        PUSH EDI
004A716D  E8 EE 8E 20 00            CALL 0x006b0060
004A7172  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A7175  89 82 9F 02 00 00         MOV dword ptr [EDX + 0x29f],EAX
004A717B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004A717E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A7183  5F                        POP EDI
004A7184  5E                        POP ESI
004A7185  5B                        POP EBX
004A7186  8B E5                     MOV ESP,EBP
004A7188  5D                        POP EBP
004A7189  C2 04 00                  RET 0x4
LAB_004a718c:
004A718C  89 B8 9F 02 00 00         MOV dword ptr [EAX + 0x29f],EDI
004A7192  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004A7195  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A719A  5F                        POP EDI
004A719B  5E                        POP ESI
004A719C  5B                        POP EBX
004A719D  8B E5                     MOV ESP,EBP
004A719F  5D                        POP EBP
004A71A0  C2 04 00                  RET 0x4
LAB_004a71a3:
004A71A3  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004A71A6  68 F4 C3 7A 00            PUSH 0x7ac3f4
004A71AB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A71B0  56                        PUSH ESI
004A71B1  6A 00                     PUSH 0x0
004A71B3  68 8B 15 00 00            PUSH 0x158b
004A71B8  68 3C BE 7A 00            PUSH 0x7abe3c
004A71BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A71C3  E8 08 63 20 00            CALL 0x006ad4d0
004A71C8  83 C4 18                  ADD ESP,0x18
004A71CB  85 C0                     TEST EAX,EAX
004A71CD  74 01                     JZ 0x004a71d0
004A71CF  CC                        INT3
LAB_004a71d0:
004A71D0  68 8C 15 00 00            PUSH 0x158c
004A71D5  68 3C BE 7A 00            PUSH 0x7abe3c
004A71DA  6A 00                     PUSH 0x0
004A71DC  56                        PUSH ESI
004A71DD  E8 5E EC 1F 00            CALL 0x006a5e40
004A71E2  5F                        POP EDI
004A71E3  5E                        POP ESI
004A71E4  5B                        POP EBX
004A71E5  8B E5                     MOV ESP,EBP
004A71E7  5D                        POP EBP
004A71E8  C2 04 00                  RET 0x4
