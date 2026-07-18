FUN_0074a760:
0074A760  8B 81 C0 00 00 00         MOV EAX,dword ptr [ECX + 0xc0]
0074A766  56                        PUSH ESI
0074A767  8D B1 C0 00 00 00         LEA ESI,[ECX + 0xc0]
0074A76D  85 C0                     TEST EAX,EAX
0074A76F  74 0A                     JZ 0x0074a77b
0074A771  50                        PUSH EAX
0074A772  FF 15 E4 BE 85 00         CALL dword ptr [0x0085bee4]
0074A778  83 26 00                  AND dword ptr [ESI],0x0
LAB_0074a77b:
0074A77B  5E                        POP ESI
0074A77C  C3                        RET
