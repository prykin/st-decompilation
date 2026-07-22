FUN_007295bf:
007295BF  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
007295C2  C7 45 AC FE FF FF FF      MOV dword ptr [EBP + -0x54],0xfffffffe
007295C9  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_007295d0:
007295D0  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
LAB_007295d3:
007295D3  8D A5 44 FF FF FF         LEA ESP,[EBP + 0xffffff44]
007295D9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007295DC  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
007295E3  5F                        POP EDI
007295E4  5E                        POP ESI
007295E5  5B                        POP EBX
007295E6  8B E5                     MOV ESP,EBP
007295E8  5D                        POP EBP
007295E9  C2 18 00                  RET 0x18
