FUN_0074a612:
0074A612  56                        PUSH ESI
0074A613  8B F1                     MOV ESI,ECX
0074A615  57                        PUSH EDI
0074A616  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A61C  57                        PUSH EDI
0074A61D  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A623  83 BE C0 00 00 00 00      CMP dword ptr [ESI + 0xc0],0x0
0074A62A  8D 86 C0 00 00 00         LEA EAX,[ESI + 0xc0]
0074A630  74 0A                     JZ 0x0074a63c
0074A632  83 20 00                  AND dword ptr [EAX],0x0
0074A635  8B 06                     MOV EAX,dword ptr [ESI]
0074A637  8B CE                     MOV ECX,ESI
0074A639  FF 50 60                  CALL dword ptr [EAX + 0x60]
LAB_0074a63c:
0074A63C  57                        PUSH EDI
0074A63D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A643  5F                        POP EDI
0074A644  5E                        POP ESI
0074A645  C3                        RET
