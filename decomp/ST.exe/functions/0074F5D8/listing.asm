FUN_0074f5d8:
0074F5D8  53                        PUSH EBX
0074F5D9  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
0074F5DD  85 DB                     TEST EBX,EBX
0074F5DF  75 07                     JNZ 0x0074f5e8
0074F5E1  B8 03 40 00 80            MOV EAX,0x80004003
0074F5E6  EB 26                     JMP 0x0074f60e
LAB_0074f5e8:
0074F5E8  57                        PUSH EDI
0074F5E9  56                        PUSH ESI
0074F5EA  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074F5EE  8B 7E 38                  MOV EDI,dword ptr [ESI + 0x38]
0074F5F1  57                        PUSH EDI
0074F5F2  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F5F8  DF 6E 18                  FILD qword ptr [ESI + 0x18]
0074F5FB  57                        PUSH EDI
0074F5FC  DC 0D F8 1B 7A 00         FMUL double ptr [0x007a1bf8]
0074F602  DD 1B                     FSTP double ptr [EBX]
0074F604  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F60A  5E                        POP ESI
0074F60B  33 C0                     XOR EAX,EAX
0074F60D  5F                        POP EDI
LAB_0074f60e:
0074F60E  5B                        POP EBX
0074F60F  C2 08 00                  RET 0x8
