FUN_005fa5e0:
005FA5E0  55                        PUSH EBP
005FA5E1  8B EC                     MOV EBP,ESP
005FA5E3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FA5E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FA5E9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005FA5EC  2B C8                     SUB ECX,EAX
005FA5EE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005FA5F1  56                        PUSH ESI
005FA5F2  33 F6                     XOR ESI,ESI
005FA5F4  2B C2                     SUB EAX,EDX
005FA5F6  85 C9                     TEST ECX,ECX
005FA5F8  75 15                     JNZ 0x005fa60f
005FA5FA  85 C0                     TEST EAX,EAX
005FA5FC  0F 9E C1                  SETLE CL
005FA5FF  49                        DEC ECX
005FA600  83 E1 F8                  AND ECX,0xfffffff8
005FA603  83 C1 0C                  ADD ECX,0xc
005FA606  8B F1                     MOV ESI,ECX
005FA608  8B C6                     MOV EAX,ESI
005FA60A  5E                        POP ESI
005FA60B  5D                        POP EBP
005FA60C  C2 10 00                  RET 0x10
LAB_005fa60f:
005FA60F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005FA612  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005FA615  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005FA618  C1 E0 03                  SHL EAX,0x3
005FA61B  99                        CDQ
005FA61C  F7 F9                     IDIV ECX
005FA61E  85 C9                     TEST ECX,ECX
005FA620  0F 8C A4 00 00 00         JL 0x005fa6ca
005FA626  3D 5D EC FF FF            CMP EAX,0xffffec5d
005FA62B  7D 0C                     JGE 0x005fa639
005FA62D  BE 0C 00 00 00            MOV ESI,0xc
005FA632  8B C6                     MOV EAX,ESI
005FA634  5E                        POP ESI
005FA635  5D                        POP EBP
005FA636  C2 10 00                  RET 0x10
LAB_005fa639:
005FA639  3D 27 FA FF FF            CMP EAX,0xfffffa27
005FA63E  0F 8C 25 01 00 00         JL 0x005fa769
005FA644  3D 64 FD FF FF            CMP EAX,0xfffffd64
005FA649  7D 0C                     JGE 0x005fa657
005FA64B  BE 03 00 00 00            MOV ESI,0x3
005FA650  8B C6                     MOV EAX,ESI
005FA652  5E                        POP ESI
005FA653  5D                        POP EBP
005FA654  C2 10 00                  RET 0x10
LAB_005fa657:
005FA657  3D 39 FF FF FF            CMP EAX,0xffffff39
005FA65C  7D 0C                     JGE 0x005fa66a
005FA65E  BE 02 00 00 00            MOV ESI,0x2
005FA663  8B C6                     MOV EAX,ESI
005FA665  5E                        POP ESI
005FA666  5D                        POP EBP
005FA667  C2 10 00                  RET 0x10
LAB_005fa66a:
005FA66A  3D C7 00 00 00            CMP EAX,0xc7
005FA66F  7D 0C                     JGE 0x005fa67d
005FA671  BE 01 00 00 00            MOV ESI,0x1
005FA676  8B C6                     MOV EAX,ESI
005FA678  5E                        POP ESI
005FA679  5D                        POP EBP
005FA67A  C2 10 00                  RET 0x10
LAB_005fa67d:
005FA67D  3D 9C 02 00 00            CMP EAX,0x29c
005FA682  7D 09                     JGE 0x005fa68d
005FA684  33 F6                     XOR ESI,ESI
005FA686  8B C6                     MOV EAX,ESI
005FA688  5E                        POP ESI
005FA689  5D                        POP EBP
005FA68A  C2 10 00                  RET 0x10
LAB_005fa68d:
005FA68D  3D D9 05 00 00            CMP EAX,0x5d9
005FA692  7D 0C                     JGE 0x005fa6a0
005FA694  BE 0F 00 00 00            MOV ESI,0xf
005FA699  8B C6                     MOV EAX,ESI
005FA69B  5E                        POP ESI
005FA69C  5D                        POP EBP
005FA69D  C2 10 00                  RET 0x10
LAB_005fa6a0:
005FA6A0  3D A3 13 00 00            CMP EAX,0x13a3
005FA6A5  7D 0C                     JGE 0x005fa6b3
005FA6A7  BE 0E 00 00 00            MOV ESI,0xe
005FA6AC  8B C6                     MOV EAX,ESI
005FA6AE  5E                        POP ESI
005FA6AF  5D                        POP EBP
005FA6B0  C2 10 00                  RET 0x10
LAB_005fa6b3:
005FA6B3  3D 09 15 FF 02            CMP EAX,0x2ff1509
005FA6B8  0F 8C B0 00 00 00         JL 0x005fa76e
005FA6BE  BE 0D 00 00 00            MOV ESI,0xd
005FA6C3  8B C6                     MOV EAX,ESI
005FA6C5  5E                        POP ESI
005FA6C6  5D                        POP EBP
005FA6C7  C2 10 00                  RET 0x10
LAB_005fa6ca:
005FA6CA  3D 5D EC FF FF            CMP EAX,0xffffec5d
005FA6CF  7D 0C                     JGE 0x005fa6dd
005FA6D1  BE 0C 00 00 00            MOV ESI,0xc
005FA6D6  8B C6                     MOV EAX,ESI
005FA6D8  5E                        POP ESI
005FA6D9  5D                        POP EBP
005FA6DA  C2 10 00                  RET 0x10
LAB_005fa6dd:
005FA6DD  3D 27 FA FF FF            CMP EAX,0xfffffa27
005FA6E2  7D 0C                     JGE 0x005fa6f0
005FA6E4  BE 0B 00 00 00            MOV ESI,0xb
005FA6E9  8B C6                     MOV EAX,ESI
005FA6EB  5E                        POP ESI
005FA6EC  5D                        POP EBP
005FA6ED  C2 10 00                  RET 0x10
LAB_005fa6f0:
005FA6F0  3D 64 FD FF FF            CMP EAX,0xfffffd64
005FA6F5  7D 0C                     JGE 0x005fa703
005FA6F7  BE 0A 00 00 00            MOV ESI,0xa
005FA6FC  8B C6                     MOV EAX,ESI
005FA6FE  5E                        POP ESI
005FA6FF  5D                        POP EBP
005FA700  C2 10 00                  RET 0x10
LAB_005fa703:
005FA703  3D 39 FF FF FF            CMP EAX,0xffffff39
005FA708  7D 0C                     JGE 0x005fa716
005FA70A  BE 09 00 00 00            MOV ESI,0x9
005FA70F  8B C6                     MOV EAX,ESI
005FA711  5E                        POP ESI
005FA712  5D                        POP EBP
005FA713  C2 10 00                  RET 0x10
LAB_005fa716:
005FA716  3D C7 00 00 00            CMP EAX,0xc7
005FA71B  7D 0C                     JGE 0x005fa729
005FA71D  BE 08 00 00 00            MOV ESI,0x8
005FA722  8B C6                     MOV EAX,ESI
005FA724  5E                        POP ESI
005FA725  5D                        POP EBP
005FA726  C2 10 00                  RET 0x10
LAB_005fa729:
005FA729  3D 9C 02 00 00            CMP EAX,0x29c
005FA72E  7D 0C                     JGE 0x005fa73c
005FA730  BE 07 00 00 00            MOV ESI,0x7
005FA735  8B C6                     MOV EAX,ESI
005FA737  5E                        POP ESI
005FA738  5D                        POP EBP
005FA739  C2 10 00                  RET 0x10
LAB_005fa73c:
005FA73C  3D D9 05 00 00            CMP EAX,0x5d9
005FA741  7D 0C                     JGE 0x005fa74f
005FA743  BE 06 00 00 00            MOV ESI,0x6
005FA748  8B C6                     MOV EAX,ESI
005FA74A  5E                        POP ESI
005FA74B  5D                        POP EBP
005FA74C  C2 10 00                  RET 0x10
LAB_005fa74f:
005FA74F  3D A3 13 00 00            CMP EAX,0x13a3
005FA754  7D 0C                     JGE 0x005fa762
005FA756  BE 05 00 00 00            MOV ESI,0x5
005FA75B  8B C6                     MOV EAX,ESI
005FA75D  5E                        POP ESI
005FA75E  5D                        POP EBP
005FA75F  C2 10 00                  RET 0x10
LAB_005fa762:
005FA762  3D 09 15 FF 02            CMP EAX,0x2ff1509
005FA767  7C 05                     JL 0x005fa76e
LAB_005fa769:
005FA769  BE 04 00 00 00            MOV ESI,0x4
LAB_005fa76e:
005FA76E  8B C6                     MOV EAX,ESI
005FA770  5E                        POP ESI
005FA771  5D                        POP EBP
005FA772  C2 10 00                  RET 0x10
