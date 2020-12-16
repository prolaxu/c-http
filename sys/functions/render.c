void render(buff,connfd){
    snprintf((char*)buff,sizeof(buff),"HTTP/1.0 200 Ok \r\n\r\nHello World !");
    write(connfd,(char*)buff,strlen((char *)buff));
    exit(1);
}