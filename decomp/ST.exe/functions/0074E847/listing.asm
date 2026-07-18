FUN_0074e847:
0074E847  55                        PUSH EBP
0074E848  8B EC                     MOV EBP,ESP
0074E84A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E84D  56                        PUSH ESI
0074E84E  85 C0                     TEST EAX,EAX
0074E850  57                        PUSH EDI
0074E851  75 07                     JNZ 0x0074e85a
0074E853  B8 03 40 00 80            MOV EAX,0x80004003
0074E858  EB 2E                     JMP 0x0074e888
LAB_0074e85a:
0074E85A  83 20 00                  AND dword ptr [EAX],0x0
0074E85D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074E860  6A 10                     PUSH 0x10
0074E862  BF 00 12 7A 00            MOV EDI,0x7a1200
0074E867  59                        POP ECX
0074E868  33 D2                     XOR EDX,EDX
0074E86A  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E86C  50                        PUSH EAX
0074E86D  75 0E                     JNZ 0x0074e87d
0074E86F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E872  83 C0 F8                  ADD EAX,-0x8
0074E875  50                        PUSH EAX
0074E876  E8 2B D0 FF FF            CALL 0x0074b8a6
0074E87B  EB 0B                     JMP 0x0074e888
LAB_0074e87d:
0074E87D  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E880  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074E883  E8 36 FE FF FF            CALL 0x0074e6be
LAB_0074e888:
0074E888  5F                        POP EDI
0074E889  5E                        POP ESI
0074E88A  5D                        POP EBP
0074E88B  C2 0C 00                  RET 0xc
