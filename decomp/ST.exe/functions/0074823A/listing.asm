FUN_0074823a:
0074823A  56                        PUSH ESI
0074823B  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074823F  85 F6                     TEST ESI,ESI
00748241  75 07                     JNZ 0x0074824a
00748243  B8 03 40 00 80            MOV EAX,0x80004003
00748248  EB 31                     JMP 0x0074827b
LAB_0074824a:
0074824A  6A 14                     PUSH 0x14
0074824C  E8 DF 62 FE FF            CALL 0x0072e530
00748251  85 C0                     TEST EAX,EAX
00748253  59                        POP ECX
00748254  74 13                     JZ 0x00748269
00748256  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0074825A  6A 00                     PUSH 0x0
0074825C  83 C1 F4                  ADD ECX,-0xc
0074825F  51                        PUSH ECX
00748260  8B C8                     MOV ECX,EAX
00748262  E8 0D F6 FF FF            CALL 0x00747874
00748267  EB 02                     JMP 0x0074826b
LAB_00748269:
00748269  33 C0                     XOR EAX,EAX
LAB_0074826b:
0074826B  89 06                     MOV dword ptr [ESI],EAX
0074826D  F7 D8                     NEG EAX
0074826F  1B C0                     SBB EAX,EAX
00748271  25 F2 FF F8 7F            AND EAX,0x7ff8fff2
00748276  05 0E 00 07 80            ADD EAX,0x8007000e
LAB_0074827b:
0074827B  5E                        POP ESI
0074827C  C2 08 00                  RET 0x8
