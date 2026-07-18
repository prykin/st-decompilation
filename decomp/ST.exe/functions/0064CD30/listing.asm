FUN_0064cd30:
0064CD30  56                        PUSH ESI
0064CD31  8B F1                     MOV ESI,ECX
0064CD33  85 F6                     TEST ESI,ESI
0064CD35  74 08                     JZ 0x0064cd3f
0064CD37  8D 86 8C 00 00 00         LEA EAX,[ESI + 0x8c]
0064CD3D  EB 02                     JMP 0x0064cd41
LAB_0064cd3f:
0064CD3F  33 C0                     XOR EAX,EAX
LAB_0064cd41:
0064CD41  50                        PUSH EAX
0064CD42  E8 44 62 DB FF            CALL 0x00402f8b
0064CD47  8B 86 B3 05 00 00         MOV EAX,dword ptr [ESI + 0x5b3]
0064CD4D  83 C4 04                  ADD ESP,0x4
0064CD50  85 C0                     TEST EAX,EAX
0064CD52  74 10                     JZ 0x0064cd64
0064CD54  50                        PUSH EAX
0064CD55  E8 16 88 06 00            CALL 0x006b5570
0064CD5A  C7 86 B3 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5b3],0x0
LAB_0064cd64:
0064CD64  5E                        POP ESI
0064CD65  C3                        RET
