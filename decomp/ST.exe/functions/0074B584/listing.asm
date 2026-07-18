FUN_0074b584:
0074B584  56                        PUSH ESI
0074B585  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074B589  6A 01                     PUSH 0x1
0074B58B  81 FE 00 00 00 40         CMP ESI,0x40000000
0074B591  59                        POP ECX
0074B592  7E 07                     JLE 0x0074b59b
0074B594  B9 00 80 00 00            MOV ECX,0x8000
0074B599  EB 45                     JMP 0x0074b5e0
LAB_0074b59b:
0074B59B  3B F1                     CMP ESI,ECX
0074B59D  7E 0B                     JLE 0x0074b5aa
LAB_0074b59f:
0074B59F  03 C9                     ADD ECX,ECX
0074B5A1  8B C1                     MOV EAX,ECX
0074B5A3  0F AF C1                  IMUL EAX,ECX
0074B5A6  3B C6                     CMP EAX,ESI
0074B5A8  7C F5                     JL 0x0074b59f
LAB_0074b5aa:
0074B5AA  85 F6                     TEST ESI,ESI
0074B5AC  75 04                     JNZ 0x0074b5b2
0074B5AE  33 C9                     XOR ECX,ECX
0074B5B0  EB 2E                     JMP 0x0074b5e0
LAB_0074b5b2:
0074B5B2  8B C1                     MOV EAX,ECX
0074B5B4  0F AF C1                  IMUL EAX,ECX
0074B5B7  03 C6                     ADD EAX,ESI
0074B5B9  03 C9                     ADD ECX,ECX
0074B5BB  99                        CDQ
0074B5BC  F7 F9                     IDIV ECX
0074B5BE  8B C8                     MOV ECX,EAX
0074B5C0  85 C9                     TEST ECX,ECX
0074B5C2  7C 1C                     JL 0x0074b5e0
0074B5C4  0F AF C1                  IMUL EAX,ECX
0074B5C7  03 C6                     ADD EAX,ESI
0074B5C9  03 C9                     ADD ECX,ECX
0074B5CB  99                        CDQ
0074B5CC  F7 F9                     IDIV ECX
0074B5CE  8B C8                     MOV ECX,EAX
0074B5D0  85 C9                     TEST ECX,ECX
0074B5D2  7C 0C                     JL 0x0074b5e0
0074B5D4  0F AF C1                  IMUL EAX,ECX
0074B5D7  03 C6                     ADD EAX,ESI
0074B5D9  03 C9                     ADD ECX,ECX
0074B5DB  99                        CDQ
0074B5DC  F7 F9                     IDIV ECX
0074B5DE  8B C8                     MOV ECX,EAX
LAB_0074b5e0:
0074B5E0  8B C1                     MOV EAX,ECX
0074B5E2  5E                        POP ESI
0074B5E3  C2 04 00                  RET 0x4
