FUN_00733dc0:
00733DC0  55                        PUSH EBP
00733DC1  8B EC                     MOV EBP,ESP
00733DC3  83 EC 0C                  SUB ESP,0xc
00733DC6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00733DCD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733DD0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00733DD3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00733DD6  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00733DD9  83 E2 03                  AND EDX,0x3
00733DDC  83 FA 02                  CMP EDX,0x2
00733DDF  75 7A                     JNZ 0x00733e5b
00733DE1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733DE4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00733DE7  81 E1 08 01 00 00         AND ECX,0x108
00733DED  85 C9                     TEST ECX,ECX
00733DEF  74 6A                     JZ 0x00733e5b
00733DF1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00733DF4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733DF7  8B 0A                     MOV ECX,dword ptr [EDX]
00733DF9  2B 48 08                  SUB ECX,dword ptr [EAX + 0x8]
00733DFC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00733DFF  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00733E03  7E 56                     JLE 0x00733e5b
00733E05  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00733E08  52                        PUSH EDX
00733E09  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733E0C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00733E0F  51                        PUSH ECX
00733E10  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00733E13  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
00733E16  50                        PUSH EAX
00733E17  E8 54 A5 00 00            CALL 0x0073e370
00733E1C  83 C4 0C                  ADD ESP,0xc
00733E1F  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
00733E22  75 21                     JNZ 0x00733e45
00733E24  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00733E27  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00733E2A  81 E2 80 00 00 00         AND EDX,0x80
00733E30  85 D2                     TEST EDX,EDX
00733E32  74 0F                     JZ 0x00733e43
00733E34  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733E37  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00733E3A  83 E1 FD                  AND ECX,0xfffffffd
00733E3D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00733E40  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
LAB_00733e43:
00733E43  EB 16                     JMP 0x00733e5b
LAB_00733e45:
00733E45  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733E48  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00733E4B  83 C9 20                  OR ECX,0x20
00733E4E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00733E51  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00733E54  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00733e5b:
00733E5B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733E5E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00733E61  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00733E64  89 10                     MOV dword ptr [EAX],EDX
00733E66  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733E69  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
00733E70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00733E73  8B E5                     MOV ESP,EBP
00733E75  5D                        POP EBP
00733E76  C3                        RET
