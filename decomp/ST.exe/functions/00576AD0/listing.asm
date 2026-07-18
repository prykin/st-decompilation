FUN_00576ad0:
00576AD0  55                        PUSH EBP
00576AD1  8B EC                     MOV EBP,ESP
00576AD3  83 EC 4C                  SUB ESP,0x4c
00576AD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00576ADB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00576ADE  56                        PUSH ESI
00576ADF  8D 55 B8                  LEA EDX,[EBP + -0x48]
00576AE2  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00576AE5  6A 00                     PUSH 0x0
00576AE7  52                        PUSH EDX
00576AE8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00576AEF  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00576AF2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576AF8  E8 F3 6C 1B 00            CALL 0x0072d7f0
00576AFD  8B F0                     MOV ESI,EAX
00576AFF  83 C4 08                  ADD ESP,0x8
00576B02  85 F6                     TEST ESI,ESI
00576B04  75 38                     JNZ 0x00576b3e
00576B06  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00576B09  6A 00                     PUSH 0x0
00576B0B  8D 4D FC                  LEA ECX,[EBP + -0x4]
00576B0E  6A 00                     PUSH 0x0
00576B10  8B 06                     MOV EAX,dword ptr [ESI]
00576B12  51                        PUSH ECX
00576B13  6A 01                     PUSH 0x1
00576B15  8B CE                     MOV ECX,ESI
00576B17  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00576B1A  8B 16                     MOV EDX,dword ptr [ESI]
00576B1C  6A 00                     PUSH 0x0
00576B1E  6A 00                     PUSH 0x0
00576B20  68 2C 2A 80 00            PUSH 0x802a2c
00576B25  68 01 01 00 00            PUSH 0x101
00576B2A  8B CE                     MOV ECX,ESI
00576B2C  FF 52 0C                  CALL dword ptr [EDX + 0xc]
00576B2F  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00576B32  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576B37  33 C0                     XOR EAX,EAX
00576B39  5E                        POP ESI
00576B3A  8B E5                     MOV ESP,EBP
00576B3C  5D                        POP EBP
00576B3D  C3                        RET
LAB_00576b3e:
00576B3E  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00576B41  68 78 AB 7C 00            PUSH 0x7cab78
00576B46  68 CC 4C 7A 00            PUSH 0x7a4ccc
00576B4B  56                        PUSH ESI
00576B4C  6A 00                     PUSH 0x0
00576B4E  6A 2C                     PUSH 0x2c
00576B50  68 5C AB 7C 00            PUSH 0x7cab5c
00576B55  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576B5B  E8 70 69 13 00            CALL 0x006ad4d0
00576B60  83 C4 18                  ADD ESP,0x18
00576B63  85 C0                     TEST EAX,EAX
00576B65  74 01                     JZ 0x00576b68
00576B67  CC                        INT3
LAB_00576b68:
00576B68  6A 2D                     PUSH 0x2d
00576B6A  68 5C AB 7C 00            PUSH 0x7cab5c
00576B6F  6A 00                     PUSH 0x0
00576B71  56                        PUSH ESI
00576B72  E8 C9 F2 12 00            CALL 0x006a5e40
00576B77  83 C8 FF                  OR EAX,0xffffffff
00576B7A  5E                        POP ESI
00576B7B  8B E5                     MOV ESP,EBP
00576B7D  5D                        POP EBP
00576B7E  C3                        RET
