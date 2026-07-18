FUN_006b6500:
006B6500  55                        PUSH EBP
006B6501  8B EC                     MOV EBP,ESP
006B6503  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B6506  56                        PUSH ESI
006B6507  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B650A  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006B650D  8B C1                     MOV EAX,ECX
006B650F  83 E1 FD                  AND ECX,0xfffffffd
006B6512  D1 E8                     SHR EAX,0x1
006B6514  83 E0 01                  AND EAX,0x1
006B6517  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006B651A  85 F6                     TEST ESI,ESI
006B651C  5E                        POP ESI
006B651D  74 06                     JZ 0x006b6525
006B651F  83 C9 02                  OR ECX,0x2
006B6522  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
LAB_006b6525:
006B6525  5D                        POP EBP
006B6526  C2 08 00                  RET 0x8
