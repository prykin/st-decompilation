FUN_00576e10:
00576E10  55                        PUSH EBP
00576E11  8B EC                     MOV EBP,ESP
00576E13  83 EC 48                  SUB ESP,0x48
00576E16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00576E1B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00576E1E  56                        PUSH ESI
00576E1F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00576E22  8D 4D B8                  LEA ECX,[EBP + -0x48]
00576E25  6A 00                     PUSH 0x0
00576E27  52                        PUSH EDX
00576E28  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00576E2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576E31  E8 BA 69 1B 00            CALL 0x0072d7f0
00576E36  8B F0                     MOV ESI,EAX
00576E38  83 C4 08                  ADD ESP,0x8
00576E3B  85 F6                     TEST ESI,ESI
00576E3D  75 3C                     JNZ 0x00576e7b
00576E3F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00576E42  6A 00                     PUSH 0x0
00576E44  6A 00                     PUSH 0x0
00576E46  68 A4 B2 7F 00            PUSH 0x7fb2a4
00576E4B  8B 06                     MOV EAX,dword ptr [ESI]
00576E4D  68 00 01 00 00            PUSH 0x100
00576E52  8B CE                     MOV ECX,ESI
00576E54  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00576E57  8B 16                     MOV EDX,dword ptr [ESI]
00576E59  6A 00                     PUSH 0x0
00576E5B  6A 00                     PUSH 0x0
00576E5D  68 88 B2 7F 00            PUSH 0x7fb288
00576E62  68 02 01 00 00            PUSH 0x102
00576E67  8B CE                     MOV ECX,ESI
00576E69  FF 52 0C                  CALL dword ptr [EDX + 0xc]
00576E6C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00576E6F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576E74  33 C0                     XOR EAX,EAX
00576E76  5E                        POP ESI
00576E77  8B E5                     MOV ESP,EBP
00576E79  5D                        POP EBP
00576E7A  C3                        RET
LAB_00576e7b:
00576E7B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00576E7E  68 CC AB 7C 00            PUSH 0x7cabcc
00576E83  68 CC 4C 7A 00            PUSH 0x7a4ccc
00576E88  56                        PUSH ESI
00576E89  6A 00                     PUSH 0x0
00576E8B  6A 65                     PUSH 0x65
00576E8D  68 5C AB 7C 00            PUSH 0x7cab5c
00576E92  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576E98  E8 33 66 13 00            CALL 0x006ad4d0
00576E9D  83 C4 18                  ADD ESP,0x18
00576EA0  85 C0                     TEST EAX,EAX
00576EA2  74 01                     JZ 0x00576ea5
00576EA4  CC                        INT3
LAB_00576ea5:
00576EA5  6A 65                     PUSH 0x65
00576EA7  68 5C AB 7C 00            PUSH 0x7cab5c
00576EAC  6A 00                     PUSH 0x0
00576EAE  56                        PUSH ESI
00576EAF  E8 8C EF 12 00            CALL 0x006a5e40
00576EB4  B8 FC FF FF FF            MOV EAX,0xfffffffc
00576EB9  5E                        POP ESI
00576EBA  8B E5                     MOV ESP,EBP
00576EBC  5D                        POP EBP
00576EBD  C3                        RET
