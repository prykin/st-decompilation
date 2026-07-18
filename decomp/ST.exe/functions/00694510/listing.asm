FUN_00694510:
00694510  56                        PUSH ESI
00694511  8B F1                     MOV ESI,ECX
00694513  C7 86 9D 19 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x199d],0xffffffff
LAB_0069451d:
0069451D  8B 96 9D 19 00 00         MOV EDX,dword ptr [ESI + 0x199d]
00694523  42                        INC EDX
00694524  8B C2                     MOV EAX,EDX
00694526  89 96 9D 19 00 00         MOV dword ptr [ESI + 0x199d],EDX
0069452C  83 F8 08                  CMP EAX,0x8
0069452F  7D 3B                     JGE 0x0069456c
LAB_00694531:
00694531  50                        PUSH EAX
00694532  8B CE                     MOV ECX,ESI
00694534  E8 DA F3 D6 FF            CALL 0x00403913
00694539  85 C0                     TEST EAX,EAX
0069453B  75 16                     JNZ 0x00694553
0069453D  8B 96 9D 19 00 00         MOV EDX,dword ptr [ESI + 0x199d]
00694543  42                        INC EDX
00694544  8B C2                     MOV EAX,EDX
00694546  89 96 9D 19 00 00         MOV dword ptr [ESI + 0x199d],EDX
0069454C  83 F8 08                  CMP EAX,0x8
0069454F  7D 1B                     JGE 0x0069456c
00694551  EB DE                     JMP 0x00694531
LAB_00694553:
00694553  8B 86 9D 19 00 00         MOV EAX,dword ptr [ESI + 0x199d]
00694559  8B CE                     MOV ECX,ESI
0069455B  50                        PUSH EAX
0069455C  E8 B2 F3 D6 FF            CALL 0x00403913
00694561  85 C0                     TEST EAX,EAX
00694563  74 07                     JZ 0x0069456c
00694565  80 38 00                  CMP byte ptr [EAX],0x0
00694568  75 B3                     JNZ 0x0069451d
0069456A  5E                        POP ESI
0069456B  C3                        RET
LAB_0069456c:
0069456C  33 C0                     XOR EAX,EAX
0069456E  5E                        POP ESI
0069456F  C3                        RET
