FUN_0074834e:
0074834E  56                        PUSH ESI
0074834F  57                        PUSH EDI
00748350  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
00748354  8B F1                     MOV ESI,ECX
00748356  57                        PUSH EDI
00748357  E8 0C FC FF FF            CALL 0x00747f68
0074835C  85 C0                     TEST EAX,EAX
0074835E  7C 17                     JL 0x00748377
00748360  8B 07                     MOV EAX,dword ptr [EDI]
00748362  81 C6 9C 00 00 00         ADD ESI,0x9c
00748368  56                        PUSH ESI
00748369  68 60 1B 7A 00            PUSH 0x7a1b60
0074836E  57                        PUSH EDI
0074836F  FF 10                     CALL dword ptr [EAX]
00748371  85 C0                     TEST EAX,EAX
00748373  7C 02                     JL 0x00748377
00748375  33 C0                     XOR EAX,EAX
LAB_00748377:
00748377  5F                        POP EDI
00748378  5E                        POP ESI
00748379  C2 04 00                  RET 0x4
