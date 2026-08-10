FUN_0074f649:
0074F649  53                        PUSH EBX
0074F64A  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
0074F64E  85 DB                     TEST EBX,EBX
0074F650  75 07                     JNZ 0x0074f659
0074F652  B8 03 40 00 80            MOV EAX,0x80004003
0074F657  EB 26                     JMP 0x0074f67f
LAB_0074f659:
0074F659  57                        PUSH EDI
0074F65A  56                        PUSH ESI
0074F65B  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074F65F  8B 7E 38                  MOV EDI,dword ptr [ESI + 0x38]
0074F662  57                        PUSH EDI
0074F663  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F669  DF 6E 28                  FILD qword ptr [ESI + 0x28]
0074F66C  57                        PUSH EDI
0074F66D  DC 0D F8 1B 7A 00         FMUL double ptr [0x007a1bf8]
0074F673  DD 1B                     FSTP double ptr [EBX]
0074F675  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F67B  5E                        POP ESI
0074F67C  33 C0                     XOR EAX,EAX
0074F67E  5F                        POP EDI
LAB_0074f67f:
0074F67F  5B                        POP EBX
0074F680  C2 08 00                  RET 0x8
