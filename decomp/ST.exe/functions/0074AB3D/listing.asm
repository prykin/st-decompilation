FUN_0074ab3d:
0074AB3D  56                        PUSH ESI
0074AB3E  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074AB42  85 F6                     TEST ESI,ESI
0074AB44  75 07                     JNZ 0x0074ab4d
0074AB46  B8 03 40 00 80            MOV EAX,0x80004003
0074AB4B  EB 22                     JMP 0x0074ab6f
LAB_0074ab4d:
0074AB4D  6A 08                     PUSH 0x8
0074AB4F  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
0074AB55  85 C0                     TEST EAX,EAX
0074AB57  89 06                     MOV dword ptr [ESI],EAX
0074AB59  75 07                     JNZ 0x0074ab62
0074AB5B  B8 0E 00 07 80            MOV EAX,0x8007000e
0074AB60  EB 0D                     JMP 0x0074ab6f
LAB_0074ab62:
0074AB62  68 98 E2 7E 00            PUSH 0x7ee298
0074AB67  50                        PUSH EAX
0074AB68  E8 13 2A 00 00            CALL 0x0074d580
0074AB6D  33 C0                     XOR EAX,EAX
LAB_0074ab6f:
0074AB6F  5E                        POP ESI
0074AB70  C2 08 00                  RET 0x8
