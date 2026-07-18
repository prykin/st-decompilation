FUN_0064a580:
0064A580  A1 F8 18 81 00            MOV EAX,[0x008118f8]
0064A585  85 C0                     TEST EAX,EAX
0064A587  74 07                     JZ 0x0064a590
0064A589  50                        PUSH EAX
0064A58A  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_0064a590:
0064A590  C7 05 F8 18 81 00 00 00 00 00  MOV dword ptr [0x008118f8],0x0
0064A59A  C3                        RET
