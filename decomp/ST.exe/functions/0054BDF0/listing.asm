FUN_0054bdf0:
0054BDF0  55                        PUSH EBP
0054BDF1  8B EC                     MOV EBP,ESP
0054BDF3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0054BDF6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0054BDF9  56                        PUSH ESI
0054BDFA  33 C0                     XOR EAX,EAX
0054BDFC  39 11                     CMP dword ptr [ECX],EDX
0054BDFE  7D 07                     JGE 0x0054be07
0054BE00  89 11                     MOV dword ptr [ECX],EDX
0054BE02  B8 01 00 00 00            MOV EAX,0x1
LAB_0054be07:
0054BE07  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0054BE0A  8D 54 32 FF               LEA EDX,[EDX + ESI*0x1 + -0x1]
0054BE0E  8B 31                     MOV ESI,dword ptr [ECX]
0054BE10  3B F2                     CMP ESI,EDX
0054BE12  7E 07                     JLE 0x0054be1b
0054BE14  89 11                     MOV dword ptr [ECX],EDX
0054BE16  B8 01 00 00 00            MOV EAX,0x1
LAB_0054be1b:
0054BE1B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0054BE1E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054BE21  39 11                     CMP dword ptr [ECX],EDX
0054BE23  7D 07                     JGE 0x0054be2c
0054BE25  89 11                     MOV dword ptr [ECX],EDX
0054BE27  B8 01 00 00 00            MOV EAX,0x1
LAB_0054be2c:
0054BE2C  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0054BE2F  8D 54 32 FF               LEA EDX,[EDX + ESI*0x1 + -0x1]
0054BE33  8B 31                     MOV ESI,dword ptr [ECX]
0054BE35  3B F2                     CMP ESI,EDX
0054BE37  5E                        POP ESI
0054BE38  7E 07                     JLE 0x0054be41
0054BE3A  89 11                     MOV dword ptr [ECX],EDX
0054BE3C  B8 01 00 00 00            MOV EAX,0x1
LAB_0054be41:
0054BE41  5D                        POP EBP
0054BE42  C2 18 00                  RET 0x18
