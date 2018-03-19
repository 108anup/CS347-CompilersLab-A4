for ( i=0;i<10;i++)
{
  job_array[i] = Job(job_id=i, flops_required = 10,
                     deadline = 10 + i*5 , mem_required = 64,
                     affinity = [0.2,0.7,1,2]);
}

for ( i=0;i<5;i++)
{
  mem1 = Memory(memory_type='primary', mem_size = 512);
  processor_array1[i] = Processor(isa = 'ARM', clock_speed : 40,
                                   l1_memory = mem1);
  processor_array2[i] = Processor(isa = 'AMD',
                                  clock_speed : 80, l1_memory =
                                  Memory(memory_type='primary',
                                          mem_size = 512));
}
ram = Memory(memory_type= 'primary', mem_size = 4096, name = "ram1");

cluster_1 = Cluster(processors=processor_array1,
                    topology = "ring", 50, 40, name = "cluster1");
cluster_2 = Cluster(processors=processor_array2,
                    topology = "star", 50, 40, name = "cluster2");

link_1 = Link(start_point = "cluster1", end_point= "ram1", 40, 50);
link_2 = Link(start_point = "cluster2", end_point= "ram1", 40, 50);

cluster_3 = Cluster(processors={cluster_1, cluster_2},
                    topology = "star", 100, 80, name = "cluster3");

cluster_3.submit_jobs(job_array1);
run(cluster3);

  

  
