FUN_00460360:
00460360  56                        PUSH ESI
00460361  8B F1                     MOV ESI,ECX
00460363  57                        PUSH EDI
00460364  8B 06                     MOV EAX,dword ptr [ESI]
00460366  FF 50 20                  CALL dword ptr [EAX + 0x20]
00460369  8B 16                     MOV EDX,dword ptr [ESI]
0046036B  8B CE                     MOV ECX,ESI
0046036D  8B F8                     MOV EDI,EAX
0046036F  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00460375  85 C0                     TEST EAX,EAX
00460377  75 1F                     JNZ 0x00460398
00460379  83 FF FF                  CMP EDI,-0x1
0046037C  74 1A                     JZ 0x00460398
0046037E  85 FF                     TEST EDI,EDI
00460380  74 0C                     JZ 0x0046038e
00460382  8B C7                     MOV EAX,EDI
00460384  5F                        POP EDI
00460385  48                        DEC EAX
00460386  5E                        POP ESI
00460387  F7 D8                     NEG EAX
00460389  1B C0                     SBB EAX,EAX
0046038B  C2 04 00                  RET 0x4
LAB_0046038e:
0046038E  5F                        POP EDI
0046038F  B8 02 00 00 00            MOV EAX,0x2
00460394  5E                        POP ESI
00460395  C2 04 00                  RET 0x4
LAB_00460398:
00460398  5F                        POP EDI
00460399  83 C8 FF                  OR EAX,0xffffffff
0046039C  5E                        POP ESI
0046039D  C2 04 00                  RET 0x4
